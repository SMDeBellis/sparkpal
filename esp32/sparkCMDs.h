const String SPARK_BT_NAME = "Spark 40 Audio";
const int SET_PRESET_CMD_SIZE = 27;


byte SET_PRESET_1_CMD[] = {
  0x01, 0xFE, 0x00, 0x00,
  0x53, 0xFE, 0x1A, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0xF0, 0x01, 0x24, 0x00,
  0x01, 0x38, 0x00, 0x00,
  0x00, 0xF7
};

byte SET_PRESET_2_CMD[] = {
  0x01, 0xFE, 0x00, 0x00,
  0x53, 0xFE, 0x1A, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0xF0, 0x01, 0x24, 0x00,
  0x01, 0x38, 0x00, 0x00,
  0x01, 0xF7
};

byte SET_PRESET_3_CMD[] = {
  0x01, 0xFE, 0x00, 0x00,
  0x53, 0xFE, 0x1A, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0xF0, 0x01, 0x24, 0x00,
  0x01, 0x38, 0x00, 0x00,
  0x02, 0xF7
};

byte SET_PRESET_4_CMD[] = {
  0x01, 0xFE, 0x00, 0x00,
  0x53, 0xFE, 0x1A, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0xF0, 0x01, 0x24, 0x00,
  0x01, 0x38, 0x00, 0x00,
  0x03, 0xF7
};

byte* PRESET_CMD_LIST[] = {
  SET_PRESET_1_CMD, 
  SET_PRESET_2_CMD, 
  SET_PRESET_3_CMD, 
  SET_PRESET_4_CMD
};

byte GET_CURR_PRESET_DATA_CMD[] = {
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x0a, 0x01,
  0x02, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7
};

byte GET_CURR_PRESET_CMD[] = {
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x08, 0x00,
  0x02, 0x10, 0xf7, 0x79
};

