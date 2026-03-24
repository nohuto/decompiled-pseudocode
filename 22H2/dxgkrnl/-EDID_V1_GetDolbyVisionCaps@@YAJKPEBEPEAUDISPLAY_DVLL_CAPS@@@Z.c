/*
 * XREFs of ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0021E20
 * Callers:
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0180F08 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C000D878 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C0021EB8 (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISIO.c)
 */

__int64 __fastcall EDID_V1_GetDolbyVisionCaps(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_DVLL_CAPS *a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // r9
  bool v6; // al
  float v7; // xmm1_4
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // cl
  int v10; // eax
  int v11; // edx
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm0_4
  int v15; // eax
  __m128i v16; // xmm0
  unsigned int v17; // r8d
  unsigned __int8 v18; // dl
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // cl
  float v21; // xmm0_4
  __int64 v22; // [rsp+20h] [rbp-19h] BYREF
  __int16 v23; // [rsp+28h] [rbp-11h]
  _BYTE v24[80]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v25; // [rsp+80h] [rbp+47h]
  unsigned int v26; // [rsp+A8h] [rbp+6Fh] BYREF
  int v27; // [rsp+B8h] [rbp+7Fh] BYREF
  __int16 v28; // [rsp+BCh] [rbp+83h]
  unsigned __int8 v29; // [rsp+BEh] [rbp+85h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v25 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v24, a2, a1);
  if ( (int)result >= 0 )
  {
    v26 = 0;
    v22 = 0LL;
    v23 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    if ( !MonDescParser::EDID_PARSER::GetDolbyVisionVendorDataBlock(
            (MonDescParser::EDID_PARSER *)v24,
            (struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1 *)&v22,
            (struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2 *)&v27,
            &v26) )
      return 3221226021LL;
    if ( v26 == 1 )
    {
      v5 = BYTE3(v22);
      v6 = (BYTE3(v22) & 3) == 1;
      *(_BYTE *)a3 = v6;
      if ( !v6 )
        return 3221225659LL;
      v7 = FLOAT_0_00390625;
      v8 = BYTE5(v22);
      v9 = BYTE4(v22);
      v10 = BYTE2(v22) >> 1;
      v11 = 2 * (BYTE6(v22) & 7);
      *((_BYTE *)a3 + 72) = 0;
      v12 = (float)v10;
      v13 = 50 * (BYTE1(v22) >> 1);
      *((double *)a3 + 1) = (float)((float)(v12 / 127.0) * (float)(v12 / 127.0));
      v14 = (float)v13;
      v15 = (BYTE6(v22) >> 3) | 0xA0;
      *((double *)a3 + 2) = (float)(v14 + 100.0);
      *((double *)a3 + 3) = (float)((float)v15 * 0.00390625);
      *((double *)a3 + 4) = (float)((float)(v9 & 1 | 0x40 | (2 * (v8 & 1 | v11))) * 0.00390625);
      *((double *)a3 + 5) = (float)((float)(v9 >> 1) * 0.00390625);
      *((double *)a3 + 6) = (float)((float)((v8 >> 1) | 0x80u) * 0.00390625);
      *((double *)a3 + 7) = (float)((float)((v5 >> 5) | 0x20u) * 0.00390625);
      v16 = _mm_cvtsi32_si128((unsigned __int8)(v5 & 0x1C | 0x20) >> 2);
    }
    else
    {
      if ( v26 != 2 )
        return 0LL;
      v7 = FLOAT_0_00390625;
      v17 = BYTE2(v27);
      v18 = HIBYTE(v28);
      v19 = (unsigned __int64)BYTE1(v27) >> 3;
      *(_BYTE *)a3 = 1;
      *((double *)a3 + 1) = dword_1C008FAF0[v19];
      v20 = v29;
      *((double *)a3 + 2) = dword_1C008FB70[(unsigned __int64)v17 >> 3];
      *((double *)a3 + 3) = (float)((float)((v18 >> 3) | 0xA0u) * 0.00390625);
      LODWORD(v19) = HIBYTE(v27) >> 1;
      *((double *)a3 + 4) = (float)((float)((v20 >> 3) | 0x40u) * 0.00390625);
      v21 = (float)(int)v19;
      LODWORD(v19) = ((unsigned __int8)v28 >> 1) | 0x80;
      *((double *)a3 + 5) = (float)(v21 * 0.00390625);
      *((double *)a3 + 6) = (float)((float)(int)v19 * 0.00390625);
      *((double *)a3 + 7) = (float)((float)(v18 & 7 | 0x20u) * 0.00390625);
      v16 = _mm_cvtsi32_si128(v20 & 7 | 8u);
      *((_BYTE *)a3 + 72) = (((v17 & 3) - 1) & 0xFD) == 0;
    }
    *((double *)a3 + 8) = (float)(_mm_cvtepi32_ps(v16).m128_f32[0] * v7);
    return 0LL;
  }
  return result;
}
