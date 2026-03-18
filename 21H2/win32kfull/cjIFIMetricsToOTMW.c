/*
 * XREFs of cjIFIMetricsToOTMW @ 0x1C0013FC0
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0018120 (GreGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0014ED0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0016300 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C001713C (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C0017FD4 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02AF9B0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 */

__int64 __fastcall cjIFIMetricsToOTMW(
        _BYTE *a1,
        unsigned int *a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4,
        struct _IFIMETRICS *a5,
        int a6)
{
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  float v13; // xmm3_4
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // eax
  signed int v39; // eax
  __int64 result; // rax
  unsigned int *v41; // r15
  unsigned __int64 v42; // r11
  int v43; // r11d
  __int64 v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned __int16 *v47; // r15
  int v48; // r11d
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned __int16 *v51; // r15
  int v52; // r11d
  __int64 v53; // r14
  int IsZero; // eax
  __m128i v55; // xmm1
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  unsigned int v59; // [rsp+20h] [rbp-60h] BYREF
  float v60[3]; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v61; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v62; // [rsp+46h] [rbp-3Ah]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v61, a5, a3, a4);
  v10 = 0;
  if ( a5->fwdWinAscender + a5->fwdWinDescender == 0 || a5->fwdUnitsPerEm == 0 )
    return v10;
  vIFIMetricsToTextMetricWStrict(a3, a4, (struct tagTEXTMETRICW *)(a2 + 1), a5);
  a1[4] = a5->chFirstChar;
  a1[5] = a5->chLastChar;
  a1[6] = a5->chDefaultChar;
  a1[7] = a5->chBreakChar;
  v12 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 220LL) )
  {
    v13 = *(float *)(v12 + 212);
    v60[0] = *(float *)(v12 + 216);
    if ( v13 == v60[0] )
    {
      v14 = v61;
      a2[21] = *(_DWORD *)(v61 + 140);
    }
    else
    {
      IsZero = EFLOAT::bIsZero((EFLOAT *)v60);
      v14 = v61;
      a2[21] = *(_DWORD *)(v61 + 140);
      if ( !IsZero )
      {
        v59 = 0;
        bFToL(v11, &v59, 0LL);
        a2[22] = v59;
        goto LABEL_6;
      }
    }
    a2[22] = *(_DWORD *)(v14 + 136);
LABEL_6:
    a2[24] = *(__int16 *)(v14 + 56);
    v59 = 0;
    bFToL(v11, &v59, 0LL);
    a2[25] = v59;
    v59 = 0;
    bFToL(v15, &v59, 0LL);
    a2[26] = v59;
    v59 = 0;
    bFToL(v16, &v59, 0LL);
    a2[27] = v59;
    v59 = 0;
    bFToL(v17, &v59, 0LL);
    a2[31] = v59;
    v59 = 0;
    bFToL(v18, &v59, 0LL);
    a2[30] = v59;
    v59 = 0;
    bFToL(v19, &v59, 0LL);
    a2[33] = v59;
    v59 = 0;
    bFToL(v20, &v59, 0LL);
    a2[32] = v59;
    v59 = 0;
    bFToL(v21, &v59, 0LL);
    a2[34] = v59;
    v59 = 0;
    bFToL(v22, &v59, 0LL);
    a2[35] = v59;
    v59 = 0;
    bFToL(v23, &v59, 0LL);
    a2[36] = v59;
    v59 = 0;
    bFToL(v24, &v59, 0LL);
    a2[38] = v59;
    v59 = 0;
    bFToL(v25, &v59, 0LL);
    a2[39] = v59;
    v59 = 0;
    bFToL(v26, &v59, 0LL);
    a2[40] = v59;
    v59 = 0;
    bFToL(v27, &v59, 0LL);
    a2[41] = v59;
    v59 = 0;
    bFToL(v28, &v59, 0LL);
    a2[42] = v59;
    v59 = 0;
    bFToL(v29, &v59, 0LL);
    a2[43] = v59;
    v59 = 0;
    bFToL(v30, &v59, 0LL);
    a2[44] = v59;
    v59 = 0;
    bFToL(v31, &v59, 0LL);
    a2[45] = v59;
    v59 = 0;
    bFToL(v32, &v59, 0LL);
    a2[46] = v59;
    v59 = 0;
    bFToL(v33, &v59, 0LL);
    a2[47] = v59;
    v59 = 0;
    bFToL(v34, &v59, 0LL);
    a2[48] = v59;
    v59 = 0;
    bFToL(v35, &v59, 0LL);
    a2[49] = v59;
    v59 = 0;
    bFToL(v36, &v59, 0LL);
    a2[29] = v59;
    v59 = 0;
    bFToL(v37, &v59, 0LL);
    a2[28] = v59;
    goto LABEL_7;
  }
  v14 = v61;
  a2[21] = *(_DWORD *)(v61 + 140);
  a2[22] = *(_DWORD *)(v14 + 136);
  a2[24] = *(__int16 *)(v14 + 56);
  a2[25] = *(__int16 *)(v14 + 70);
  a2[26] = *(__int16 *)(v14 + 72);
  a2[27] = *(__int16 *)(v14 + 74);
  a2[30] = *(_DWORD *)(v14 + 144);
  a2[31] = *(_DWORD *)(v14 + 148);
  a2[32] = *(_DWORD *)(v14 + 152);
  a2[33] = *(_DWORD *)(v14 + 156);
  a2[34] = *(__int16 *)(v14 + 64);
  a2[35] = *(__int16 *)(v14 + 66);
  a2[36] = *(__int16 *)(v14 + 68);
  a2[38] = *(__int16 *)(v14 + 84);
  a2[39] = *(__int16 *)(v14 + 86);
  a2[40] = *(__int16 *)(v14 + 88);
  a2[41] = *(__int16 *)(v14 + 90);
  a2[42] = *(__int16 *)(v14 + 92);
  a2[43] = *(__int16 *)(v14 + 94);
  a2[44] = *(__int16 *)(v14 + 96);
  a2[45] = *(__int16 *)(v14 + 98);
  a2[46] = *(__int16 *)(v14 + 104);
  a2[47] = *(__int16 *)(v14 + 106);
  a2[48] = *(__int16 *)(v14 + 100);
  a2[49] = *(__int16 *)(v14 + 102);
  a2[29] = *(__int16 *)(v14 + 82);
  a2[28] = *(__int16 *)(v14 + 80);