byte RES_PACKET_START[] = {
  0x01, 0xfe, 0x00, 0x00, 0x41, 0xFF, 0x6A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

byte RES_CMD_START[] = {
  0xF0, 0x01
};

byte RES_CMD_CONTENT_START = 0x19;

byte RES_CMD_END = 0xF7;

byte RES_CMD_GET_PRESET_DATA[] = { 
  0x03, 0x01
};

byte RES_START_OF_PEDAL_CONFIG[] = {
  0x70, 0x00, 0x00, 0x17
};
byte FX_PARA_PREFIX = 0x11;
byte FX_PARA_FIRST_BYTE = 0x4A;

/************** Reg Expression ***************/
const char* exp_noisegate[]={
  "n.?o.?i.?s.?e.?g.?a.?t.?e"
};
const char* exp_drive[]={
  "B.?o.?o.?s.?t.?e.?r",
  "D.?i.?s.?t.?o.?r.?t.?i.?o.?n.?T.?S.?9",  
  "O.?v.?e.?r.?d.?r.?i.?v.?e",
  "F.?u.?z.?z.?",
  "P.?r.?o.?C.?o.?R.?a.?t",
  "B.?a.?s.?s.?.B.?i.?g.?M.?u.?f.?f",
  "G.?u.?i.?t.?a.?r.?M.?u.?f.?f",
  "B.?a.?s.?s.?m.?a.?s.?t.?e.?r",
  "S.?A.?B.?d.?r.?i.?v.?e"
};

const char* exp_mod[]={
  "T.?r.?e.?m.?o.?l.?o",
  "C.?h.?o.?r.?u.?s.?A.-n.-a.-l.-o.-g", //Having more chars to be skipped in the "Analog" data
  "F.?l.?a.?n.?g.?e.?r",
  "P.?h.?a.?s.?e.?r",
  "V.?i.?b.?r.?a.?t.?o",
  "U.?n.?i.?V.?i.?b.?e",  
  "C.?l.?o.?n.?e.?r",
  "M.?i.?n.?i.?V.?i.?b.?e",
  "T.?r.?e.-m.-o.-l.-a.-t.?o.?r",
  "T.?r.?e.?m.?o.?l.?o.?S.?q.?u.?a.?r.?e"
};

const char* exp_delay[]={
  "D.?e.?l.?a.?y.?M.?o.?n.?o",
  "D.?e.?l.?a.?y.?E.?c.?h.?o.?F.?i.?l.?t",
  "V.?i.?n.?t.?a.?g.?e.?D.?e.?l.?a.?y",
  "D.?e.?l.?a.?y.?R.?e.?v.?e.?r.?s.?e",
  "D.?e.?l.?a.?y.?M.?u.?l.?t.?i.?H.?e.?a.?d",
  "D.?e.?l.?a.?y.?R.?e.?2.?0"
};

/************** FX On/Off Commands ***************/
//byte FX_ON = 0x43;
//byte FX_OFF = 0x42;

//DRIVE
byte FX_DRIVE_BOOSTER_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x1b, 0x37, 0x01, 0x15, 0x02, 0x07, 0x27, 0x42, 0x6f, 0x6f, 0x73, 0x74, 0x04, 0x65, 0x72, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_BOOSTER_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x1b, 0x37, 0x01, 0x15, 0x02, 0x07, 0x27, 0x42, 0x6f, 0x6f, 0x73, 0x74, 0x04, 0x65, 0x72, 0x42, 0xf7, 0x79
};
byte FX_DRIVE_TUBEDRIVE_ON_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x27, 0x76, 0x01, 0x15, 0x02, 0x0d, 0x2d, 0x44, 0x69, 0x73, 0x74, 0x6f, 0x00, 0x72, 0x74, 0x69, 0x6f, 0x6e, 0x54, 0x53, 0x02, 0x39, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_TUBEDRIVE_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x27, 0x76, 0x01, 0x15, 0x02, 0x0d, 0x2d, 0x44, 0x69, 0x73, 0x74, 0x6f, 0x00, 0x72, 0x74, 0x69, 0x6f, 0x6e, 0x54, 0x53, 0x02, 0x39, 0x42, 0xf7, 0x79
};
byte FX_DRIVE_OVERDRIVE_ON_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x11, 0x32, 0x01, 0x15, 0x02, 0x09, 0x29, 0x4f, 0x76, 0x65, 0x72, 0x64, 0x10, 0x72, 0x69, 0x76, 0x65, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_OVERDRIVE_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x11, 0x32, 0x01, 0x15, 0x02, 0x09, 0x29, 0x4f, 0x76, 0x65, 0x72, 0x64, 0x10, 0x72, 0x69, 0x76, 0x65, 0x42, 0xf7, 0x79
};
byte FX_DRIVE_FUZZ_ON_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x12, 0x13, 0x01, 0x15, 0x42, 0x04, 0x24, 0x46, 0x75, 0x7a, 0x7a, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_FUZZ_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x12, 0x13, 0x01, 0x15, 0x42, 0x04, 0x24, 0x46, 0x75, 0x7a, 0x7a, 0x42, 0xf7, 0x79
};
byte FX_DRIVE_PROCORAT_ON_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x24, 0x4f, 0x01, 0x15, 0x02, 0x08, 0x28, 0x50, 0x72, 0x6f, 0x43, 0x6f, 0x08, 0x52, 0x61, 0x74, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_PROCORAT_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x24, 0x4f, 0x01, 0x15, 0x02, 0x08, 0x28, 0x50, 0x72, 0x6f, 0x43, 0x6f, 0x08, 0x52, 0x61, 0x74, 0x42, 0xf7, 0x79
};
byte FX_DRIVE_BASSMUFF_ON_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x35, 0x77, 0x01, 0x15, 0x02, 0x0b, 0x2b, 0x42, 0x61, 0x73, 0x73, 0x42, 0x40, 0x69, 0x67, 0x4d, 0x75, 0x66, 0x66, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_BASSMUFF_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x35, 0x77, 0x01, 0x15, 0x02, 0x0b, 0x2b, 0x42, 0x61, 0x73, 0x73, 0x42, 0x40, 0x69, 0x67, 0x4d, 0x75, 0x66, 0x66, 0x42, 0xf7, 0x79
};
byte FX_DRIVE_GUITARMUFF_ON_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x03, 0x44, 0x01, 0x15, 0x02, 0x0a, 0x2a, 0x47, 0x75, 0x69, 0x74, 0x61, 0x20, 0x72, 0x4d, 0x75, 0x66, 0x66, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_GUITARMUFF_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x03, 0x44, 0x01, 0x15, 0x02, 0x0a, 0x2a, 0x47, 0x75, 0x69, 0x74, 0x61, 0x20, 0x72, 0x4d, 0x75, 0x66, 0x66, 0x42, 0xf7, 0x79
};
byte FX_DRIVE_BASSMASTER_ON_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x18, 0x2c, 0x01, 0x15, 0x02, 0x11, 0x31, 0x4d, 0x61, 0x65, 0x73, 0x74, 0x00, 0x72, 0x6f, 0x42, 0x61, 0x73, 0x73, 0x6d, 0x20, 0x61, 0x73, 0x74, 0x65, 0x72, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_BASSMASTER_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x18, 0x2c, 0x01, 0x15, 0x02, 0x11, 0x31, 0x4d, 0x61, 0x65, 0x73, 0x74, 0x00, 0x72, 0x6f, 0x42, 0x61, 0x73, 0x73, 0x6d, 0x20, 0x61, 0x73, 0x74, 0x65, 0x72, 0x42, 0xf7, 0x79
};
byte FX_DRIVE_SABDRIVE_ON_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x3b, 0x3e, 0x01, 0x15, 0x02, 0x09, 0x29, 0x53, 0x41, 0x42, 0x64, 0x72, 0x10, 0x69, 0x76, 0x65, 0x72, 0x43, 0xf7, 0x79
};
byte FX_DRIVE_SABDRIVE_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x3b, 0x3e, 0x01, 0x15, 0x02, 0x09, 0x29, 0x53, 0x41, 0x42, 0x64, 0x72, 0x10, 0x69, 0x76, 0x65, 0x72, 0x42, 0xf7, 0x79
};

