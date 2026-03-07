__int64 __fastcall cjIFIMetricsToOTMW(
        _BYTE *a1,
        unsigned int *a2,
        struct RFONTOBJ *a3,
        struct XDCOBJ *a4,
        struct _IFIMETRICS *a5,
        int a6)
{
  __int64 v10; // rax
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned int v38; // eax
  signed int v39; // eax
  __int64 v40; // r11
  unsigned int *v41; // r14
  int v42; // r11d
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned __int16 *v46; // r14
  int v47; // r11d
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned __int16 *v50; // r14
  int v51; // r11d
  __int64 v52; // rsi
  __int64 result; // rax
  BOOL IsZero; // eax
  __m128i v55; // xmm1
  __m128i v56; // xmm1
  int v57; // eax
  int v58; // eax
  float v59; // [rsp+20h] [rbp-60h] BYREF
  int v60[3]; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v61; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v62; // [rsp+46h] [rbp-3Ah]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v61, a5, a3, a4);
  if ( a5->fwdWinAscender + a5->fwdWinDescender == 0 || a5->fwdUnitsPerEm == 0 )
    return 0LL;
  vIFIMetricsToTextMetricWStrict(a3, a4, (struct tagTEXTMETRICW *)(a2 + 1), a5);
  a1[4] = a5->chFirstChar;
  a1[5] = a5->chLastChar;
  a1[6] = a5->chDefaultChar;
  a1[7] = a5->chBreakChar;
  v10 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 220LL) )
  {
    v12 = *(float *)(v10 + 212);
    v60[0] = *(_DWORD *)(v10 + 216);
    v11 = *(float *)v60;
    if ( v12 == *(float *)v60 )
    {
      v13 = v61;
      a2[21] = *(_DWORD *)(v61 + 140);
    }
    else
    {
      IsZero = EFLOAT::bIsZero((EFLOAT *)v60);
      v13 = v61;
      a2[21] = *(_DWORD *)(v61 + 140);
      if ( !IsZero )
      {
        v55 = _mm_cvtsi32_si128(*(_DWORD *)(v13 + 136));
        v59 = 0.0;
        bFToL((float)(v12 / v11) * _mm_cvtepi32_ps(v55).m128_f32[0], (int *)&v59, 0);
        *((float *)a2 + 22) = v59;
        goto LABEL_6;
      }
    }
    a2[22] = *(_DWORD *)(v13 + 136);
LABEL_6:
    a2[24] = *(__int16 *)(v13 + 56);
    v14 = *(__int16 *)(v13 + 70);
    v59 = 0.0;
    bFToL((float)v14 * v11, (int *)&v59, 0);
    *((float *)a2 + 25) = v59;
    v15 = *(__int16 *)(v13 + 72);
    v59 = 0.0;
    bFToL((float)v15 * v11, (int *)&v59, 0);
    *((float *)a2 + 26) = v59;
    v16 = *(__int16 *)(v13 + 74);
    v59 = 0.0;
    bFToL((float)v16 * v11, (int *)&v59, 0);
    *((float *)a2 + 27) = v59;
    v17 = (float)*(int *)(v13 + 148);
    v59 = 0.0;
    bFToL(v17 * v11, (int *)&v59, 0);
    *((float *)a2 + 31) = v59;
    v18 = (float)*(int *)(v13 + 144);
    v59 = 0.0;
    bFToL(v18 * v12, (int *)&v59, 0);
    *((float *)a2 + 30) = v59;
    v19 = (float)*(int *)(v13 + 156);
    v59 = 0.0;
    bFToL(v19 * v11, (int *)&v59, 0);
    *((float *)a2 + 33) = v59;
    v20 = (float)*(int *)(v13 + 152);
    v59 = 0.0;
    bFToL(v20 * v12, (int *)&v59, 0);
    *((float *)a2 + 32) = v59;
    v21 = *(__int16 *)(v13 + 64);
    v59 = 0.0;
    bFToL((float)v21 * v11, (int *)&v59, 0);
    *((float *)a2 + 34) = v59;
    v22 = *(__int16 *)(v13 + 66);
    v59 = 0.0;
    bFToL((float)v22 * v11, (int *)&v59, 0);
    *((float *)a2 + 35) = v59;
    v23 = *(__int16 *)(v13 + 68);
    v59 = 0.0;
    bFToL((float)v23 * v11, (int *)&v59, 0);
    *((float *)a2 + 36) = v59;
    v24 = *(__int16 *)(v13 + 84);
    v59 = 0.0;
    bFToL((float)v24 * v12, (int *)&v59, 0);
    *((float *)a2 + 38) = v59;
    v25 = *(__int16 *)(v13 + 86);
    v59 = 0.0;
    bFToL((float)v25 * v11, (int *)&v59, 0);
    *((float *)a2 + 39) = v59;
    v26 = *(__int16 *)(v13 + 88);
    v59 = 0.0;
    bFToL((float)v26 * v12, (int *)&v59, 0);
    *((float *)a2 + 40) = v59;
    v27 = *(__int16 *)(v13 + 90);
    v59 = 0.0;
    bFToL((float)v27 * v11, (int *)&v59, 0);
    *((float *)a2 + 41) = v59;
    v28 = *(__int16 *)(v13 + 84);
    v59 = 0.0;
    bFToL((float)v28 * v12, (int *)&v59, 0);
    *((float *)a2 + 42) = v59;
    v29 = *(__int16 *)(v13 + 86);
    v59 = 0.0;
    bFToL((float)v29 * v11, (int *)&v59, 0);
    *((float *)a2 + 43) = v59;
    v30 = *(__int16 *)(v13 + 96);
    v59 = 0.0;
    bFToL((float)v30 * v12, (int *)&v59, 0);
    *((float *)a2 + 44) = v59;
    v31 = *(__int16 *)(v13 + 98);
    v59 = 0.0;
    bFToL((float)v31 * v11, (int *)&v59, 0);
    *((float *)a2 + 45) = v59;
    v32 = *(__int16 *)(v13 + 104);
    v59 = 0.0;
    bFToL((float)v32 * v11, (int *)&v59, 0);
    *((float *)a2 + 46) = v59;
    v33 = *(__int16 *)(v13 + 106);
    v59 = 0.0;
    bFToL((float)v33 * v11, (int *)&v59, 0);
    *((float *)a2 + 47) = v59;
    v34 = *(__int16 *)(v13 + 100);
    v59 = 0.0;
    bFToL((float)v34 * v11, (int *)&v59, 0);
    *((float *)a2 + 48) = v59;
    v35 = *(__int16 *)(v13 + 102);
    v59 = 0.0;
    bFToL((float)v35 * v11, (int *)&v59, 0);
    *((float *)a2 + 49) = v59;
    v36 = *(__int16 *)(v13 + 82);
    v59 = 0.0;
    bFToL((float)v36 * v11, (int *)&v59, 0);
    *((float *)a2 + 29) = v59;
    v37 = *(__int16 *)(v13 + 80);
    v59 = 0.0;
    bFToL((float)v37 * v11, (int *)&v59, 0);
    *((float *)a2 + 28) = v59;
    goto LABEL_7;
  }
  v13 = v61;
  a2[21] = *(_DWORD *)(v61 + 140);
  a2[22] = *(_DWORD *)(v13 + 136);
  a2[24] = *(__int16 *)(v13 + 56);
  a2[25] = *(__int16 *)(v13 + 70);
  a2[26] = *(__int16 *)(v13 + 72);
  a2[27] = *(__int16 *)(v13 + 74);
  a2[30] = *(_DWORD *)(v13 + 144);
  a2[31] = *(_DWORD *)(v13 + 148);
  a2[32] = *(_DWORD *)(v13 + 152);
  a2[33] = *(_DWORD *)(v13 + 156);
  a2[34] = *(__int16 *)(v13 + 64);
  a2[35] = *(__int16 *)(v13 + 66);
  a2[36] = *(__int16 *)(v13 + 68);
  a2[38] = *(__int16 *)(v13 + 84);
  a2[39] = *(__int16 *)(v13 + 86);
  a2[40] = *(__int16 *)(v13 + 88);
  a2[41] = *(__int16 *)(v13 + 90);
  a2[42] = *(__int16 *)(v13 + 92);
  a2[43] = *(__int16 *)(v13 + 94);
  a2[44] = *(__int16 *)(v13 + 96);
  a2[45] = *(__int16 *)(v13 + 98);
  a2[46] = *(__int16 *)(v13 + 104);
  a2[47] = *(__int16 *)(v13 + 106);
  a2[48] = *(__int16 *)(v13 + 100);
  a2[49] = *(__int16 *)(v13 + 102);
  a2[29] = *(__int16 *)(v13 + 82);
  a2[28] = *(__int16 *)(v13 + 80);
