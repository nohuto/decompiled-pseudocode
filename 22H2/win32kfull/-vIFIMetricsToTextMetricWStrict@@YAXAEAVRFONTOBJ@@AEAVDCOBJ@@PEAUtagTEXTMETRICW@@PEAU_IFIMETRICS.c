/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0063668
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0064470 (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C009FCE0 (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0063FDC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009BFA8 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 *     GetAppCompatFlags @ 0x1C0110BC0 (GetAppCompatFlags.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *a1,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v8; // si
  char v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  LONG v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  LONG v21; // ecx
  char v22; // al
  __int64 v23; // rax
  BYTE v24; // r8
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v32; // [rsp+34h] [rbp-2Ch]
  char v33; // [rsp+36h] [rbp-2Ah]
  LONG v34; // [rsp+44h] [rbp-1Ch]
  LONG v35; // [rsp+48h] [rbp-18h]
  LONG v36; // [rsp+4Ch] [rbp-14h]
  LONG v37; // [rsp+50h] [rbp-10h]
  LONG v38; // [rsp+54h] [rbp-Ch]
  LONG v39; // [rsp+58h] [rbp-8h]
  LONG v40; // [rsp+A8h] [rbp+48h] BYREF
  int v41; // [rsp+B0h] [rbp+50h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v31, a4, a1, a2);
  v8 = 0;
  v9 = 8;
  v10 = *(unsigned int *)(*(_QWORD *)a1 + 324LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = ((int)v10 + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)a1 + 316LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(a1);
  }
  else
  {
    v40 = 0;
    bFToL(v10, &v40, 0LL);
    a3->tmHeight = v40;
    v40 = 0;
    bFToL(v26, &v40, 0LL);
    a3->tmAscent = v40;
    RFONTOBJ::lOverhang(a1);
    v40 = 0;
    bFToL(v27, &v40, 0LL);
    a3->tmOverhang = v40;
  }
  v11 = v31;
  if ( (*(_DWORD *)(v31 + 48) & 0x3000010) != 0 )
  {
    v12 = *(_QWORD *)a1;
    v40 = 0;
    v13 = *(unsigned int *)(v12 + 380);
    if ( (_DWORD)v13 == 0x80000000 )
    {
      v41 = *(_DWORD *)(v12 + 216);
      bFToL(v13, &v40, 0LL);
      v15 = a3->tmHeight - v40;
    }
    else
    {
      bFToL(v13, &v40, 0LL);
      v15 = v40;
    }
    a3->tmInternalLeading = v15;
    v16 = *(_QWORD *)a1;
    v40 = 0;
    if ( *(_DWORD *)(v16 + 376) == 0x80000000 )
    {
      v14 = *(unsigned __int16 *)(v11 + 68);
      LOWORD(v14) = *(_WORD *)(v11 + 64) + v14 - *(_WORD *)(v11 + 66) - *(_WORD *)(v11 + 62) - *(_WORD *)(v11 + 60);
      v41 = *(_DWORD *)(v16 + 216);
      if ( (__int16)v14 <= 0 )
        LOWORD(v14) = 0;
    }
    bFToL(v14, &v40, 0LL);
    a3->tmExternalLeading = v40;
    v17 = *(_QWORD *)a1;
    v40 = 0;
    v18 = *(unsigned int *)(v17 + 384);
    if ( (_DWORD)v18 == 0x80000000 )
      v41 = *(_DWORD *)(v17 + 212);
    bFToL(v18, &v40, 0LL);
    a3->tmMaxCharWidth = v40;
    v19 = *(_QWORD *)a1;
    v40 = 0;
    v20 = *(unsigned int *)(v19 + 388);
    if ( (_DWORD)v20 == 0x80000000 )
      v41 = *(_DWORD *)(v19 + 212);
    bFToL(v20, &v40, 0LL);
    a3->tmAveCharWidth = v40;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v34;
    a3->tmAveCharWidth = v35;
    a3->tmInternalLeading = v36;
    a3->tmExternalLeading = v37;
  }
  else
  {
    v40 = 0;
    bFToL(2050LL, &v40, 0LL);
    a3->tmMaxCharWidth = v40;
    v40 = 0;
    bFToL(v28, &v40, 0LL);
    a3->tmAveCharWidth = v40;
    v40 = 0;
    bFToL(v29, &v40, 0LL);
    a3->tmInternalLeading = v40;
    v40 = 0;
    bFToL(v30, &v40, 0LL);
    a3->tmExternalLeading = v40;
  }
  v21 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v32;
  v22 = v33 & 1;
  a3->tmDescent = v21;
  a3->tmItalic = -(v22 != 0);
  a3->tmUnderlined = *(_BYTE *)(v11 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v11 + 52) & 0x10;
  LOBYTE(v21) = *(_DWORD *)(*(_QWORD *)a2 + 1760LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 1760LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v21 != 0);
  a3->tmFirstChar = *(_WORD *)(v11 + 112);
  a3->tmLastChar = *(_WORD *)(v11 + 114);
  a3->tmDefaultChar = *(_WORD *)(v11 + 116);
  a3->tmBreakChar = *(_WORD *)(v11 + 118);
  a3->tmCharSet = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 6LL);
  if ( (*(_DWORD *)(v11 + 48) & 1) != 0 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v23 + 40) & 1) != 0
      || (*(_DWORD *)(v23 + 2184) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 1
      || gbDBCSCodePage && (int)GetAppCompatFlags(0LL) < 0 )
    {
      v9 = 0;
    }
    v24 = v9 | *(_BYTE *)(v11 + 45) & 0xF0 | (*(_DWORD *)(v11 + 48) >> 1) & 2 | ((*(_DWORD *)(v11 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v11 + 48) & 0x401000) == 0);
  }
  else
  {
    v25 = *(_DWORD *)(*(_QWORD *)a1 + 92LL);
    if ( (a4->flInfo & 8) != 0 && (!gbDBCSCodePage || (int)GetAppCompatFlags(0LL) >= 0) )
      v8 = 10;
    v24 = v8 | *(_BYTE *)(v11 + 45) & 0xF0 | (v25 != 0 ? 8 : 0) | (*(_DWORD *)(v11 + 48) >> 1) & 2 | ((*(_DWORD *)(v11 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v11 + 48) & 0x401000) == 0);
  }
  a3->tmPitchAndFamily = v24;
  a3->tmDigitizedAspectX = v38;
  a3->tmDigitizedAspectY = v39;
}
