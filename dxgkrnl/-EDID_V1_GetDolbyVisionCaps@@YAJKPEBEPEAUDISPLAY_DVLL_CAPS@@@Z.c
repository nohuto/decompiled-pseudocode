/*
 * XREFs of ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0023D20
 * Callers:
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0219220 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0011258 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C001D9C0 (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISIO.c)
 */

__int64 __fastcall EDID_V1_GetDolbyVisionCaps(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_DVLL_CAPS *a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // r9
  float v6; // xmm1_4
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // cl
  char v9; // dl
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm0_4
  int v14; // eax
  __m128i v15; // xmm0
  unsigned int v16; // r8d
  unsigned __int8 v17; // dl
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // cl
  float v20; // xmm0_4
  __int64 v21; // [rsp+20h] [rbp-19h] BYREF
  __int16 v22; // [rsp+28h] [rbp-11h]
  _BYTE v23[80]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v24; // [rsp+80h] [rbp+47h]
  unsigned int v25; // [rsp+A8h] [rbp+6Fh] BYREF
  int v26; // [rsp+B8h] [rbp+7Fh] BYREF
  __int16 v27; // [rsp+BCh] [rbp+83h]
  unsigned __int8 v28; // [rsp+BEh] [rbp+85h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v24 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v23, a2, a1);
  if ( (int)result >= 0 )
  {
    v25 = 0;
    v21 = 0LL;
    v22 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( !MonDescParser::EDID_PARSER::GetDolbyVisionVendorDataBlock(
            (MonDescParser::EDID_PARSER *)v23,
            (struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1 *)&v21,
            (struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2 *)&v26,
            &v25) )
      return 3221226021LL;
    if ( v25 == 1 )
    {
      v5 = BYTE3(v21);
      if ( (BYTE3(v21) & 3) != 1 )
      {
        *(_BYTE *)a3 = 0;
        return 3221225659LL;
      }
      v6 = FLOAT_0_00390625;
      v7 = BYTE5(v21);
      v8 = BYTE4(v21);
      v9 = BYTE6(v21);
      *(_BYTE *)a3 = 1;
      v10 = BYTE2(v21) >> 1;
      *((_BYTE *)a3 + 72) = 0;
      v11 = (float)v10;
      v12 = 50 * (BYTE1(v21) >> 1);
      *((double *)a3 + 1) = (float)((float)(v11 / 127.0) * (float)(v11 / 127.0));
      v13 = (float)v12;
      v14 = (BYTE6(v21) >> 3) | 0xA0;
      *((double *)a3 + 2) = (float)(v13 + 100.0);
      *((double *)a3 + 3) = (float)((float)v14 * 0.00390625);
      *((double *)a3 + 4) = (float)((float)(v8 & 1 | 0x40 | (2 * (v7 & 1 | (2 * (v9 & 7))))) * 0.00390625);
      *((double *)a3 + 5) = (float)((float)(v8 >> 1) * 0.00390625);
      *((double *)a3 + 6) = (float)((float)((v7 >> 1) | 0x80u) * 0.00390625);
      *((double *)a3 + 7) = (float)((float)((v5 >> 5) | 0x20u) * 0.00390625);
      v15 = _mm_cvtsi32_si128((unsigned __int8)(v5 & 0x1C | 0x20) >> 2);
    }
    else
    {
      if ( v25 != 2 )
        return 0LL;
      v6 = FLOAT_0_00390625;
      v16 = BYTE2(v26);
      v17 = HIBYTE(v27);
      v18 = (unsigned __int64)BYTE1(v26) >> 3;
      *(_BYTE *)a3 = 1;
      *((double *)a3 + 1) = dword_1C0119C30[v18];
      v19 = v28;
      *((double *)a3 + 2) = dword_1C0119CB0[(unsigned __int64)v16 >> 3];
      *((double *)a3 + 3) = (float)((float)((v17 >> 3) | 0xA0u) * 0.00390625);
      LODWORD(v18) = HIBYTE(v26) >> 1;
      *((double *)a3 + 4) = (float)((float)((v19 >> 3) | 0x40u) * 0.00390625);
      v20 = (float)(int)v18;
      LODWORD(v18) = ((unsigned __int8)v27 >> 1) | 0x80;
      *((double *)a3 + 5) = (float)(v20 * 0.00390625);
      *((double *)a3 + 6) = (float)((float)(int)v18 * 0.00390625);
      *((double *)a3 + 7) = (float)((float)(v17 & 7 | 0x20u) * 0.00390625);
      v15 = _mm_cvtsi32_si128(v19 & 7 | 8u);
      *((_BYTE *)a3 + 72) = (((v16 & 3) - 1) & 0xFD) == 0;
    }
    *((double *)a3 + 8) = (float)(_mm_cvtepi32_ps(v15).m128_f32[0] * v6);
    return 0LL;
  }
  return result;
}
