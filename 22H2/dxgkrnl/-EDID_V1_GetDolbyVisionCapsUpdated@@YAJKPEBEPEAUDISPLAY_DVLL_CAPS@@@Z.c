/*
 * XREFs of ?EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0027544
 * Callers:
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0228380 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0010ADC (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1C0027D5C (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION.c)
 */

__int64 __fastcall EDID_V1_GetDolbyVisionCapsUpdated(
        unsigned int a1,
        unsigned __int8 *a2,
        struct DISPLAY_DVLL_CAPS *a3)
{
  __int64 result; // rax
  char v5; // r8
  double v6; // xmm2_8
  double v7; // xmm1_8
  double v8; // xmm3_8
  double v9; // xmm4_8
  double v10; // xmm5_8
  double v11; // xmm6_8
  double v12; // xmm7_8
  double v13; // xmm8_8
  double v14; // xmm9_8
  double v15; // xmm10_8
  unsigned int v16; // r8d
  __int16 v17; // kr00_2
  unsigned __int64 v18; // rax
  float v19; // xmm0_4
  unsigned __int8 v20; // r10
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // cl
  char v23; // dl
  int v24; // eax
  float v25; // xmm0_4
  int v26; // eax
  float v27; // xmm0_4
  int v28; // eax
  __int128 v29; // [rsp+28h] [rbp-69h] BYREF
  _BYTE v30[80]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v31; // [rsp+88h] [rbp-9h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v31 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v30, a2, a1);
  if ( (int)result < 0 )
    return result;
  v29 = 0LL;
  if ( !MonDescParser::EDID_PARSER::GetDolbyVisionVendorDataBlock(
          (MonDescParser::EDID_PARSER *)v30,
          (struct EDID_V1_CEA_861_DOLBY_VISION_DATABLOCK *)&v29) )
    return 3221226021LL;
  if ( (unsigned __int8)v29 == 1 )
  {
    v20 = BYTE4(v29);
    if ( (BYTE4(v29) & 3) == 1 )
    {
      v21 = BYTE6(v29);
      v22 = BYTE5(v29);
      v23 = BYTE7(v29);
      *(_BYTE *)a3 = 1;
      v24 = BYTE3(v29) >> 1;
      *((_BYTE *)a3 + 72) = 0;
      v25 = (float)v24;
      v26 = 50 * (BYTE2(v29) >> 1);
      *((double *)a3 + 1) = (float)((float)(v25 / 127.0) * (float)(v25 / 127.0));
      v27 = (float)v26;
      v28 = (BYTE7(v29) >> 3) | 0xA0;
      *((double *)a3 + 2) = (float)(v27 + 100.0);
      *((double *)a3 + 3) = (float)((float)v28 * 0.00390625);
      *((double *)a3 + 4) = (float)((float)(v22 & 1 | 0x40 | (2 * (v21 & 1 | (2 * (v23 & 7))))) * 0.00390625);
      *((double *)a3 + 5) = (float)((float)(v22 >> 1) * 0.00390625);
      *((double *)a3 + 6) = (float)((float)((v21 >> 1) | 0x80u) * 0.00390625);
      *((double *)a3 + 7) = (float)((float)((v20 >> 5) | 0x20u) * 0.00390625);
      *((double *)a3 + 8) = (float)((float)((unsigned __int8)(v20 & 0x1C | 0x20) >> 2) * 0.00390625);
      return 0LL;
    }
    *(_BYTE *)a3 = 0;
    return 3221225659LL;
  }
  if ( (unsigned __int8)v29 == 2 )
  {
    v16 = BYTE3(v29);
    v17 = WORD3(v29);
    v18 = (unsigned __int64)BYTE2(v29) >> 3;
    *(_BYTE *)a3 = 1;
    *((double *)a3 + 1) = dword_1C009FDB0[v18];
    *((double *)a3 + 2) = dword_1C009FE30[(unsigned __int64)v16 >> 3];
    *((double *)a3 + 3) = (float)((float)(((unsigned __int8)v17 >> 3) | 0xA0u) * 0.00390625);
    LODWORD(v18) = BYTE4(v29) >> 1;
    *((double *)a3 + 4) = (float)((float)((HIBYTE(v17) >> 3) | 0x40u) * 0.00390625);
    v19 = (float)(int)v18;
    LODWORD(v18) = (BYTE5(v29) >> 1) | 0x80;
    *((double *)a3 + 5) = (float)(v19 * 0.00390625);
    *((double *)a3 + 6) = (float)((float)(int)v18 * 0.00390625);
    *((double *)a3 + 7) = (float)((float)(v17 & 7 | 0x20u) * 0.00390625);
    *((_BYTE *)a3 + 72) = (((v16 & 3) - 1) & 0xFD) == 0;
    *((double *)a3 + 8) = (float)((float)(HIBYTE(v17) & 7 | 8u) * 0.00390625);
    return 0LL;
  }
  if ( (unsigned __int8)v29 != 4 )
    return 3221225659LL;
  v5 = BYTE1(v29);
  if ( (BYTE1(v29) & 3) == 1 )
  {
    v6 = dword_1C009FEB0[((unsigned __int64)BYTE3(v29) >> 4) | (unsigned __int16)(16 * BYTE4(v29))];
    v7 = dword_1C009FEB0[BYTE3(v29) & 0xF | (unsigned __int64)(unsigned __int16)(16 * BYTE5(v29))];
    v8 = (double)(BYTE8(v29) | (unsigned __int16)(BYTE6(v29) >> 6 << 8)) / 1023.0;
    v9 = (double)(BYTE9(v29) | (unsigned __int16)(((BYTE6(v29) >> 4) & 3) << 8)) / 1023.0;
    v10 = (double)(BYTE10(v29) | (unsigned __int16)(((BYTE6(v29) >> 2) & 3) << 8)) / 1023.0;
    v11 = (double)(BYTE11(v29) | (unsigned __int16)((BYTE6(v29) & 3) << 8)) / 1023.0;
    v12 = (double)(BYTE12(v29) | (unsigned __int16)(BYTE7(v29) >> 6 << 8)) / 1023.0;
    v13 = (double)(BYTE13(v29) | (unsigned __int16)(((BYTE7(v29) >> 4) & 3) << 8)) / 1023.0;
    v14 = (double)(BYTE14(v29) | (unsigned __int16)(((BYTE7(v29) >> 2) & 3) << 8)) / 1023.0;
    v15 = (double)(HIBYTE(v29) | (unsigned __int16)((BYTE7(v29) & 3) << 8)) / 1023.0;
    if ( (BYTE1(v29) & 8) != 0 )
    {
      if ( v7 == 0.0 || v6 > v7 )
        return 3221225485LL;
    }
    else
    {
      if ( v6 != 0.0 || v7 != 0.0 || (BYTE1(v29) & 4) != 0 )
        return 3221225485LL;
      v7 = 0.0;
      v6 = 0.0;
    }
    *((double *)a3 + 1) = v6;
    *((double *)a3 + 2) = v7;
    if ( (v5 & 4) != 0 )
    {
      if ( v8 == 0.0 || v9 == 0.0 || v10 == 0.0 || v11 == 0.0 || v12 == 0.0 || v13 == 0.0 || v14 == 0.0 || v15 == 0.0 )
        return 3221225485LL;
      *((double *)a3 + 3) = v8;
      *((double *)a3 + 4) = v9;
      *((double *)a3 + 5) = v10;
      *((double *)a3 + 6) = v11;
      *((double *)a3 + 7) = v12;
      *((double *)a3 + 8) = v13;
      *((double *)a3 + 10) = v14;
      *((double *)a3 + 11) = v15;
    }
    else
    {
      *((_QWORD *)a3 + 3) = 0LL;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 6) = 0LL;
      *((_QWORD *)a3 + 7) = 0LL;
      *((_QWORD *)a3 + 8) = 0LL;
      *((_QWORD *)a3 + 10) = 0LL;
      *((_QWORD *)a3 + 11) = 0LL;
      if ( v8 != 0.0 || v9 != 0.0 || v10 != 0.0 || v11 != 0.0 || v12 != 0.0 || v13 != 0.0 || v14 != 0.0 || v15 != 0.0 )
        return 3221225485LL;
    }
    *(_BYTE *)a3 = 1;
    *((_BYTE *)a3 + 72) = 1;
    return 0LL;
  }
  return 3221225485LL;
}