LABEL_7:
  v38 = *(_DWORD *)(v13 + 32);
  a2[23] = v38;
  if ( !v38 )
  {
    v39 = *(_DWORD *)(v13 + 140);
    if ( v39 <= 0 || *(_DWORD *)(v13 + 136) )
    {
      v56 = _mm_cvtsi32_si128(v39);
      v57 = *(_DWORD *)(v13 + 136);
      v60[0] = 0;
      v59 = 0.0;
      vArctan(
        (unsigned int)_mm_cvtsi128_si32((__m128i)_mm_cvtepi32_ps(v56)),
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)-v57)),
        &v59,
        v60);
      v60[0] = 0;
      bFToL(v59 * 10.0, v60, 0);
      v58 = v60[0];
      a2[23] = v60[0];
      if ( v58 > 1800 )
        a2[23] = v58 - 3600;
    }
  }
  cjOTMAWSize(a5, a2);
  *(_QWORD *)((char *)a2 + 65) = *(_QWORD *)(v13 + 172);
  *(_WORD *)((char *)a2 + 73) = *(_WORD *)(v13 + 180);
  a2[19] = v62;
  a2[20] = *(unsigned __int16 *)(v13 + 54);
  a2[37] = *(__int16 *)(v13 + 58);
  if ( a6 )
  {
    v40 = *a2;
    v41 = a2 + 58;
    *((_QWORD *)a2 + 25) = 232LL;
    StringCchCopyW(
      (unsigned __int16 *)a2 + 116,
      (unsigned int)((unsigned __int64)(v40 - 232) >> 1),
      (const unsigned __int16 *)(v13 + *(int *)(v13 + 8)));
    v43 = -1LL;
    v44 = -1LL;
    do
      ++v44;
    while ( *((_WORD *)v41 + v44) );
    v45 = (unsigned int)(v44 + 1);
    v46 = (unsigned __int16 *)v41 + v45;
    *((_QWORD *)a2 + 26) = (char *)v46 - (char *)a2;
    StringCchCopyW(v46, (unsigned int)(v42 - v45), (const unsigned __int16 *)(v13 + *(int *)(v13 + 16)));
    v48 = -1LL;
    do
      ++v48;
    while ( v46[v48] );
    v49 = (unsigned int)(v48 + 1);
    v50 = &v46[v49];
    *((_QWORD *)a2 + 27) = (char *)v50 - (char *)a2;
    StringCchCopyW(v50, (unsigned int)(v47 - v49), (const unsigned __int16 *)(v13 + *(int *)(v13 + 12)));
    do
      ++v43;
    while ( v50[v43] );
    v52 = (unsigned int)(v43 + 1);
    *((_QWORD *)a2 + 28) = (char *)&v50[v52] - (char *)a2;
    StringCchCopyW(&v50[v52], (unsigned int)(v51 - v52), (const unsigned __int16 *)(v13 + *(int *)(v13 + 20)));
    return *a2;
  }
  else
  {
    *((_QWORD *)a2 + 25) = 0LL;
    result = 232LL;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_QWORD *)a2 + 27) = 0LL;
    *((_QWORD *)a2 + 28) = 0LL;
  }
  return result;
}
