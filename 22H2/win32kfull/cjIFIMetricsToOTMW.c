/*
 * XREFs of cjIFIMetricsToOTMW @ 0x1C008299C
 * Callers:
 *     ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0081368 (-GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4Entry.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017678 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C00816AC (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0083110 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0083498 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01150FC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02C6290 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 */

__int64 __fastcall cjIFIMetricsToOTMW(
        _BYTE *a1,
        unsigned int *a2,
        struct RFONTOBJ *a3,
        struct XDCOBJ *a4,
        struct _IFIMETRICS *a5,
        int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  float v12; // xmm3_4
  __int64 v13; // rdi
  __int64 v14; // rcx
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
  unsigned int v37; // eax
  signed int v38; // eax
  __int64 v39; // r11
  unsigned int *v40; // r14
  int v41; // r11d
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int16 *v45; // r14
  int v46; // r11d
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int16 *v49; // r14
  int v50; // r11d
  __int64 v51; // rsi
  __int64 result; // rax
  BOOL IsZero; // eax
  __m128i v54; // xmm1
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  unsigned int v58; // [rsp+20h] [rbp-60h] BYREF
  float v59[3]; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v60; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v61; // [rsp+46h] [rbp-3Ah]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v60, a5, a3, a4);
  if ( a5->fwdWinAscender + a5->fwdWinDescender == 0 || a5->fwdUnitsPerEm == 0 )
    return 0LL;
  vIFIMetricsToTextMetricWStrict(a3, a4, (struct tagTEXTMETRICW *)(a2 + 1), a5);
  a1[4] = a5->chFirstChar;
  a1[5] = a5->chLastChar;
  a1[6] = a5->chDefaultChar;
  a1[7] = a5->chBreakChar;
  v11 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 220LL) )
  {
    v12 = *(float *)(v11 + 212);
    v59[0] = *(float *)(v11 + 216);
    if ( v12 == v59[0] )
    {
      v13 = v60;
      a2[21] = *(_DWORD *)(v60 + 140);
    }
    else
    {
      IsZero = EFLOAT::bIsZero((EFLOAT *)v59);
      v13 = v60;
      a2[21] = *(_DWORD *)(v60 + 140);
      if ( !IsZero )
      {
        v58 = 0;
        bFToL(v10, &v58, 0LL);
        a2[22] = v58;
        goto LABEL_6;
      }
    }
    a2[22] = *(_DWORD *)(v13 + 136);
LABEL_6:
    a2[24] = *(__int16 *)(v13 + 56);
    v58 = 0;
    bFToL(v10, &v58, 0LL);
    a2[25] = v58;
    v58 = 0;
    bFToL(v14, &v58, 0LL);
    a2[26] = v58;
    v58 = 0;
    bFToL(v15, &v58, 0LL);
    a2[27] = v58;
    v58 = 0;
    bFToL(v16, &v58, 0LL);
    a2[31] = v58;
    v58 = 0;
    bFToL(v17, &v58, 0LL);
    a2[30] = v58;
    v58 = 0;
    bFToL(v18, &v58, 0LL);
    a2[33] = v58;
    v58 = 0;
    bFToL(v19, &v58, 0LL);
    a2[32] = v58;
    v58 = 0;
    bFToL(v20, &v58, 0LL);
    a2[34] = v58;
    v58 = 0;
    bFToL(v21, &v58, 0LL);
    a2[35] = v58;
    v58 = 0;
    bFToL(v22, &v58, 0LL);
    a2[36] = v58;
    v58 = 0;
    bFToL(v23, &v58, 0LL);
    a2[38] = v58;
    v58 = 0;
    bFToL(v24, &v58, 0LL);
    a2[39] = v58;
    v58 = 0;
    bFToL(v25, &v58, 0LL);
    a2[40] = v58;
    v58 = 0;
    bFToL(v26, &v58, 0LL);
    a2[41] = v58;
    v58 = 0;
    bFToL(v27, &v58, 0LL);
    a2[42] = v58;
    v58 = 0;
    bFToL(v28, &v58, 0LL);
    a2[43] = v58;
    v58 = 0;
    bFToL(v29, &v58, 0LL);
    a2[44] = v58;
    v58 = 0;
    bFToL(v30, &v58, 0LL);
    a2[45] = v58;
    v58 = 0;
    bFToL(v31, &v58, 0LL);
    a2[46] = v58;
    v58 = 0;
    bFToL(v32, &v58, 0LL);
    a2[47] = v58;
    v58 = 0;
    bFToL(v33, &v58, 0LL);
    a2[48] = v58;
    v58 = 0;
    bFToL(v34, &v58, 0LL);
    a2[49] = v58;
    v58 = 0;
    bFToL(v35, &v58, 0LL);
    a2[29] = v58;
    v58 = 0;
    bFToL(v36, &v58, 0LL);
    a2[28] = v58;
    goto LABEL_7;
  }
  v13 = v60;
  a2[21] = *(_DWORD *)(v60 + 140);
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
  v37 = *(_DWORD *)(v13 + 32);
  a2[23] = v37;
  if ( !v37 )
  {
    v38 = *(_DWORD *)(v13 + 140);
    if ( v38 <= 0 || *(_DWORD *)(v13 + 136) )
    {
      v54 = _mm_cvtsi32_si128(v38);
      v55 = *(_DWORD *)(v13 + 136);
      v59[0] = 0.0;
      v58 = 0;
      vArctan(
        (unsigned int)_mm_cvtsi128_si32((__m128i)_mm_cvtepi32_ps(v54)),
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)-v55)),
        &v58,
        v59);
      v59[0] = 0.0;
      bFToL(v56, v59, 0LL);
      v57 = LODWORD(v59[0]);
      a2[23] = LODWORD(v59[0]);
      if ( v57 > 1800 )
        a2[23] = v57 - 3600;
    }
  }
  cjOTMAWSize(a5, a2);
  *(_QWORD *)((char *)a2 + 65) = *(_QWORD *)(v13 + 172);
  *(_WORD *)((char *)a2 + 73) = *(_WORD *)(v13 + 180);
  a2[19] = v61;
  a2[20] = *(unsigned __int16 *)(v13 + 54);
  a2[37] = *(__int16 *)(v13 + 58);
  if ( a6 )
  {
    v39 = *a2;
    v40 = a2 + 58;
    *((_QWORD *)a2 + 25) = 232LL;
    StringCchCopyW(
      (unsigned __int16 *)a2 + 116,
      (unsigned int)((unsigned __int64)(v39 - 232) >> 1),
      (const unsigned __int16 *)(v13 + *(int *)(v13 + 8)));
    v42 = -1LL;
    v43 = -1LL;
    do
      ++v43;
    while ( *((_WORD *)v40 + v43) );
    v44 = (unsigned int)(v43 + 1);
    v45 = (unsigned __int16 *)v40 + v44;
    *((_QWORD *)a2 + 26) = (char *)v45 - (char *)a2;
    StringCchCopyW(v45, (unsigned int)(v41 - v44), (const unsigned __int16 *)(v13 + *(int *)(v13 + 16)));
    v47 = -1LL;
    do
      ++v47;
    while ( v45[v47] );
    v48 = (unsigned int)(v47 + 1);
    v49 = &v45[v48];
    *((_QWORD *)a2 + 27) = (char *)v49 - (char *)a2;
    StringCchCopyW(v49, (unsigned int)(v46 - v48), (const unsigned __int16 *)(v13 + *(int *)(v13 + 12)));
    do
      ++v42;
    while ( v49[v42] );
    v51 = (unsigned int)(v42 + 1);
    *((_QWORD *)a2 + 28) = (char *)&v49[v51] - (char *)a2;
    StringCchCopyW(&v49[v51], (unsigned int)(v50 - v51), (const unsigned __int16 *)(v13 + *(int *)(v13 + 20)));
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