//MOD
byte FX_MOD_TREMOLO_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x25, 0x26, 0x01, 0x15, 0x02, 0x07, 0x27, 0x54, 0x72, 0x65, 0x6d, 0x6f, 0x04, 0x6c, 0x6f, 0x43, 0xf7, 0x79
};
byte FX_MOD_TREMOLO_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x25, 0x26, 0x01, 0x15, 0x02, 0x07, 0x27, 0x54, 0x72, 0x65, 0x6d, 0x6f, 0x04, 0x6c, 0x6f, 0x42, 0xf7, 0x79
};
byte FX_MOD_CHORUSANALOG_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x12, 0x7b, 0x01, 0x15, 0x02, 0x0c, 0x2c, 0x43, 0x68, 0x6f, 0x72, 0x75, 0x00, 0x73, 0x41, 0x6e, 0x61, 0x6c, 0x6f, 0x67, 0x01, 0x43, 0xf7, 0x79
};
byte FX_MOD_CHORUSANALOG_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x12, 0x7b, 0x01, 0x15, 0x02, 0x0c, 0x2c, 0x43, 0x68, 0x6f, 0x72, 0x75, 0x00, 0x73, 0x41, 0x6e, 0x61, 0x6c, 0x6f, 0x67, 0x01, 0x42, 0xf7, 0x79
};
byte FX_MOD_FLANGER_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x3d, 0x31, 0x01, 0x15, 0x02, 0x07, 0x27, 0x46, 0x6c, 0x61, 0x6e, 0x67, 0x04, 0x65, 0x72, 0x43, 0xf7, 0x79
};
byte FX_MOD_FLANGER_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x3d, 0x31, 0x01, 0x15, 0x02, 0x07, 0x27, 0x46, 0x6c, 0x61, 0x6e, 0x67, 0x04, 0x65, 0x72, 0x42, 0xf7, 0x79
};
byte FX_MOD_PHASER_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x0d, 0x5f, 0x01, 0x15, 0x02, 0x06, 0x26, 0x50, 0x68, 0x61, 0x73, 0x65, 0x02, 0x72, 0x43, 0xf7, 0x79
};
byte FX_MOD_PHASER_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x0d, 0x5f, 0x01, 0x15, 0x02, 0x06, 0x26, 0x50, 0x68, 0x61, 0x73, 0x65, 0x02, 0x72, 0x42, 0xf7, 0x79
};
byte FX_MOD_VIBRATO_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x25, 0x24, 0x01, 0x15, 0x02, 0x09, 0x29, 0x56, 0x69, 0x62, 0x72, 0x61, 0x10, 0x74, 0x6f, 0x30, 0x31, 0x43, 0xf7, 0x79
};
byte FX_MOD_VIBRATO_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x25, 0x24, 0x01, 0x15, 0x02, 0x09, 0x29, 0x56, 0x69, 0x62, 0x72, 0x61, 0x10, 0x74, 0x6f, 0x30, 0x31, 0x42, 0xf7, 0x79
};
byte FX_MOD_UNIVIBE_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x01, 0x0e, 0x01, 0x15, 0x02, 0x07, 0x27, 0x55, 0x6e, 0x69, 0x56, 0x69, 0x04, 0x62, 0x65, 0x43, 0xf7, 0x79
};
byte FX_MOD_UNIVIBE_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x01, 0x0e, 0x01, 0x15, 0x02, 0x07, 0x27, 0x55, 0x6e, 0x69, 0x56, 0x69, 0x04, 0x62, 0x65, 0x42, 0xf7, 0x79
};
byte FX_MOD_CLONER_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x28, 0x5b, 0x01, 0x15, 0x02, 0x06, 0x26, 0x43, 0x6c, 0x6f, 0x6e, 0x65, 0x02, 0x72, 0x43, 0xf7, 0x79
};
byte FX_MOD_CLONER_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x28, 0x5b, 0x01, 0x15, 0x02, 0x06, 0x26, 0x43, 0x6c, 0x6f, 0x6e, 0x65, 0x02, 0x72, 0x42, 0xf7, 0x79
};
byte FX_MOD_MINIVIBE_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x0f, 0x73, 0x01, 0x15, 0x02, 0x08, 0x28, 0x4d, 0x69, 0x6e, 0x69, 0x56, 0x08, 0x69, 0x62, 0x65, 0x43, 0xf7, 0x79
};
byte FX_MOD_MINIVIBE_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x0f, 0x73, 0x01, 0x15, 0x02, 0x08, 0x28, 0x4d, 0x69, 0x6e, 0x69, 0x56, 0x08, 0x69, 0x62, 0x65, 0x42, 0xf7, 0x79
};
byte FX_MOD_TREMOLATOR_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x3d, 0x65, 0x01, 0x15, 0x02, 0x0a, 0x2a, 0x54, 0x72, 0x65, 0x6d, 0x6f, 0x20, 0x6c, 0x61, 0x74, 0x6f, 0x72, 0x43, 0xf7, 0x79
};
byte FX_MOD_TREMOLATOR_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x3d, 0x65, 0x01, 0x15, 0x02, 0x0a, 0x2a, 0x54, 0x72, 0x65, 0x6d, 0x6f, 0x20, 0x6c, 0x61, 0x74, 0x6f, 0x72, 0x42, 0xf7, 0x79
};
byte FX_MOD_TREMOLOSQUARE_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x30, 0x01, 0x01, 0x15, 0x02, 0x0d, 0x2d, 0x54, 0x72, 0x65, 0x6d, 0x6f, 0x00, 0x6c, 0x6f, 0x53, 0x71, 0x75, 0x61, 0x72, 0x02, 0x65, 0x43, 0xf7, 0x79
};
byte FX_MOD_TREMOLOSQUARE_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x30, 0x01, 0x01, 0x15, 0x02, 0x0d, 0x2d, 0x54, 0x72, 0x65, 0x6d, 0x6f, 0x00, 0x6c, 0x6f, 0x53, 0x71, 0x75, 0x61, 0x72, 0x02, 0x65, 0x42, 0xf7, 0x79
};