LABEL_7:
  v38 = *(_DWORD *)(v14 + 32);
  a2[23] = v38;
  if ( !v38 )
  {
    v39 = *(_DWORD *)(v14 + 140);
    if ( v39 <= 0 || *(_DWORD *)(v14 + 136) )
    {
      v55 = _mm_cvtsi32_si128(v39);
      v56 = *(_DWORD *)(v14 + 136);
      v60[0] = 0.0;
      v59 = 0;
      vArctan(
        (unsigned int)_mm_cvtsi128_si32((__m128i)_mm_cvtepi32_ps(v55)),
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)-v56)),
        &v59,
        v60);
      v60[0] = 0.0;
      bFToL(v57, v60, 0LL);
      v58 = LODWORD(v60[0]);
      a2[23] = LODWORD(v60[0]);
      if ( v58 > 1800 )
        a2[23] = v58 - 3600;
    }
  }
  cjOTMAWSize(a5, a2);
  *(_QWORD *)((char *)a2 + 65) = *(_QWORD *)(v14 + 172);
  *(_WORD *)((char *)a2 + 73) = *(_WORD *)(v14 + 180);
  a2[19] = v62;
  a2[20] = *(unsigned __int16 *)(v14 + 54);
  a2[37] = *(__int16 *)(v14 + 58);
  result = 232LL;
  if ( !a6 )
  {
    *((_QWORD *)a2 + 25) = 0LL;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_QWORD *)a2 + 27) = 0LL;
    *((_QWORD *)a2 + 28) = 0LL;
    return result;
  }
  v41 = a2 + 58;
  v42 = *a2 - 232LL;
  *((_QWORD *)a2 + 25) = 232LL;
  StringCchCopyW(
    (unsigned __int16 *)a2 + 116,
    (unsigned int)(v42 >> 1),
    (const unsigned __int16 *)(v14 + *(int *)(v14 + 8)));
  v44 = -1LL;
  v45 = -1LL;
  do
    ++v45;
  while ( *((_WORD *)v41 + v45) );
  v46 = (unsigned int)(v45 + 1);
  v47 = (unsigned __int16 *)v41 + v46;
  *((_QWORD *)a2 + 26) = (char *)v47 - (char *)a2;
  StringCchCopyW(v47, (unsigned int)(v43 - v46), (const unsigned __int16 *)(v14 + *(int *)(v14 + 16)));
  v49 = -1LL;
  do
    ++v49;
  while ( v47[v49] );
  v50 = (unsigned int)(v49 + 1);
  v51 = &v47[v50];
  *((_QWORD *)a2 + 27) = (char *)v51 - (char *)a2;
  StringCchCopyW(v51, (unsigned int)(v48 - v50), (const unsigned __int16 *)(v14 + *(int *)(v14 + 12)));
  do
    ++v44;
  while ( v51[v44] );
  v53 = (unsigned int)(v44 + 1);
  *((_QWORD *)a2 + 28) = (char *)&v51[v53] - (char *)a2;
  StringCchCopyW(&v51[v53], (unsigned int)(v52 - v53), (const unsigned __int16 *)(v14 + *(int *)(v14 + 20)));
  return *a2;
}
