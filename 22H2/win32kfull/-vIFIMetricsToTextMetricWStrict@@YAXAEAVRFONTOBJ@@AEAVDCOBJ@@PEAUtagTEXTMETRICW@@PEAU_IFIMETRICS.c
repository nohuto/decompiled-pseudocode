/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0083110
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C008299C (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C008579C (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0083498 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C00835E4 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     GetAppCompatFlags @ 0x1C00A4B80 (GetAppCompatFlags.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *this,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v8; // di
  char v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  LONG v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  LONG v20; // ecx
  char v21; // al
  BYTE *v22; // rcx
  struct Gre::Base::SESSION_GLOBALS *v23; // r8
  __int64 v24; // rcx
  BYTE v25; // r8
  int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v33; // [rsp+34h] [rbp-2Ch]
  char v34; // [rsp+36h] [rbp-2Ah]
  LONG v35; // [rsp+44h] [rbp-1Ch]
  LONG v36; // [rsp+48h] [rbp-18h]
  LONG v37; // [rsp+4Ch] [rbp-14h]
  LONG v38; // [rsp+50h] [rbp-10h]
  LONG v39; // [rsp+54h] [rbp-Ch]
  LONG v40; // [rsp+58h] [rbp-8h]
  LONG v41; // [rsp+A8h] [rbp+48h] BYREF
  int v42; // [rsp+B0h] [rbp+50h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v32, a4, this, a2);
  v8 = 0;
  v9 = 8;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = (*(_DWORD *)(*(_QWORD *)this + 324LL) + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)this + 316LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(this);
  }
  else
  {
    v41 = 0;
    bFToL(2050LL, &v41, 0LL);
    a3->tmHeight = v41;
    v41 = 0;
    bFToL(v27, &v41, 0LL);
    a3->tmAscent = v41;
    RFONTOBJ::lOverhang(this);
    v28 = *(_QWORD *)this;
    v41 = 0;
    bFToL(v28, &v41, 0LL);
    a3->tmOverhang = v41;
  }
  v10 = v32;
  if ( (*(_DWORD *)(v32 + 48) & 0x3000010) != 0 )
  {
    v11 = *(_QWORD *)this;
    v41 = 0;
    v12 = *(unsigned int *)(v11 + 380);
    if ( (_DWORD)v12 == 0x80000000 )
    {
      v42 = *(_DWORD *)(v11 + 216);
      bFToL(v12, &v41, 0LL);
      v14 = a3->tmHeight - v41;
    }
    else
    {
      bFToL(v12, &v41, 0LL);
      v14 = v41;
    }
    a3->tmInternalLeading = v14;
    v15 = *(_QWORD *)this;
    v41 = 0;
    if ( *(_DWORD *)(v15 + 376) == 0x80000000 )
    {
      v13 = *(unsigned __int16 *)(v10 + 68);
      LOWORD(v13) = *(_WORD *)(v10 + 64) + v13 - *(_WORD *)(v10 + 66) - *(_WORD *)(v10 + 62) - *(_WORD *)(v10 + 60);
      v42 = *(_DWORD *)(v15 + 216);
      if ( (__int16)v13 <= 0 )
        LOWORD(v13) = 0;
    }
    bFToL(v13, &v41, 0LL);
    a3->tmExternalLeading = v41;
    v16 = *(_QWORD *)this;
    v41 = 0;
    v17 = *(unsigned int *)(v16 + 384);
    if ( (_DWORD)v17 == 0x80000000 )
      v42 = *(_DWORD *)(v16 + 212);
    bFToL(v17, &v41, 0LL);
    a3->tmMaxCharWidth = v41;
    v18 = *(_QWORD *)this;
    v41 = 0;
    v19 = *(unsigned int *)(v18 + 388);
    if ( (_DWORD)v19 == 0x80000000 )
      v42 = *(_DWORD *)(v18 + 212);
    bFToL(v19, &v41, 0LL);
    a3->tmAveCharWidth = v41;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v35;
    a3->tmAveCharWidth = v36;
    a3->tmInternalLeading = v37;
    a3->tmExternalLeading = v38;
  }
  else
  {
    v41 = 0;
    bFToL(2050LL, &v41, 0LL);
    a3->tmMaxCharWidth = v41;
    v41 = 0;
    bFToL(v29, &v41, 0LL);
    a3->tmAveCharWidth = v41;
    v41 = 0;
    bFToL(v30, &v41, 0LL);
    a3->tmInternalLeading = v41;
    v41 = 0;
    bFToL(v31, &v41, 0LL);
    a3->tmExternalLeading = v41;
  }
  v20 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v33;
  v21 = v34 & 1;
  a3->tmDescent = v20;
  a3->tmItalic = -(v21 != 0);
  a3->tmUnderlined = *(_BYTE *)(v10 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v10 + 52) & 0x10;
  LOBYTE(v20) = *(_DWORD *)(*(_QWORD *)a2 + 1752LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 1752LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v20 != 0);
  a3->tmFirstChar = *(_WORD *)(v10 + 112);
  a3->tmLastChar = *(_WORD *)(v10 + 114);
  a3->tmDefaultChar = *(_WORD *)(v10 + 116);
  a3->tmBreakChar = *(_WORD *)(v10 + 118);
  v22 = *(BYTE **)(*(_QWORD *)a2 + 976LL);
  a3->tmCharSet = v22[6];
  v23 = Gre::Base::Globals((Gre::Base *)v22);
  if ( (*(_DWORD *)(v10 + 48) & 1) != 0 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v24 + 40) & 1) != 0
      || (*(_DWORD *)(v24 + 2152) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 1
      || *((_DWORD *)v23 + 39) && (int)GetAppCompatFlags(0LL) < 0 )
    {
      v9 = 0;
    }
    v25 = v9 | *(_BYTE *)(v10 + 45) & 0xF0 | (*(_DWORD *)(v10 + 48) >> 1) & 2 | ((*(_DWORD *)(v10 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v10 + 48) & 0x401000) == 0);
  }
  else
  {
    v26 = *(_DWORD *)(*(_QWORD *)this + 92LL);
    if ( (a4->flInfo & 8) != 0 && (!*((_DWORD *)v23 + 39) || (int)GetAppCompatFlags(0LL) >= 0) )
      v8 = 10;
    v25 = v8 | (v26 != 0 ? 8 : 0) | *(_BYTE *)(v10 + 45) & 0xF0 | (*(_DWORD *)(v10 + 48) >> 1) & 2 | ((*(_DWORD *)(v10 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v10 + 48) & 0x401000) == 0);
  }
  a3->tmPitchAndFamily = v25;
  a3->tmDigitizedAspectX = v39;
  a3->tmDigitizedAspectY = v40;
}