//DELAY
byte FX_DELAY_DIGITALDELAY_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x14, 0x06, 0x01, 0x15, 0x02, 0x09, 0x29, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x10, 0x4d, 0x6f, 0x6e, 0x6f, 0x43, 0xf7, 0x79
};
byte FX_DELAY_DIGITALDELAY_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x14, 0x06, 0x01, 0x15, 0x02, 0x09, 0x29, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x10, 0x4d, 0x6f, 0x6e, 0x6f, 0x42, 0xf7, 0x79
};
byte FX_DELAY_DELAYECHOFILT_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x04, 0x21, 0x01, 0x15, 0x02, 0x0d, 0x2d, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x00, 0x45, 0x63, 0x68, 0x6f, 0x46, 0x69, 0x6c, 0x02, 0x74, 0x43, 0xf7, 0x79
};
byte FX_DELAY_DELAYECHOFILT_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x04, 0x21, 0x01, 0x15, 0x02, 0x0d, 0x2d, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x00, 0x45, 0x63, 0x68, 0x6f, 0x46, 0x69, 0x6c, 0x02, 0x74, 0x42, 0xf7, 0x79
};
byte FX_DELAY_VINTAGEDELAY_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x23, 0x72, 0x01, 0x15, 0x02, 0x0c, 0x2c, 0x56, 0x69, 0x6e, 0x74, 0x61, 0x00, 0x67, 0x65, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x01, 0x43, 0xf7, 0x79
};
byte FX_DELAY_VINTAGEDELAY_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x23, 0x72, 0x01, 0x15, 0x02, 0x0c, 0x2c, 0x56, 0x69, 0x6e, 0x74, 0x61, 0x00, 0x67, 0x65, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x01, 0x42, 0xf7, 0x79
};
byte FX_DELAY_DELAYREVERSE_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x17, 0x74, 0x01, 0x15, 0x02, 0x0c, 0x2c, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x00, 0x52, 0x65, 0x76, 0x65, 0x72, 0x73, 0x65, 0x01, 0x43, 0xf7, 0x79
};
byte FX_DELAY_DELAYREVERSE_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x17, 0x74, 0x01, 0x15, 0x02, 0x0c, 0x2c, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x00, 0x52, 0x65, 0x76, 0x65, 0x72, 0x73, 0x65, 0x01, 0x42, 0xf7, 0x79
};
byte FX_DELAY_DELAYMULTHEAD_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x3b, 0x50, 0x01, 0x15, 0x02, 0x0e, 0x2e, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x00, 0x4d, 0x75, 0x6c, 0x74, 0x69, 0x48, 0x65, 0x04, 0x61, 0x64, 0x43, 0xf7, 0x79
};
byte FX_DELAY_DELAYMULTHEAD_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x3b, 0x50, 0x01, 0x15, 0x02, 0x0e, 0x2e, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x00, 0x4d, 0x75, 0x6c, 0x74, 0x69, 0x48, 0x65, 0x04, 0x61, 0x64, 0x42, 0xf7, 0x79
};
byte FX_DELAY_DELAYRE20_ON_CMD[] ={  
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x2c, 0x11, 0x01, 0x15, 0x02, 0x0a, 0x2a, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x52, 0x65, 0x32, 0x30, 0x31, 0x43, 0xf7, 0x79
};
byte FX_DELAY_DELAYRE20_OFF_CMD[] ={
  0x01, 0xfe, 0x00, 0x00, 0x53, 0xfe, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x2c, 0x11, 0x01, 0x15, 0x02, 0x0a, 0x2a, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x52, 0x65, 0x32, 0x30, 0x31, 0x42, 0xf7, 0x79
};

