/*
 * XREFs of ?ValidateAndTranslateCommandGenerated@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C025EE94
 * Callers:
 *     ?ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C024B604 (-ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@.c)
 * Callees:
 *     ?TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1C024B364 (-TranslateMilCommandBatchHandle@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AE.c)
 *     ?TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAXPEAIIW4MIL_RESOURCE_TYPE@@_NPEAJ@Z @ 0x1C024B3D0 (-TranslateMilCommandBatchHandleArray@CMilCommandBatchParser@CApplicationChannel@DirectCompositio.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandGenerated(
        DirectComposition::CApplicationChannel::CMilCommandBatchParser *this,
        int *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  bool v7; // cf
  int *v8; // rdx
  char v9; // r9
  int v10; // r8d
  bool v11; // zf
  int v13; // r8d
  bool v14; // zf
  int v15; // r8d
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  int v19; // r8d
  int v20; // r8d
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  int *v24; // rdx
  char v25; // r9
  bool v26; // zf
  bool v27; // zf
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  bool v31; // zf
  bool v32; // zf
  bool v33; // zf
  bool v34; // zf
  int v35; // r8d
  unsigned __int64 v36; // rcx
  int *v37; // rdx
  int v38; // r9d
  bool v39; // zf
  int v40; // r8d
  bool v41; // zf
  bool v42; // zf
  int v43; // r8d
  bool v44; // cf
  int v45; // r8d
  int v46; // r8d
  bool v47; // zf
  bool v48; // zf
  bool v49; // zf
  bool v50; // zf
  int v51; // r8d
  bool v52; // zf
  bool v53; // zf
  bool v54; // zf
  bool v55; // zf
  bool v56; // zf
  bool v57; // zf
  bool v58; // cf
  bool v59; // zf
  int v60; // r8d
  bool v61; // cf
  bool v62; // zf
  int v63; // r8d
  bool v64; // zf
  bool v65; // zf
  int v66; // r8d
  int v67; // r8d
  bool v68; // zf
  bool v69; // zf
  bool v70; // zf
  bool v71; // zf
  bool v72; // zf
  bool v73; // zf
  int v74; // r8d
  int v75; // r8d
  bool v76; // zf
  bool v77; // zf
  bool v78; // zf
  bool v79; // zf
  bool v80; // zf
  bool v81; // zf
  bool v82; // zf
  bool v83; // zf
  bool v84; // zf
  bool v85; // zf
  unsigned __int64 v86; // rcx
  int v87; // r8d
  bool v88; // zf
  bool v89; // zf
  bool v90; // zf
  bool v91; // zf
  bool v92; // zf
  bool v93; // zf
  int v94; // r8d
  bool v95; // zf
  bool v96; // zf
  unsigned int v97; // [rsp+58h] [rbp+28h] BYREF

  v3 = 0;
  v4 = a3;
  v97 = 0;
  switch ( *a2 )
  {
    case 1:
      v7 = a3 < 0xC;
      goto LABEL_3;
    case 2:
      v7 = a3 < 0x10;
LABEL_3:
      if ( !v7 )
        goto LABEL_4;
      goto LABEL_11;
    case 3:
    case 6:
      v11 = a3 == 12;
      goto LABEL_10;
    case 4:
    case 8:
      v11 = a3 == 16;
      goto LABEL_10;
    case 5:
      if ( a3 != 60 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        2,
        0,
        &v97);
      v8 = a2 + 6;
      v9 = 1;
      goto LABEL_5;
    case 7:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        2,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_18;
    case 9:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 2;
      goto LABEL_21;
    case 10:
    case 11:
      v11 = a3 == 28;
LABEL_10:
      if ( !v11 )
        goto LABEL_11;
LABEL_4:
      v8 = a2 + 1;
      v9 = 0;
LABEL_5:
      v10 = 2;
      goto LABEL_6;
    case 12:
      v14 = a3 == 12;
      goto LABEL_26;
    case 13:
    case 18:
      v14 = a3 == 24;
      goto LABEL_26;
    case 14:
      if ( a3 >= 0x14 )
        goto LABEL_30;
      goto LABEL_11;
    case 15:
      if ( a3 >= 0x10 )
        goto LABEL_27;
      goto LABEL_11;
    case 16:
      if ( a3 != 28 )
        goto LABEL_11;
LABEL_30:
      v15 = 4;
      goto LABEL_31;
    case 17:
      v14 = a3 == 16;
LABEL_26:
      if ( !v14 )
        goto LABEL_11;
LABEL_27:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 4;
      goto LABEL_6;
    case 19:
    case 20:
      if ( a3 != 20 )
        goto LABEL_11;
      v15 = 10;
      goto LABEL_31;
    case 21:
      if ( a3 >= 0x10 )
        goto LABEL_42;
      goto LABEL_11;
    case 22:
    case 25:
      v16 = a3 == 16;
      goto LABEL_45;
    case 23:
      v16 = a3 == 12;
      goto LABEL_45;
    case 24:
      v16 = a3 == 52;
LABEL_45:
      if ( !v16 )
        goto LABEL_11;
LABEL_42:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_43;
    case 26:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 13;
      v9 = 0;
      goto LABEL_6;
    case 27:
      v17 = a3 == 12;
      goto LABEL_52;
    case 28:
      v17 = a3 == 28;
LABEL_52:
      if ( !v17 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 18;
      goto LABEL_6;
    case 29:
      if ( a3 != 76 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        18,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 10,
        140,
        1,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 11,
        172,
        1,
        &v97);
      v8 = a2 + 12;
      goto LABEL_57;
    case 30:
    case 32:
    case 33:
      v18 = a3 == 16;
      goto LABEL_60;
    case 31:
      v18 = a3 == 20;
      goto LABEL_60;
    case 34:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 19;
      goto LABEL_66;
    case 35:
      if ( a3 != 16 )
        goto LABEL_11;
      v20 = 19;
      goto LABEL_69;
    case 36:
      v18 = a3 == 24;
LABEL_60:
      if ( !v18 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_62;
    case 37:
    case 40:
      v21 = a3 == 20;
      goto LABEL_72;
    case 38:
      if ( a3 >= 0x10 )
        goto LABEL_73;
      goto LABEL_11;
    case 39:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        20,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_62:
      v10 = 19;
      goto LABEL_6;
    case 41:
    case 42:
      v21 = a3 == 16;
LABEL_72:
      if ( !v21 )
        goto LABEL_11;
LABEL_73:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 20;
      goto LABEL_6;
    case 43:
    case 276:
      v22 = a3 == 16;
      goto LABEL_80;
    case 44:
    case 273:
    case 274:
    case 275:
      v23 = a3 == 16;
      goto LABEL_83;
    case 45:
      v23 = a3 == 12;
      goto LABEL_83;
    case 46:
      if ( a3 != 20 )
        goto LABEL_11;
      v24 = a2 + 2;
      v25 = 1;
      goto LABEL_88;
    case 47:
    case 48:
    case 52:
    case 268:
    case 271:
    case 278:
      v22 = a3 == 12;
      goto LABEL_80;
    case 49:
    case 51:
      if ( a3 < 0xC )
        goto LABEL_11;
      return v3;
    case 50:
    case 277:
      v22 = a3 == 28;
      goto LABEL_80;
    case 53:
    case 279:
      v22 = a3 == 8;
      goto LABEL_80;
    case 54:
      if ( a3 != 52 )
        goto LABEL_11;
      v8 = a2 + 10;
      goto LABEL_57;
    case 55:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_98;
    case 56:
      v26 = a3 == 28;
      goto LABEL_100;
    case 57:
      v26 = a3 == 16;
LABEL_100:
      if ( !v26 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 23;
      goto LABEL_6;
    case 58:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 25;
      v9 = 0;
      goto LABEL_6;
    case 59:
      if ( a3 != 112 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_107;
    case 60:
      if ( a3 != 36 )
        goto LABEL_11;
      v13 = 28;
      goto LABEL_21;
    case 61:
    case 62:
    case 63:
    case 65:
      v27 = a3 == 20;
      goto LABEL_111;
    case 64:
      v27 = a3 == 16;
      goto LABEL_111;
    case 66:
      v27 = a3 == 36;
LABEL_111:
      if ( !v27 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_113;
    case 67:
      v28 = a3 == 20;
      goto LABEL_117;
    case 68:
    case 69:
    case 72:
    case 73:
      v28 = a3 == 24;
      goto LABEL_117;
    case 70:
      v28 = a3 == 28;
      goto LABEL_117;
    case 71:
      v28 = a3 == 16;
      goto LABEL_117;
    case 74:
      v28 = a3 == 76;
LABEL_117:
      if ( !v28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_119;
    case 75:
      v29 = a3 == 28;
      goto LABEL_125;
    case 76:
      v29 = a3 == 16;
LABEL_125:
      if ( !v29 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 32;
      goto LABEL_6;
    case 77:
      if ( a3 == 24 )
        goto LABEL_129;
      goto LABEL_11;
    case 78:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_129:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_130;
    case 79:
      v30 = a3 == 28;
      goto LABEL_134;
    case 80:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 34;
      goto LABEL_66;
    case 81:
      v30 = a3 == 24;
      goto LABEL_134;
    case 82:
      v30 = a3 == 16;
LABEL_134:
      if ( !v30 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 34;
      goto LABEL_6;
    case 83:
    case 84:
      if ( a3 >= 0x10 )
        goto LABEL_141;
      goto LABEL_11;
    case 85:
    case 86:
      v31 = a3 == 12;
      goto LABEL_144;
    case 87:
      v31 = a3 == 16;
LABEL_144:
      if ( !v31 )
        goto LABEL_11;
LABEL_141:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_142;
    case 88:
      if ( a3 == 32 )
        goto LABEL_148;
      goto LABEL_11;
    case 89:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_148:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 37;
      goto LABEL_6;
    case 90:
    case 91:
    case 92:
    case 95:
    case 96:
    case 97:
      v32 = a3 == 16;
      goto LABEL_152;
    case 93:
      v32 = a3 == 28;
      goto LABEL_152;
    case 94:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 38;
      goto LABEL_66;
    case 98:
      v32 = a3 == 24;
LABEL_152:
      if ( !v32 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 38;
      goto LABEL_6;
    case 99:
    case 100:
    case 102:
      v33 = a3 == 16;
      goto LABEL_159;
    case 101:
      v33 = a3 == 24;
LABEL_159:
      if ( !v33 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 40;
      goto LABEL_6;
    case 103:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        40,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_130:
      v10 = 33;
      goto LABEL_6;
    case 104:
      if ( a3 != 16 )
        goto LABEL_11;
      v20 = 40;
      goto LABEL_69;
    case 105:
    case 106:
    case 107:
    case 110:
    case 112:
    case 113:
    case 114:
    case 116:
    case 118:
      v34 = a3 == 16;
      goto LABEL_167;
    case 108:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 41;
      goto LABEL_66;
    case 109:
    case 115:
      v34 = a3 == 24;
      goto LABEL_167;
    case 111:
    case 117:
      v34 = a3 == 28;
LABEL_167:
      if ( !v34 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 41;
      goto LABEL_6;
    case 119:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_175;
    case 120:
      if ( a3 >= 0x10 )
        goto LABEL_177;
      goto LABEL_11;
    case 121:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        45,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_181;
    case 122:
      if ( a3 != 16 )
        goto LABEL_11;
LABEL_177:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_178;
    case 123:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v35 = 46;
      goto LABEL_186;
    case 124:
    case 461:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_190;
    case 125:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 51;
      v9 = 0;
      goto LABEL_6;
    case 126:
    case 129:
      v39 = a3 == 60;
      goto LABEL_194;
    case 127:
      if ( a3 != 16 )
        goto LABEL_11;
      v40 = 52;
      goto LABEL_198;
    case 128:
      v39 = a3 == 16;
LABEL_194:
      if ( !v39 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 52;
      goto LABEL_6;
    case 130:
      v41 = a3 == 44;
      goto LABEL_202;
    case 131:
      v41 = a3 == 20;
LABEL_202:
      if ( !v41 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_199;
    case 132:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 53;
      goto LABEL_66;
    case 133:
    case 137:
    case 138:
      v42 = a3 == 16;
      goto LABEL_208;
    case 134:
      v42 = a3 == 28;
      goto LABEL_208;
    case 135:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 55;
      goto LABEL_214;
    case 136:
      v42 = a3 == 24;
LABEL_208:
      if ( !v42 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_210;
    case 139:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        57,
        0,
        &v97);
      v8 = a2 + 3;
      goto LABEL_215;
    case 140:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        57,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_221;
    case 141:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        57,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 28;
      goto LABEL_6;
    case 142:
    case 143:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 59;
      v9 = 0;
      goto LABEL_6;
    case 144:
      if ( a3 != 48 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        60,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        169,
        1,
        &v97);
      v8 = a2 + 5;
      goto LABEL_22;
    case 145:
    case 146:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_181:
      v10 = 60;
      goto LABEL_6;
    case 147:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 61;
      goto LABEL_6;
    case 148:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_234;
    case 149:
      v44 = a3 < 0xC;
      goto LABEL_236;
    case 150:
      if ( a3 == 52 )
        goto LABEL_237;
      goto LABEL_11;
    case 151:
      v44 = a3 < 0x1C;
LABEL_236:
      if ( v44 )
        goto LABEL_11;
LABEL_237:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 66;
      goto LABEL_6;
    case 152:
      if ( a3 != 28 )
        goto LABEL_11;
      v45 = 66;
      goto LABEL_243;
    case 153:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        66,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_190:
      v10 = 48;
      goto LABEL_6;
    case 154:
      if ( a3 != 16 )
        goto LABEL_11;
      v46 = 67;
      goto LABEL_249;
    case 155:
    case 156:
    case 157:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_252;
    case 158:
      if ( a3 < 0x14 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        73,
        0,
        &v97);
      v36 = (unsigned int)a2[3];
      if ( v36 > v4 - 20 )
        goto LABEL_11;
      LODWORD(v36) = (unsigned int)v36 >> 2;
      v37 = a2 + 4;
      v38 = 23;
      goto LABEL_863;
    case 159:
    case 160:
    case 161:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 73;
      v9 = 0;
      goto LABEL_6;
    case 162:
      if ( a3 != 16 )
        goto LABEL_11;
      v46 = 73;
      goto LABEL_249;
    case 163:
      v47 = a3 == 32;
      goto LABEL_261;
    case 164:
      v47 = a3 == 16;
LABEL_261:
      if ( !v47 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 75;
      goto LABEL_6;
    case 165:
      v48 = a3 == 36;
      goto LABEL_265;
    case 166:
    case 167:
      v48 = a3 == 16;
LABEL_265:
      if ( !v48 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 76;
      goto LABEL_6;
    case 168:
      v49 = a3 == 20;
      goto LABEL_269;
    case 169:
      v49 = a3 == 16;
LABEL_269:
      if ( !v49 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 77;
      goto LABEL_6;
    case 170:
      v50 = a3 == 28;
      goto LABEL_273;
    case 171:
      if ( a3 != 16 )
        goto LABEL_11;
      v51 = 78;
      goto LABEL_277;
    case 172:
      v50 = a3 == 36;
LABEL_273:
      if ( !v50 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 78;
      goto LABEL_6;
    case 173:
      v52 = a3 == 24;
      goto LABEL_281;
    case 174:
      v52 = a3 == 16;
      goto LABEL_281;
    case 175:
      v52 = a3 == 28;
LABEL_281:
      if ( !v52 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 80;
      goto LABEL_6;
    case 176:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 80;
      goto LABEL_66;
    case 177:
      v53 = a3 == 68;
      goto LABEL_288;
    case 178:
      v53 = a3 == 16;
      goto LABEL_288;
    case 179:
      v53 = a3 == 20;
LABEL_288:
      if ( !v53 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 81;
      goto LABEL_6;
    case 180:
      if ( a3 != 36 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        86,
        0,
        &v97);
      v8 = a2 + 6;
      goto LABEL_57;
    case 181:
      v54 = a3 == 12;
      goto LABEL_295;
    case 182:
      v54 = a3 == 28;
LABEL_295:
      if ( !v54 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 86;
      goto LABEL_6;
    case 183:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 87;
      goto LABEL_21;
    case 184:
      v55 = a3 == 56;
      goto LABEL_301;
    case 185:
      v55 = a3 == 16;
      goto LABEL_301;
    case 186:
      v55 = a3 == 52;
      goto LABEL_301;
    case 187:
      v55 = a3 == 24;
LABEL_301:
      if ( !v55 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 88;
      goto LABEL_6;
    case 188:
      v56 = a3 == 28;
      goto LABEL_307;
    case 189:
    case 190:
    case 194:
    case 197:
      v56 = a3 == 16;
      goto LABEL_307;
    case 191:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        89,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 82;
      goto LABEL_6;
    case 192:
      v56 = a3 == 20;
      goto LABEL_307;
    case 193:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        89,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_316;
    case 195:
      if ( a3 >= 0x18 )
        goto LABEL_308;
      goto LABEL_11;
    case 196:
      v56 = a3 == 24;
LABEL_307:
      if ( !v56 )
        goto LABEL_11;
LABEL_308:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_309;
    case 198:
    case 206:
      v57 = a3 == 24;
      goto LABEL_321;
    case 199:
    case 209:
      v58 = a3 < 0x10;
      goto LABEL_325;
    case 200:
    case 202:
      v57 = a3 == 28;
      goto LABEL_321;
    case 201:
      v57 = a3 == 12;
      goto LABEL_321;
    case 203:
    case 211:
    case 213:
      v57 = a3 == 16;
      goto LABEL_321;
    case 204:
    case 205:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        90,
        0,
        &v97);
      v8 = a2 + 2;
      goto LABEL_332;
    case 207:
      if ( a3 < 0x18 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        90,
        0,
        &v97);
      v8 = a2 + 3;
      goto LABEL_332;
    case 208:
      v58 = a3 < 0xC;
LABEL_325:
      if ( !v58 )
        goto LABEL_322;
      goto LABEL_11;
    case 210:
    case 212:
      v57 = a3 == 20;
      goto LABEL_321;
    case 214:
    case 217:
      v57 = a3 == 32;
      goto LABEL_321;
    case 215:
      v57 = a3 == 36;
LABEL_321:
      if ( !v57 )
        goto LABEL_11;
LABEL_322:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_323;
    case 216:
      v59 = a3 == 28;
      goto LABEL_340;
    case 218:
      v59 = a3 == 36;
LABEL_340:
      if ( !v59 )
        goto LABEL_11;
      v60 = 90;
      goto LABEL_342;
    case 219:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        91,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        90,
        1,
        &v97);
      v8 = a2 + 3;
      v9 = 1;
LABEL_323:
      v10 = 90;
      goto LABEL_6;
    case 220:
      v61 = a3 < 0x10;
      goto LABEL_347;
    case 221:
      if ( a3 != 76 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        92,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        169,
        1,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 11,
        2,
        1,
        &v97);
      v8 = a2 + 12;
      goto LABEL_22;
    case 222:
      v61 = a3 < 0x14;
LABEL_347:
      if ( !v61 )
        goto LABEL_348;
      goto LABEL_11;
    case 223:
    case 224:
    case 225:
      v62 = a3 == 16;
      goto LABEL_354;
    case 226:
    case 227:
      v62 = a3 == 36;
LABEL_354:
      if ( !v62 )
        goto LABEL_11;
LABEL_348:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_349;
    case 228:
    case 230:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 93;
      v9 = 0;
      goto LABEL_6;
    case 229:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        93,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 57;
      goto LABEL_6;
    case 231:
      if ( a3 != 16 )
        goto LABEL_11;
      v63 = 93;
      goto LABEL_363;
    case 232:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_18:
      v10 = 94;
      goto LABEL_6;
    case 233:
      v64 = a3 == 36;
      goto LABEL_367;
    case 234:
      if ( a3 != 16 )
        goto LABEL_11;
      v40 = 96;
      goto LABEL_198;
    case 235:
      v64 = a3 == 16;
      goto LABEL_367;
    case 236:
      v64 = a3 == 60;
LABEL_367:
      if ( !v64 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 96;
      goto LABEL_6;
    case 237:
      if ( a3 != 52 )
        goto LABEL_11;
      v19 = 98;
      goto LABEL_66;
    case 238:
    case 239:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 99;
      v9 = 0;
      goto LABEL_6;
    case 240:
    case 241:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 102;
      v9 = 0;
      goto LABEL_6;
    case 242:
      v65 = a3 == 76;
      goto LABEL_380;
    case 243:
      v65 = a3 == 228;
      goto LABEL_380;
    case 244:
      if ( a3 != 16 )
        goto LABEL_11;
      v66 = 104;
      goto LABEL_385;
    case 245:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        104,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 199;
      goto LABEL_6;
    case 246:
      v65 = a3 == 16;
      goto LABEL_380;
    case 247:
      if ( a3 != 16 )
        goto LABEL_11;
      v67 = 104;
      goto LABEL_391;
    case 248:
      v65 = a3 == 220;
LABEL_380:
      if ( !v65 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 104;
      goto LABEL_6;
    case 249:
      if ( a3 >= 0xC )
        goto LABEL_394;
      goto LABEL_11;
    case 250:
      if ( a3 != 32 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        105,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        45,
        1,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        45,
        1,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 4,
        45,
        1,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 5,
        45,
        1,
        &v97);
      v8 = a2 + 6;
LABEL_332:
      v9 = 1;
LABEL_178:
      v10 = 45;
      goto LABEL_6;
    case 251:
      v68 = a3 == 148;
      goto LABEL_398;
    case 252:
      v68 = a3 == 32;
LABEL_398:
      if ( !v68 )
        goto LABEL_11;
LABEL_394:
      v8 = a2 + 1;
      v9 = 0;
LABEL_316:
      v10 = 105;
      goto LABEL_6;
    case 253:
      v69 = a3 == 60;
      goto LABEL_402;
    case 254:
      v69 = a3 == 16;
      goto LABEL_402;
    case 255:
    case 256:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 107;
      goto LABEL_214;
    case 257:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 108;
      v9 = 0;
      goto LABEL_6;
    case 258:
    case 263:
      v70 = a3 == 20;
      goto LABEL_410;
    case 259:
      v70 = a3 == 44;
      goto LABEL_410;
    case 260:
    case 261:
    case 262:
      v70 = a3 == 24;
LABEL_410:
      if ( !v70 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 112;
      goto LABEL_6;
    case 264:
      v71 = a3 == 20;
      goto LABEL_415;
    case 265:
      v71 = a3 == 16;
LABEL_415:
      if ( !v71 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 113;
      goto LABEL_6;
    case 266:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 113;
      goto LABEL_214;
    case 267:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 114;
      v9 = 0;
      goto LABEL_6;
    case 269:
      v22 = a3 == 60;
      goto LABEL_80;
    case 270:
      v22 = a3 == 20;
      goto LABEL_80;
    case 272:
      v22 = a3 == 156;
LABEL_80:
      if ( !v22 )
        goto LABEL_11;
      return v3;
    case 280:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 126;
      goto LABEL_21;
    case 281:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 127;
      v9 = 0;
      goto LABEL_6;
    case 282:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 128;
      v9 = 0;
      goto LABEL_6;
    case 283:
    case 285:
    case 289:
      if ( a3 >= 0x10 )
        goto LABEL_432;
      goto LABEL_11;
    case 284:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 129;
      goto LABEL_21;
    case 286:
    case 287:
      v72 = a3 == 12;
      goto LABEL_436;
    case 288:
      v72 = a3 == 28;
LABEL_436:
      if ( !v72 )
        goto LABEL_11;
LABEL_432:
      v8 = a2 + 1;
      v10 = 129;
      v9 = 0;
      goto LABEL_6;
    case 290:
    case 292:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 131;
      goto LABEL_66;
    case 291:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        131,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_98:
      v10 = 22;
      goto LABEL_6;
    case 293:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 131;
      goto LABEL_214;
    case 294:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 132;
      v9 = 0;
      goto LABEL_6;
    case 295:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 132;
      goto LABEL_214;
    case 296:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 132;
      goto LABEL_66;
    case 297:
    case 298:
      if ( a3 >= 0x10 )
        goto LABEL_452;
      goto LABEL_11;
    case 299:
    case 300:
      v73 = a3 == 12;
      goto LABEL_454;
    case 301:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
      v73 = a3 == 16;
LABEL_454:
      if ( !v73 )
        goto LABEL_11;
LABEL_452:
      v8 = a2 + 1;
      v10 = 133;
      v9 = 0;
      goto LABEL_6;
    case 302:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        133,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_142:
      v10 = 36;
      goto LABEL_6;
    case 308:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 134;
      v9 = 0;
      goto LABEL_6;
    case 309:
      if ( a3 >= 0x1C )
        goto LABEL_462;
      goto LABEL_11;
    case 310:
      if ( a3 != 16 )
        goto LABEL_11;
LABEL_462:
      v8 = a2 + 1;
      v9 = 0;
LABEL_221:
      v10 = 135;
      goto LABEL_6;
    case 311:
      if ( a3 != 16 )
        goto LABEL_11;
      v74 = 136;
      goto LABEL_467;
    case 312:
      if ( a3 != 16 )
        goto LABEL_11;
      v75 = 136;
      goto LABEL_471;
    case 313:
    case 314:
    case 315:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 137;
      v9 = 0;
      goto LABEL_6;
    case 316:
    case 317:
    case 320:
    case 322:
      v76 = a3 == 16;
      goto LABEL_476;
    case 318:
    case 321:
      v76 = a3 == 20;
      goto LABEL_476;
    case 319:
      v76 = a3 == 48;
LABEL_476:
      if ( !v76 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 138;
      v9 = 0;
      goto LABEL_6;
    case 323:
      if ( a3 != 44 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 139;
      v9 = 0;
      goto LABEL_6;
    case 324:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_484;
    case 325:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 141;
      goto LABEL_66;
    case 326:
      v77 = a3 == 36;
      goto LABEL_488;
    case 327:
      v77 = a3 == 12;
      goto LABEL_488;
    case 328:
    case 330:
      v77 = a3 == 16;
      goto LABEL_488;
    case 329:
      v77 = a3 == 28;
LABEL_488:
      if ( !v77 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 143;
      v9 = 0;
      goto LABEL_6;
    case 331:
      v78 = a3 == 20;
      goto LABEL_494;
    case 332:
      if ( a3 != 16 )
        goto LABEL_11;
      v40 = 144;
      goto LABEL_198;
    case 333:
      v78 = a3 == 36;
LABEL_494:
      if ( !v78 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 144;
      v9 = 0;
      goto LABEL_6;
    case 334:
      if ( a3 < 0x10 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 145;
      v9 = 0;
      goto LABEL_6;
    case 335:
      v79 = a3 == 16;
      goto LABEL_502;
    case 336:
      v79 = a3 == 28;
      goto LABEL_502;
    case 337:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 146;
      goto LABEL_66;
    case 338:
      v79 = a3 == 12;
LABEL_502:
      if ( !v79 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 146;
      v9 = 0;
      goto LABEL_6;
    case 339:
      v23 = a3 == 20;
      goto LABEL_83;
    case 340:
    case 341:
      v23 = a3 == 28;
LABEL_83:
      if ( !v23 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_33;
    case 342:
      if ( a3 != 20 )
        goto LABEL_11;
      v24 = a2 + 1;
      v25 = 0;
LABEL_88:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        v24,
        147,
        v25,
        &v97);
      v8 = a2 + 3;
      goto LABEL_32;
    case 343:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 151;
      v9 = 0;
      goto LABEL_6;
    case 344:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        158,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 155;
      goto LABEL_6;
    case 345:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        158,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_518;
    case 346:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 158;
      v9 = 0;
      goto LABEL_6;
    case 347:
    case 349:
    case 350:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 165;
      v9 = 0;
      goto LABEL_6;
    case 348:
      if ( a3 != 32 )
        goto LABEL_11;
      v15 = 165;
      goto LABEL_31;
    case 351:
      if ( a3 < 0x14 )
        goto LABEL_11;
      v35 = 168;
LABEL_186:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v35,
        0,
        &v97);
      v36 = (unsigned int)a2[3];
      if ( v36 > v4 - 20 )
        goto LABEL_11;
      LODWORD(v36) = (unsigned int)v36 >> 2;
      v37 = a2 + 4;
      v38 = 193;
      goto LABEL_863;
    case 352:
      if ( a3 != 16 )
        goto LABEL_11;
      v75 = 168;
      goto LABEL_471;
    case 353:
      if ( a3 != 24 )
        goto LABEL_11;
      v13 = 171;
LABEL_21:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v13,
        0,
        &v97);
      v8 = a2 + 2;
LABEL_22:
      v9 = 1;
      goto LABEL_23;
    case 354:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 172;
      v9 = 0;
      goto LABEL_6;
    case 355:
      if ( a3 != 76 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 174;
      v9 = 0;
      goto LABEL_6;
    case 356:
      if ( a3 != 28 )
        goto LABEL_11;
      v19 = 174;
      goto LABEL_66;
    case 357:
    case 360:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 177;
      goto LABEL_214;
    case 358:
      if ( a3 != 16 )
        goto LABEL_11;
      v74 = 177;
      goto LABEL_467;
    case 359:
    case 362:
    case 363:
    case 365:
      v80 = a3 == 16;
      goto LABEL_542;
    case 361:
      if ( a3 >= 0x14 )
        goto LABEL_543;
      goto LABEL_11;
    case 364:
      v80 = a3 == 28;
LABEL_542:
      if ( !v80 )
        goto LABEL_11;
LABEL_543:
      v8 = a2 + 1;
      v10 = 177;
      v9 = 0;
      goto LABEL_6;
    case 366:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 178;
      goto LABEL_214;
    case 367:
      if ( a3 != 16 )
        goto LABEL_11;
      v63 = 178;
LABEL_363:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v63,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_210:
      v10 = 55;
      goto LABEL_6;
    case 368:
    case 369:
    case 370:
    case 371:
    case 372:
    case 375:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 181;
      v9 = 0;
      goto LABEL_6;
    case 373:
      if ( a3 != 32 )
        goto LABEL_11;
      v15 = 181;
      goto LABEL_31;
    case 374:
      if ( a3 != 16 )
        goto LABEL_11;
      v46 = 181;
      goto LABEL_249;
    case 376:
      if ( a3 >= 0x14 )
        goto LABEL_558;
      goto LABEL_11;
    case 377:
      if ( a3 != 16 )
        goto LABEL_11;
      v46 = 193;
LABEL_249:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v46,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_113:
      v10 = 29;
      goto LABEL_6;
    case 378:
    case 381:
    case 382:
      v81 = a3 == 16;
      goto LABEL_562;
    case 379:
    case 380:
      v81 = a3 == 20;
LABEL_562:
      if ( !v81 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_472;
    case 383:
      if ( a3 != 36 )
        goto LABEL_11;
      v40 = 195;
LABEL_198:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v40,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_199:
      v10 = 53;
      goto LABEL_6;
    case 384:
      v82 = a3 == 60;
      goto LABEL_568;
    case 385:
      v82 = a3 == 28;
LABEL_568:
      if ( !v82 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 195;
      v9 = 0;
      goto LABEL_6;
    case 386:
    case 387:
    case 402:
    case 415:
      if ( a3 >= 0x10 )
        goto LABEL_572;
      goto LABEL_11;
    case 388:
    case 392:
    case 406:
      v83 = a3 == 12;
      goto LABEL_574;
    case 389:
    case 391:
    case 394:
    case 403:
    case 408:
    case 409:
    case 410:
    case 411:
    case 417:
    case 421:
      v83 = a3 == 16;
      goto LABEL_574;
    case 390:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        196,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        196,
        1,
        &v97);
      v8 = a2 + 3;
      goto LABEL_57;
    case 393:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 196;
      goto LABEL_66;
    case 395:
      if ( a3 != 16 )
        goto LABEL_11;
      v15 = 196;
LABEL_31:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v15,
        0,
        &v97);
      v8 = a2 + 2;
LABEL_32:
      v9 = 1;
LABEL_33:
      v10 = 147;
      goto LABEL_6;
    case 396:
    case 400:
    case 418:
    case 423:
      v83 = a3 == 28;
      goto LABEL_574;
    case 397:
      if ( a3 != 16 )
        goto LABEL_11;
      v74 = 196;
      goto LABEL_467;
    case 398:
      if ( a3 != 16 )
        goto LABEL_11;
      v66 = 196;
LABEL_385:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v66,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_107:
      v10 = 26;
      goto LABEL_6;
    case 399:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        196,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 47;
      goto LABEL_6;
    case 401:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        196,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 56;
      goto LABEL_6;
    case 404:
      v83 = a3 == 36;
      goto LABEL_574;
    case 405:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        196,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_309:
      v10 = 89;
      goto LABEL_6;
    case 407:
    case 412:
      v83 = a3 == 24;
      goto LABEL_574;
    case 413:
    case 416:
      v83 = a3 == 20;
      goto LABEL_574;
    case 414:
      v83 = a3 == 52;
LABEL_574:
      if ( !v83 )
        goto LABEL_11;
LABEL_572:
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_58;
    case 419:
      if ( a3 != 16 )
        goto LABEL_11;
      v20 = 196;
      goto LABEL_69;
    case 420:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        196,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 200;
      goto LABEL_6;
    case 422:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 196;
      goto LABEL_214;
    case 424:
      v84 = a3 == 12;
      goto LABEL_605;
    case 425:
    case 426:
    case 427:
      v84 = a3 == 20;
      goto LABEL_605;
    case 428:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 202;
      goto LABEL_66;
    case 429:
      v84 = a3 == 16;
LABEL_605:
      if ( !v84 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 202;
      v9 = 0;
      goto LABEL_6;
    case 430:
      v85 = a3 == 44;
      goto LABEL_612;
    case 431:
    case 437:
    case 438:
      v85 = a3 == 28;
      goto LABEL_612;
    case 432:
      v85 = a3 == 60;
      goto LABEL_612;
    case 433:
    case 436:
      v85 = a3 == 16;
      goto LABEL_612;
    case 434:
    case 441:
      v85 = a3 == 20;
LABEL_612:
      if ( !v85 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 204;
      v9 = 0;
      goto LABEL_6;
    case 435:
      if ( a3 != 16 )
        goto LABEL_11;
      v74 = 204;
      goto LABEL_467;
    case 439:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        204,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_622;
    case 440:
      if ( a3 != 20 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        204,
        0,
        &v97);
      v8 = a2 + 3;
      v9 = 1;
      goto LABEL_625;
    case 442:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        205,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        42,
        1,
        &v97);
      v8 = a2 + 3;
      goto LABEL_278;
    case 454:
      if ( a3 != 48 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 1;
      v9 = 0;
      goto LABEL_6;
    case 455:
      if ( a3 != 32 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 6;
      v9 = 0;
      goto LABEL_6;
    case 456:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 14;
      v9 = 0;
      goto LABEL_6;
    case 457:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 16;
      v9 = 0;
      goto LABEL_6;
    case 458:
      if ( a3 != 100 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 24;
      v9 = 0;
      goto LABEL_6;
    case 459:
      if ( a3 != 24 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        27,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        67,
        1,
        &v97);
      v8 = a2 + 4;
      goto LABEL_468;
    case 460:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 31;
      v9 = 0;
      goto LABEL_6;
    case 462:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 63;
      v9 = 0;
      goto LABEL_6;
    case 463:
      if ( a3 != 24 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 64;
      v9 = 0;
      goto LABEL_6;
    case 464:
      if ( a3 < 0x14 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        70,
        0,
        &v97);
      v36 = (unsigned int)a2[2];
      if ( v36 > v4 - 20 )
        goto LABEL_11;
      LODWORD(v36) = (unsigned int)v36 >> 2;
      v37 = a2 + 4;
      v38 = 67;
      goto LABEL_863;
    case 465:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 83;
      v9 = 0;
      goto LABEL_6;
    case 466:
      if ( a3 != 60 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 101;
      v9 = 0;
      goto LABEL_6;
    case 467:
      v69 = a3 == 12;
LABEL_402:
      if ( !v69 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 106;
      goto LABEL_6;
    case 468:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 109;
      v9 = 0;
      goto LABEL_6;
    case 469:
      if ( a3 != 76 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 110;
      v9 = 0;
      goto LABEL_6;
    case 470:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 150;
      v9 = 0;
      goto LABEL_6;
    case 471:
      if ( a3 != 36 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 167;
      v9 = 0;
      goto LABEL_6;
    case 472:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_23:
      v10 = 169;
      goto LABEL_6;
    case 473:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      goto LABEL_244;
    case 474:
      if ( a3 != 20 )
        goto LABEL_11;
LABEL_558:
      v8 = a2 + 1;
      v10 = 183;
      v9 = 0;
      goto LABEL_6;
    case 475:
      if ( a3 != 52 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 192;
      v9 = 0;
      goto LABEL_6;
    case 476:
      if ( a3 != 40 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        198,
        0,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 2,
        196,
        1,
        &v97);
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 3,
        196,
        1,
        &v97);
      v8 = a2 + 4;
      goto LABEL_278;
    case 477:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 201;
      goto LABEL_66;
    case 478:
    case 479:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        3,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 92;
      goto LABEL_862;
    case 480:
    case 481:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 3;
      v9 = 0;
      goto LABEL_6;
    case 482:
      if ( a3 != 16 )
        goto LABEL_11;
      v60 = 5;
LABEL_342:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v60,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_43:
      v10 = 11;
      goto LABEL_6;
    case 483:
    case 484:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        5,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 11;
      goto LABEL_862;
    case 485:
    case 486:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 5;
      v9 = 0;
      goto LABEL_6;
    case 487:
      if ( a3 != 16 )
        goto LABEL_11;
      v87 = 7;
      goto LABEL_688;
    case 488:
    case 489:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        7,
        0,
        &v97);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        a2 + 3,
        (unsigned __int64)(v4 - 16) >> 2,
        8,
        1,
        &v97);
      goto LABEL_7;
    case 490:
    case 491:
      if ( a3 == 16 )
        goto LABEL_693;
      goto LABEL_11;
    case 492:
    case 493:
    case 494:
    case 495:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_693:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 8;
      goto LABEL_6;
    case 496:
    case 497:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 35;
      v9 = 0;
      goto LABEL_6;
    case 498:
    case 499:
    case 500:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 43;
      v9 = 0;
      goto LABEL_6;
    case 501:
      v88 = a3 == 20;
      goto LABEL_701;
    case 502:
      v88 = a3 == 16;
LABEL_701:
      if ( !v88 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 50;
      goto LABEL_6;
    case 503:
    case 504:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 58;
      v9 = 0;
      goto LABEL_6;
    case 505:
      if ( a3 != 16 )
        goto LABEL_11;
      v20 = 58;
LABEL_69:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v20,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 187;
      goto LABEL_6;
    case 506:
    case 507:
      if ( a3 >= 0x10 )
        goto LABEL_709;
      goto LABEL_11;
    case 508:
    case 509:
      v89 = a3 == 16;
      goto LABEL_711;
    case 510:
      v89 = a3 == 20;
      goto LABEL_711;
    case 511:
      v89 = a3 == 28;
LABEL_711:
      if ( !v89 )
        goto LABEL_11;
LABEL_709:
      v8 = a2 + 1;
      v9 = 0;
LABEL_622:
      v10 = 65;
      goto LABEL_6;
    case 512:
    case 513:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        69,
        0,
        &v97);
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        a2 + 3,
        (unsigned __int64)(v4 - 16) >> 2,
        68,
        1,
        &v97);
      goto LABEL_7;
    case 516:
    case 517:
    case 518:
      if ( a3 == 16 )
        goto LABEL_719;
      goto LABEL_11;
    case 519:
    case 520:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_719:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 74;
      goto LABEL_6;
    case 521:
    case 522:
    case 527:
    case 528:
    case 529:
    case 530:
    case 531:
    case 532:
    case 533:
      v90 = a3 == 16;
      goto LABEL_723;
    case 523:
    case 525:
      v90 = a3 == 28;
LABEL_723:
      if ( !v90 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 84;
      goto LABEL_6;
    case 524:
    case 526:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        84,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_484:
      v10 = 140;
      goto LABEL_6;
    case 534:
      if ( a3 != 16 )
        goto LABEL_11;
      v87 = 84;
LABEL_688:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v87,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 85;
      goto LABEL_6;
    case 535:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 95;
      v9 = 0;
      goto LABEL_6;
    case 536:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        95,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_234:
      v10 = 62;
      goto LABEL_6;
    case 537:
    case 538:
      if ( a3 != 16 )
        goto LABEL_11;
      v67 = 95;
LABEL_391:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v67,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 186;
      goto LABEL_6;
    case 539:
    case 540:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 100;
      v9 = 0;
      goto LABEL_6;
    case 541:
      if ( a3 == 16 )
        goto LABEL_739;
      goto LABEL_11;
    case 542:
    case 543:
    case 544:
    case 545:
    case 546:
    case 547:
      if ( a3 < 0x10 )
        goto LABEL_11;
LABEL_739:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 111;
      goto LABEL_6;
    case 548:
      v91 = a3 == 24;
      goto LABEL_743;
    case 549:
    case 550:
      v91 = a3 == 16;
LABEL_743:
      if ( !v91 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 115;
      goto LABEL_6;
    case 551:
    case 552:
      if ( a3 >= 0x10 )
        goto LABEL_747;
      goto LABEL_11;
    case 553:
      if ( a3 != 16 )
        goto LABEL_11;
LABEL_747:
      v8 = a2 + 1;
      v9 = 0;
      v10 = 116;
      goto LABEL_6;
    case 554:
    case 555:
    case 561:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        117,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 124;
      goto LABEL_6;
    case 556:
    case 557:
    case 560:
    case 564:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        117,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 122;
      goto LABEL_6;
    case 558:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        117,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 125;
      goto LABEL_6;
    case 559:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        117,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 118;
      goto LABEL_6;
    case 562:
    case 563:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        117,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 123;
      goto LABEL_6;
    case 565:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        120,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_349:
      v10 = 92;
      goto LABEL_6;
    case 566:
    case 567:
    case 568:
    case 569:
    case 572:
    case 573:
    case 575:
    case 576:
    case 577:
    case 578:
    case 579:
    case 581:
    case 582:
    case 584:
    case 590:
      v92 = a3 == 16;
      goto LABEL_763;
    case 570:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 120;
      goto LABEL_214;
    case 571:
      if ( a3 != 16 )
        goto LABEL_11;
      v74 = 120;
LABEL_467:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v74,
        0,
        &v97);
      v8 = a2 + 2;
LABEL_468:
      v9 = 1;
LABEL_252:
      v10 = 67;
      goto LABEL_6;
    case 574:
      if ( a3 != 16 )
        goto LABEL_11;
      v75 = 120;
LABEL_471:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v75,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_472:
      v10 = 194;
      goto LABEL_6;
    case 580:
    case 583:
    case 585:
      v92 = a3 == 24;
LABEL_763:
      if ( !v92 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
      v10 = 120;
      goto LABEL_6;
    case 586:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        120,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_774;
    case 587:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        120,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 117;
      goto LABEL_6;
    case 588:
    case 589:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        120,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 115;
      goto LABEL_862;
    case 591:
    case 592:
    case 604:
    case 605:
      v93 = a3 == 24;
      goto LABEL_781;
    case 593:
    case 594:
    case 595:
    case 596:
    case 597:
    case 602:
    case 603:
    case 606:
    case 607:
    case 608:
      v93 = a3 == 16;
      goto LABEL_781;
    case 598:
    case 599:
    case 600:
    case 601:
      v93 = a3 == 28;
LABEL_781:
      if ( !v93 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_774:
      v10 = 121;
      goto LABEL_6;
    case 609:
    case 610:
      if ( a3 < 0x10 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_625:
      v10 = 142;
      goto LABEL_6;
    case 611:
    case 612:
    case 613:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 148;
      v9 = 0;
      goto LABEL_6;
    case 614:
    case 615:
    case 616:
    case 617:
    case 618:
    case 619:
    case 620:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 149;
      v9 = 0;
      goto LABEL_6;
    case 621:
    case 622:
    case 623:
    case 624:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 152;
      v9 = 0;
      goto LABEL_6;
    case 625:
    case 626:
    case 627:
    case 628:
    case 629:
    case 630:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 153;
      v9 = 0;
      goto LABEL_6;
    case 631:
    case 639:
    case 640:
    case 641:
    case 642:
    case 643:
    case 644:
    case 645:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_518:
      v10 = 157;
      goto LABEL_6;
    case 632:
    case 633:
    case 634:
    case 635:
    case 636:
    case 637:
    case 638:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        157,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 171;
      goto LABEL_6;
    case 646:
    case 649:
      if ( a3 != 16 )
        goto LABEL_11;
      v94 = 159;
      goto LABEL_801;
    case 647:
      v95 = a3 == 28;
      goto LABEL_803;
    case 648:
    case 650:
      v95 = a3 == 16;
LABEL_803:
      if ( !v95 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 159;
      v9 = 0;
      goto LABEL_6;
    case 651:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        160,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_119:
      v10 = 30;
      goto LABEL_6;
    case 652:
    case 653:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        161,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 161;
      goto LABEL_862;
    case 654:
    case 655:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        161,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 154;
      goto LABEL_862;
    case 656:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        161,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 160;
      goto LABEL_6;
    case 657:
    case 658:
    case 661:
    case 663:
    case 665:
      v96 = a3 == 16;
      goto LABEL_817;
    case 659:
    case 662:
    case 664:
      if ( a3 != 16 )
        goto LABEL_11;
      v94 = 163;
LABEL_801:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v94,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 156;
      goto LABEL_6;
    case 660:
      v96 = a3 == 24;
LABEL_817:
      if ( !v96 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 163;
      v9 = 0;
      goto LABEL_6;
    case 666:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        166,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      v10 = 161;
      goto LABEL_6;
    case 667:
    case 668:
    case 669:
    case 670:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 173;
      v9 = 0;
      goto LABEL_6;
    case 671:
      if ( a3 != 28 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 175;
      v9 = 0;
      goto LABEL_6;
    case 672:
      if ( a3 != 16 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        179,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
      goto LABEL_830;
    case 673:
      if ( a3 != 16 )
        goto LABEL_11;
      v51 = 182;
LABEL_277:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v51,
        0,
        &v97);
      v8 = a2 + 2;
LABEL_278:
      v9 = 1;
LABEL_175:
      v10 = 42;
      goto LABEL_6;
    case 674:
    case 678:
      if ( a3 != 16 )
        goto LABEL_11;
      v45 = 182;
LABEL_243:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v45,
        0,
        &v97);
      v8 = a2 + 2;
      v9 = 1;
LABEL_244:
      v10 = 170;
      goto LABEL_6;
    case 675:
    case 676:
    case 677:
    case 679:
    case 680:
    case 681:
    case 682:
    case 683:
    case 684:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v9 = 0;
LABEL_830:
      v10 = 182;
      goto LABEL_6;
    case 685:
      if ( a3 != 16 )
        goto LABEL_11;
      v43 = 184;
LABEL_214:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v43,
        0,
        &v97);
      v8 = a2 + 2;
LABEL_215:
      v9 = 1;
      v10 = 17;
      goto LABEL_6;
    case 686:
    case 687:
      if ( a3 != 20 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 184;
      v9 = 0;
      goto LABEL_6;
    case 688:
    case 689:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        185,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 35;
      goto LABEL_862;
    case 690:
    case 691:
    case 692:
    case 693:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        185,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 43;
      goto LABEL_862;
    case 694:
    case 695:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        188,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 187;
      goto LABEL_862;
    case 696:
    case 697:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        189,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 186;
      goto LABEL_862;
    case 698:
    case 699:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 190;
      v9 = 0;
      goto LABEL_6;
    case 700:
    case 701:
    case 702:
      if ( a3 != 16 )
        goto LABEL_11;
      v8 = a2 + 1;
      v10 = 191;
      v9 = 0;
      goto LABEL_6;
    case 703:
      if ( a3 != 16 )
        goto LABEL_11;
      v19 = 197;
LABEL_66:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        v19,
        0,
        &v97);
      v8 = a2 + 2;
LABEL_57:
      v9 = 1;
LABEL_58:
      v10 = 196;
LABEL_6:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        v8,
        v10,
        v9,
        &v97);
      goto LABEL_7;
    case 704:
    case 705:
      if ( a3 < 0x10 )
        goto LABEL_11;
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        this,
        a2 + 1,
        199,
        0,
        &v97);
      v86 = v4 - 16;
      if ( a2[2] != v4 - 16 )
        goto LABEL_11;
      v38 = 196;
LABEL_862:
      v36 = v86 >> 2;
      v37 = a2 + 3;
LABEL_863:
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        this,
        v37,
        v36,
        v38,
        0,
        &v97);
LABEL_7:
      v3 = v97;
      break;
    default:
LABEL_11:
      v3 = -1073741811;
      break;
  }
  return v3;
}
