/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C01103E8
 * Callers:
 *     ?vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z @ 0x1C010E3E4 (-vIFIMetricsToTextMetricW@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@PEAU_IFIMETRICS@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1C010FC74 (cjIFIMetricsToOTMW.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     GetAppCompatFlags @ 0x1C00DBDF0 (GetAppCompatFlags.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C0110770 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0111610 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *this,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v8; // di
  __int64 v9; // r8
  char v10; // r15
  int v11; // edx
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // ecx
  float v15; // xmm0_4
  int v16; // eax
  LONG v17; // r8d
  __int64 v18; // rdx
  int v19; // eax
  __int16 v20; // cx
  float v21; // xmm0_4
  __int64 v22; // rax
  int v23; // ecx
  float v24; // xmm0_4
  __int64 v25; // rax
  int v26; // ecx
  float v27; // xmm0_4
  LONG v28; // ecx
  char v29; // al
  BYTE *v30; // rcx
  struct Gre::Base::SESSION_GLOBALS *v31; // r8
  __int64 v32; // rcx
  BYTE v33; // r8
  int v34; // esi
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v42; // [rsp+34h] [rbp-2Ch]
  char v43; // [rsp+36h] [rbp-2Ah]
  LONG v44; // [rsp+44h] [rbp-1Ch]
  LONG v45; // [rsp+48h] [rbp-18h]
  LONG v46; // [rsp+4Ch] [rbp-14h]
  LONG v47; // [rsp+50h] [rbp-10h]
  LONG v48; // [rsp+54h] [rbp-Ch]
  LONG v49; // [rsp+58h] [rbp-8h]
  LONG v50; // [rsp+A8h] [rbp+48h] BYREF
  float v51; // [rsp+B0h] [rbp+50h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v41, a4, this, a2);
  v8 = 0;
  v9 = *(_QWORD *)this;
  v10 = 8;
  v11 = *(_DWORD *)(*(_QWORD *)this + 324LL);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = (v11 + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)this + 316LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(this);
  }
  else
  {
    v50 = 0;
    bFToL((float)v11 * *(float *)(v9 + 684), &v50, 0);
    a3->tmHeight = v50;
    v35 = *(_QWORD *)this;
    v50 = 0;
    bFToL((float)*(int *)(v35 + 316) * *(float *)(v35 + 684), &v50, 0);
    a3->tmAscent = v50;
    v36 = RFONTOBJ::lOverhang(this);
    v37 = *(_QWORD *)this;
    v50 = 0;
    bFToL((float)(16 * v36) * *(float *)(v37 + 680), &v50, 0);
    a3->tmOverhang = v50;
  }
  v12 = v41;
  if ( (*(_DWORD *)(v41 + 48) & 0x3000010) != 0 )
  {
    v13 = *(_QWORD *)this;
    v50 = 0;
    v14 = *(_DWORD *)(v13 + 380);
    if ( v14 == 0x80000000 )
    {
      v15 = *(float *)(v13 + 216);
      v16 = *(__int16 *)(v41 + 56);
      v51 = v15;
      bFToL((float)v16 * v15, &v50, 0);
      v17 = a3->tmHeight - v50;
    }
    else
    {
      bFToL((float)v14 * *(float *)(v13 + 684), &v50, 0);
      v17 = v50;
    }
    a3->tmInternalLeading = v17;
    v18 = *(_QWORD *)this;
    v50 = 0;
    v19 = *(_DWORD *)(v18 + 376);
    if ( v19 == 0x80000000 )
    {
      v20 = *(_WORD *)(v12 + 64)
          + *(_WORD *)(v12 + 68)
          - *(_WORD *)(v12 + 66)
          - *(_WORD *)(v12 + 62)
          - *(_WORD *)(v12 + 60);
      v51 = *(float *)(v18 + 216);
      if ( v20 <= 0 )
        v20 = 0;
      v21 = (float)v20 * v51;
    }
    else
    {
      v21 = (float)v19 * *(float *)(v18 + 684);
    }
    bFToL(v21, &v50, 0);
    a3->tmExternalLeading = v50;
    v22 = *(_QWORD *)this;
    v50 = 0;
    v23 = *(_DWORD *)(v22 + 384);
    if ( v23 == 0x80000000 )
    {
      v51 = *(float *)(v22 + 212);
      v24 = (float)v44 * v51;
    }
    else
    {
      v24 = (float)v23 * *(float *)(v22 + 680);
    }
    bFToL(v24, &v50, 0);
    a3->tmMaxCharWidth = v50;
    v25 = *(_QWORD *)this;
    v50 = 0;
    v26 = *(_DWORD *)(v25 + 388);
    if ( v26 == 0x80000000 )
    {
      v51 = *(float *)(v25 + 212);
      v27 = (float)v45 * v51;
    }
    else
    {
      v27 = (float)v26 * *(float *)(v25 + 680);
    }
    bFToL(v27, &v50, 0);
    a3->tmAveCharWidth = v50;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v44;
    a3->tmAveCharWidth = v45;
    a3->tmInternalLeading = v46;
    a3->tmExternalLeading = v47;
  }
  else
  {
    v50 = 0;
    bFToL((float)(16 * v44) * *(float *)(*(_QWORD *)this + 680LL), &v50, 0);
    v38 = 16 * v45;
    a3->tmMaxCharWidth = v50;
    v50 = 0;
    bFToL((float)v38 * *(float *)(*(_QWORD *)this + 680LL), &v50, 0);
    v39 = 16 * v46;
    a3->tmAveCharWidth = v50;
    v50 = 0;
    bFToL((float)v39 * *(float *)(*(_QWORD *)this + 684LL), &v50, 0);
    v40 = 16 * v47;
    a3->tmInternalLeading = v50;
    v50 = 0;
    bFToL((float)v40 * *(float *)(*(_QWORD *)this + 684LL), &v50, 0);
    a3->tmExternalLeading = v50;
  }
  v28 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v42;
  v29 = v43 & 1;
  a3->tmDescent = v28;
  a3->tmItalic = -(v29 != 0);
  a3->tmUnderlined = *(_BYTE *)(v12 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v12 + 52) & 0x10;
  LOBYTE(v28) = *(_DWORD *)(*(_QWORD *)a2 + 1752LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 1752LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v28 != 0);
  a3->tmFirstChar = *(_WORD *)(v12 + 112);
  a3->tmLastChar = *(_WORD *)(v12 + 114);
  a3->tmDefaultChar = *(_WORD *)(v12 + 116);
  a3->tmBreakChar = *(_WORD *)(v12 + 118);
  v30 = *(BYTE **)(*(_QWORD *)a2 + 976LL);
  a3->tmCharSet = v30[6];
  v31 = Gre::Base::Globals((Gre::Base *)v30);
  if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
  {
    v32 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v32 + 40) & 1) != 0
      || (*(_DWORD *)(v32 + 2152) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 1
      || *((_DWORD *)v31 + 39) && (int)GetAppCompatFlags(0LL) < 0 )
    {
      v10 = 0;
    }
    v33 = v10 | *(_BYTE *)(v12 + 45) & 0xF0 | (*(_DWORD *)(v12 + 48) >> 1) & 2 | ((*(_DWORD *)(v12 + 48) & 1) != 0
                                                                                ? 6
                                                                                : 0) | ((*(_DWORD *)(v12 + 48) & 0x401000) == 0);
  }
  else
  {
    v34 = *(_DWORD *)(*(_QWORD *)this + 92LL);
    if ( (a4->flInfo & 8) != 0 && (!*((_DWORD *)v31 + 39) || (int)GetAppCompatFlags(0LL) >= 0) )
      v8 = 10;
    v33 = v8 | (v34 != 0 ? 8 : 0) | *(_BYTE *)(v12 + 45) & 0xF0 | (*(_DWORD *)(v12 + 48) >> 1) & 2 | ((*(_DWORD *)(v12 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v12 + 48) & 0x401000) == 0);
  }
  a3->tmPitchAndFamily = v33;
  a3->tmDigitizedAspectX = v48;
  a3->tmDigitizedAspectY = v49;
}