//FX command on/off list
//Drive
byte* FX_DRIVE_ON_CMD_LIST[] = {
  FX_DRIVE_BOOSTER_ON_CMD,
  FX_DRIVE_TUBEDRIVE_ON_CMD,
  FX_DRIVE_OVERDRIVE_ON_CMD,
  FX_DRIVE_FUZZ_ON_CMD,
  FX_DRIVE_PROCORAT_ON_CMD,
  FX_DRIVE_BASSMUFF_ON_CMD,
  FX_DRIVE_GUITARMUFF_ON_CMD,
  FX_DRIVE_BASSMASTER_ON_CMD,
  FX_DRIVE_SABDRIVE_ON_CMD
};
byte* FX_DRIVE_OFF_CMD_LIST[] = {
  FX_DRIVE_BOOSTER_OFF_CMD,
  FX_DRIVE_TUBEDRIVE_OFF_CMD,
  FX_DRIVE_OVERDRIVE_OFF_CMD,
  FX_DRIVE_FUZZ_OFF_CMD,
  FX_DRIVE_PROCORAT_OFF_CMD,
  FX_DRIVE_BASSMUFF_OFF_CMD,
  FX_DRIVE_GUITARMUFF_OFF_CMD,
  FX_DRIVE_BASSMASTER_OFF_CMD,
  FX_DRIVE_SABDRIVE_OFF_CMD
};
//Mod
byte* FX_MOD_ON_CMD_LIST[] = {
  FX_MOD_TREMOLO_ON_CMD,
  FX_MOD_CHORUSANALOG_ON_CMD,
  FX_MOD_FLANGER_ON_CMD,
  FX_MOD_PHASER_ON_CMD,
  FX_MOD_VIBRATO_ON_CMD,
  FX_MOD_UNIVIBE_ON_CMD,
  FX_MOD_CLONER_ON_CMD,
  FX_MOD_MINIVIBE_ON_CMD,
  FX_MOD_TREMOLATOR_ON_CMD,
  FX_MOD_TREMOLOSQUARE_ON_CMD
};
byte* FX_MOD_OFF_CMD_LIST[] = {
  FX_MOD_TREMOLO_OFF_CMD,
  FX_MOD_CHORUSANALOG_OFF_CMD,
  FX_MOD_FLANGER_OFF_CMD,
  FX_MOD_PHASER_OFF_CMD,
  FX_MOD_VIBRATO_OFF_CMD,
  FX_MOD_UNIVIBE_OFF_CMD,
  FX_MOD_CLONER_OFF_CMD,
  FX_MOD_MINIVIBE_OFF_CMD,
  FX_MOD_TREMOLATOR_OFF_CMD,
  FX_MOD_TREMOLOSQUARE_OFF_CMD
};
//Delay
byte* FX_DELAY_ON_CMD_LIST[] = {
  FX_DELAY_DIGITALDELAY_ON_CMD,
  FX_DELAY_DELAYECHOFILT_ON_CMD,
  FX_DELAY_VINTAGEDELAY_ON_CMD,
  FX_DELAY_DELAYREVERSE_ON_CMD,
  FX_DELAY_DELAYMULTHEAD_ON_CMD,
  FX_DELAY_DELAYRE20_ON_CMD
};
byte* FX_DELAY_OFF_CMD_LIST[] = {
  FX_DELAY_DIGITALDELAY_OFF_CMD,
  FX_DELAY_DELAYECHOFILT_OFF_CMD,
  FX_DELAY_VINTAGEDELAY_OFF_CMD,
  FX_DELAY_DELAYREVERSE_OFF_CMD,
  FX_DELAY_DELAYMULTHEAD_OFF_CMD,
  FX_DELAY_DELAYRE20_OFF_CMD
};

//FX command sizes
//Drive
const int FX_DRIVE_BOOSTER_CMD_SIZE = sizeof FX_DRIVE_BOOSTER_OFF_CMD / sizeof FX_DRIVE_BOOSTER_OFF_CMD[0];
const int FX_DRIVE_TUBEDRIVE_CMD_SIZE = sizeof FX_DRIVE_TUBEDRIVE_OFF_CMD / sizeof FX_DRIVE_TUBEDRIVE_OFF_CMD[0];
const int FX_DRIVE_OVERDRIVE_CMD_SIZE = sizeof FX_DRIVE_OVERDRIVE_OFF_CMD / sizeof FX_DRIVE_OVERDRIVE_OFF_CMD[0];
const int FX_DRIVE_FUZZ_CMD_SIZE = sizeof FX_DRIVE_FUZZ_OFF_CMD / sizeof FX_DRIVE_FUZZ_OFF_CMD[0];
const int FX_DRIVE_PROCORAT_CMD_SIZE = sizeof FX_DRIVE_PROCORAT_OFF_CMD / sizeof FX_DRIVE_PROCORAT_OFF_CMD[0];
const int FX_DRIVE_BASSMUFF_CMD_SIZE = sizeof FX_DRIVE_BASSMUFF_OFF_CMD / sizeof FX_DRIVE_BASSMUFF_OFF_CMD[0];
const int FX_DRIVE_GUITARMUFF_CMD_SIZE = sizeof FX_DRIVE_GUITARMUFF_OFF_CMD / sizeof FX_DRIVE_GUITARMUFF_OFF_CMD[0];
const int FX_DRIVE_BASSMASTER_CMD_SIZE = sizeof FX_DRIVE_BASSMASTER_OFF_CMD / sizeof FX_DRIVE_BASSMASTER_OFF_CMD[0];
const int FX_DRIVE_SABDRIVE_CMD_SIZE = sizeof FX_DRIVE_SABDRIVE_OFF_CMD / sizeof FX_DRIVE_SABDRIVE_OFF_CMD[0];
//Mod
const int FX_MOD_TREMOLO_CMD_SIZE = sizeof FX_MOD_TREMOLO_OFF_CMD / sizeof FX_MOD_TREMOLO_OFF_CMD[0];
const int FX_MOD_CHORUSANALOG_CMD_SIZE = sizeof FX_MOD_CHORUSANALOG_OFF_CMD / sizeof FX_MOD_CHORUSANALOG_OFF_CMD[0];
const int FX_MOD_FLANGER_CMD_SIZE = sizeof FX_MOD_FLANGER_OFF_CMD / sizeof FX_MOD_FLANGER_OFF_CMD[0];
const int FX_MOD_PHASER_CMD_SIZE = sizeof FX_MOD_PHASER_OFF_CMD / sizeof FX_MOD_PHASER_OFF_CMD[0];
const int FX_MOD_VIBRATO_CMD_SIZE = sizeof FX_MOD_VIBRATO_OFF_CMD / sizeof FX_MOD_VIBRATO_OFF_CMD[0];
const int FX_MOD_UNIVIBE_CMD_SIZE = sizeof FX_MOD_UNIVIBE_OFF_CMD / sizeof FX_MOD_UNIVIBE_OFF_CMD[0];
const int FX_MOD_CLONER_CMD_SIZE = sizeof FX_MOD_CLONER_OFF_CMD / sizeof FX_MOD_CLONER_OFF_CMD[0];
const int FX_MOD_MINIVIBE_CMD_SIZE = sizeof FX_MOD_MINIVIBE_OFF_CMD / sizeof FX_MOD_MINIVIBE_OFF_CMD[0];
const int FX_MOD_TREMOLATOR_CMD_SIZE = sizeof FX_MOD_TREMOLATOR_OFF_CMD / sizeof FX_MOD_TREMOLATOR_OFF_CMD[0];
const int FX_MOD_TREMOLOSQUARE_CMD_SIZE = sizeof FX_MOD_TREMOLOSQUARE_OFF_CMD / sizeof FX_MOD_TREMOLOSQUARE_OFF_CMD[0];
//Delay
const int FX_DELAY_DIGITALDELAY_CMD_SIZE = sizeof FX_DELAY_DIGITALDELAY_OFF_CMD / sizeof FX_DELAY_DIGITALDELAY_OFF_CMD[0];
const int FX_DELAY_DELAYECHOFILT_CMD_SIZE = sizeof FX_DELAY_DELAYECHOFILT_OFF_CMD / sizeof FX_DELAY_DELAYECHOFILT_OFF_CMD[0];
const int FX_DELAY_VINTAGEDELAY_CMD_SIZE = sizeof FX_DELAY_VINTAGEDELAY_OFF_CMD / sizeof FX_DELAY_VINTAGEDELAY_OFF_CMD[0];
const int FX_DELAY_DELAYREVERSE_CMD_SIZE = sizeof FX_DELAY_DELAYREVERSE_OFF_CMD / sizeof FX_DELAY_DELAYREVERSE_OFF_CMD[0];
const int FX_DELAY_DELAYMULTHEAD_CMD_SIZE = sizeof FX_DELAY_DELAYMULTHEAD_OFF_CMD / sizeof FX_DELAY_DELAYMULTHEAD_OFF_CMD[0];
const int FX_DELAY_DELAYRE20_CMD_SIZE = sizeof FX_DELAY_DELAYRE20_OFF_CMD / sizeof FX_DELAY_DELAYRE20_OFF_CMD[0];

int FX_DRIVE_CMD_SIZE_LIST[] = {
  FX_DRIVE_BOOSTER_CMD_SIZE,
  FX_DRIVE_TUBEDRIVE_CMD_SIZE,
  FX_DRIVE_OVERDRIVE_CMD_SIZE,
  FX_DRIVE_FUZZ_CMD_SIZE,
  FX_DRIVE_PROCORAT_CMD_SIZE,
  FX_DRIVE_BASSMUFF_CMD_SIZE,
  FX_DRIVE_GUITARMUFF_CMD_SIZE,
  FX_DRIVE_BASSMASTER_CMD_SIZE,
  FX_DRIVE_SABDRIVE_CMD_SIZE
};

int FX_MOD_CMD_SIZE_LIST[] = {
  FX_MOD_TREMOLO_CMD_SIZE,
  FX_MOD_CHORUSANALOG_CMD_SIZE,
  FX_MOD_FLANGER_CMD_SIZE,
  FX_MOD_PHASER_CMD_SIZE,
  FX_MOD_VIBRATO_CMD_SIZE,
  FX_MOD_UNIVIBE_CMD_SIZE,
  FX_MOD_CLONER_CMD_SIZE,
  FX_MOD_MINIVIBE_CMD_SIZE,
  FX_MOD_TREMOLATOR_CMD_SIZE,
  FX_MOD_TREMOLOSQUARE_CMD_SIZE
};

int FX_DELAY_CMD_SIZE_LIST[] = {
  FX_DELAY_DIGITALDELAY_CMD_SIZE,
  FX_DELAY_DELAYECHOFILT_CMD_SIZE,
  FX_DELAY_VINTAGEDELAY_CMD_SIZE,
  FX_DELAY_DELAYREVERSE_CMD_SIZE,
  FX_DELAY_DELAYMULTHEAD_CMD_SIZE,
  FX_DELAY_DELAYRE20_CMD_SIZE
};