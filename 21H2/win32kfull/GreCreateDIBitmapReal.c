/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C00AC12C
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0066AF8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00A97E0 (NtGdiCreateSessionMappedDIBSection.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A9CD0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00A9FA0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C00ABAE0 (NtGdiCreateDIBSection.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     RecolorDeskPattern @ 0x1C0136D90 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C013E53C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C015DBC8 (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B67A4 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00A9C38 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00ABABC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1C0107724 (GreGetDCDpiScaleValue.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0109700 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0276840 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BD93C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BD9F8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        int a2,
        void *a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        void *a10,
        char a11,
        unsigned __int64 a12,
        _QWORD *a13)
{
  int v14; // r15d
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // r10d
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // esi
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  void *v28; // rsi
  _QWORD *v29; // r12
  unsigned int v30; // eax
  int v31; // ecx
  unsigned int v32; // r13d
  unsigned __int64 v33; // rsi
  HDC v34; // r13
  void *v35; // rax
  void *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  DYNAMICMODECHANGESHARELOCK *v40; // rcx
  ULONG v41; // ecx
  __int64 v42; // rcx
  unsigned int *v43; // rax
  unsigned int *v44; // rsi
  unsigned int v45; // r8d
  int v46; // esi
  __int64 v47; // rbx
  DYNAMICMODECHANGESHARELOCK *v48; // rcx
  int DCDpiScaleValue; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  int v53; // [rsp+64h] [rbp-184h]
  __int64 v54; // [rsp+70h] [rbp-178h] BYREF
  char v55; // [rsp+78h] [rbp-170h]
  int v56; // [rsp+7Ch] [rbp-16Ch]
  __int64 v57; // [rsp+80h] [rbp-168h] BYREF
  int v58; // [rsp+88h] [rbp-160h]
  char v59[8]; // [rsp+90h] [rbp-158h] BYREF
  void *v60; // [rsp+98h] [rbp-150h]
  int v61; // [rsp+A0h] [rbp-148h] BYREF
  unsigned int v62; // [rsp+A4h] [rbp-144h]
  unsigned int v63; // [rsp+A8h] [rbp-140h]
  _DWORD v64[3]; // [rsp+ACh] [rbp-13Ch] BYREF
  int v65; // [rsp+B8h] [rbp-130h]
  int v66; // [rsp+BCh] [rbp-12Ch]
  int v67; // [rsp+C0h] [rbp-128h]
  unsigned int v68; // [rsp+C4h] [rbp-124h]
  unsigned int v69; // [rsp+C8h] [rbp-120h]
  int v70; // [rsp+CCh] [rbp-11Ch]
  unsigned int v71; // [rsp+D0h] [rbp-118h]
  unsigned int v72; // [rsp+D4h] [rbp-114h]
  void *v73; // [rsp+D8h] [rbp-110h]
  _QWORD v74[6]; // [rsp+E0h] [rbp-108h] BYREF
  void *v75; // [rsp+110h] [rbp-D8h]
  _QWORD v76[6]; // [rsp+118h] [rbp-D0h] BYREF
  DC *v77[6]; // [rsp+148h] [rbp-A0h] BYREF
  _QWORD v78[14]; // [rsp+178h] [rbp-70h] BYREF
  int v80; // [rsp+1F8h] [rbp+10h] BYREF
  void *Src; // [rsp+200h] [rbp+18h]

  Src = a3;
  v80 = a2;
  memset(v64, 0, sizeof(v64));
  v66 = 0;
  v14 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_118;
  v15 = 2;
  if ( a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_118;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_118;
  if ( !a4 )
    goto LABEL_118;
  v16 = a6;
  if ( a6 < 0x28 )
    goto LABEL_118;
  v17 = *a4;
  v67 = v17;
  v70 = v17;
  if ( a6 < (unsigned int)v17 )
    goto LABEL_118;
  if ( (unsigned int)v17 < 0x28 )
    goto LABEL_118;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_118;
  v18 = a4[1];
  if ( v18 <= 0 )
    goto LABEL_118;
  v19 = a4[2];
  if ( !v19 )
    goto LABEL_118;
  v65 = 0x4000000;
  v62 = v18;
  if ( v19 < 0 )
  {
    v19 = -v19;
    v65 = 67108865;
  }
  v63 = v19;
  v20 = *((unsigned __int16 *)a4 + 7);
  v61 = v20;
  v21 = a4[4];
  v69 = v21;
  v71 = v21;
  v68 = a4[8];
  v72 = v68;
  v60 = (char *)a4 + v17;
  if ( v21 )
  {
    if ( v21 == 3 )
    {
      if ( a6 >= 0x34 && !a5 )
      {
        v60 = a4 + 10;
        v25 = a4[10];
        v27 = a4[11];
        v26 = a4[12];
        v23 = 0;
        v24 = 512;
        if ( v20 == 16 )
        {
          v61 = 4;
          goto LABEL_55;
        }
        if ( v20 == 32 )
        {
          v61 = 6;
          goto LABEL_55;
        }
      }
      goto LABEL_118;
    }
    if ( v21 != 10 )
      goto LABEL_118;
    DCOBJ::DCOBJ((DCOBJ *)v77, a1);
    if ( !v77[0] || !(unsigned int)DC::bIsCMYKColor(v77[0]) )
      goto LABEL_117;
    switch ( v61 )
    {
      case 1:
        v61 = 1;
        v23 = 2;
        break;
      case 4:
        v61 = 2;
        v23 = 16;
        break;
      case 8:
        v61 = 3;
        v23 = 256;
        break;
      case 32:
        v61 = 6;
        v23 = 0;
        v24 = 512;
        v15 = 16;
LABEL_52:
        DCOBJ::~DCOBJ((DCOBJ *)v77);
        goto LABEL_53;
      default:
LABEL_117:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v77);
        return 0LL;
    }
    v15 = 1;
    v24 = 1024;
    goto LABEL_52;
  }
  switch ( v20 )
  {
    case 1:
      v61 = 1;
      v23 = 2;
      goto LABEL_30;
    case 4:
      v61 = 2;
      v23 = 16;
      goto LABEL_30;
    case 8:
      v61 = 3;
      v23 = 256;
LABEL_30:
      v15 = 1;
      v24 = 1024;
LABEL_53:
      v25 = 0;
      goto LABEL_54;
  }
  v22 = 0;
  if ( a5 != 1 )
    v22 = a5;
  v14 = v22;
  v23 = 0;
  v24 = 512;
  if ( v20 == 16 )
  {
    v61 = 4;
    v25 = 31744;
    v26 = 31;
    v27 = 992;
    a5 = v14;
    goto LABEL_55;
  }
  if ( v20 == 24 )
  {
    v61 = 5;
    goto LABEL_26;
  }
  if ( v20 != 32 )
  {
LABEL_118:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v61 = 6;
LABEL_26:
  v15 = 8;
  a5 = v22;
  v25 = 0;
LABEL_54:
  v26 = 0;
  v27 = 0;
LABEL_55:
  v58 = 0;
  v57 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v57, v15, v23, 0LL, v25, v27, v26, v24, 1) )
  {
LABEL_56:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v57);
    return 0LL;
  }
  *(_QWORD *)&v64[1] = *(_QWORD *)v57;
  v54 = 0LL;
  v55 = 0;
  v56 = 0;
  v28 = 0LL;
  v73 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v57 + 24) |= 0x8000u;
    v28 = Src;
    v73 = a8;
    if ( !Src )
    {
LABEL_83:
      SURFMEM::~SURFMEM((SURFMEM *)&v54);
      goto LABEL_56;
    }
    Src = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v78, a1);
    if ( v78[0] && (*(_DWORD *)(*(_QWORD *)(v78[0] + 48LL) + 40LL) & 0x8000) != 0 )
      v65 |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v78);
  }
  v53 = a11 & 8;
  v29 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v54,
          (struct _DEVBITMAPINFO *)&v61,
          v28,
          v73,
          a9,
          a10,
          a12,
          0,
          1,
          v53 != 0,
          a13 != 0LL)
    || !*(_WORD *)(v54 + 100) && *(_QWORD *)(v54 + 192) && *(_DWORD *)(v54 + 64) != a7 )
  {
    goto LABEL_83;
  }
  if ( Src )
  {
    v30 = *(_DWORD *)(v54 + 64);
    if ( v30 > a7 )
    {
LABEL_89:
      v41 = 87;
LABEL_90:
      EngSetLastError(v41);
      goto LABEL_83;
    }
    LODWORD(v73) = *(_DWORD *)(v54 + 64);
    v75 = *(void **)(v54 + 72);
    memmove(v75, Src, v30);
    v31 = v67;
  }
  else
  {
    v31 = v67;
  }
  if ( v68 && v68 < v23 )
    v23 = v68;
  if ( !v23 )
  {
LABEL_108:
    v34 = a1;
    goto LABEL_109;
  }
  v32 = v16 - v31;
  if ( !v14 )
  {
    if ( 4 * (unsigned __int64)v23 > 0xFFFFFFFF )
      goto LABEL_89;
    v42 = 4 * v23;
    if ( v32 < (unsigned int)v42 )
      goto LABEL_89;
    v43 = (unsigned int *)AllocFreeTmpBuffer(v42);
    v44 = v43;
    if ( !v43 )
    {
      v41 = 14;
      goto LABEL_90;
    }
    memmove(v43, v60, 4LL * v23);
    if ( v69 - 10 <= 2 )
      XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v57, v44, v45, v23);
    else
      XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v57, (struct tagRGBQUAD *)v44, 0, v23);
    FreeTmpBuffer(v44);
    if ( (a11 & 4) != 0 && v61 == 3 )
    {
      v34 = a1;
      DCOBJ::DCOBJ((DCOBJ *)v76, a1);
      v46 = 0;
      if ( v76[0] )
      {
        v47 = *(_QWORD *)(v76[0] + 48LL);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v59);
        if ( *(_DWORD *)(v47 + 2108) == 3 && (*(_DWORD *)(v47 + 2172) & 0x100) != 0 && (*(_DWORD *)(v47 + 40) & 1) != 0 )
        {
          v46 = 1;
          XEPALOBJ::apalColorSet((XEPALOBJ *)&v57, *(struct PALETTE **)(v47 + 1808));
        }
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v48);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v76);
      if ( !v46 )
        goto LABEL_83;
      goto LABEL_109;
    }
    goto LABEL_108;
  }
  if ( v14 != 1 )
    goto LABEL_108;
  v33 = 2LL * v23;
  if ( v33 > 0xFFFFFFFF || v32 < v33 )
    goto LABEL_89;
  v34 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v74, a1);
  if ( !v74[0] )
  {
LABEL_82:
    DCOBJ::~DCOBJ((DCOBJ *)v74);
    goto LABEL_83;
  }
  v35 = (void *)AllocFreeTmpBuffer(2 * v23);
  v36 = v35;
  if ( !v35 )
  {
    EngSetLastError(0xEu);
    goto LABEL_82;
  }
  memmove(v35, v60, 2LL * v23);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v80);
  v38 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v74) + 16);
  if ( !v38 )
    v38 = *(_QWORD *)(v37 + 1808);
  XEPALOBJ::vGetEntriesFrom(&v57, *(_QWORD *)(v39 + 88), v38, v36, v23);
  FreeTmpBuffer(v36);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v40);
  DCOBJ::~DCOBJ((DCOBJ *)v74);
LABEL_109:
  if ( v29 )
  {
    if ( v53 )
      *v29 = 0LL;
    else
      *v29 = *(_QWORD *)(v54 + 72);
  }
  v55 |= 1u;
  v58 = 1;
  if ( (a11 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v34);
    if ( DCDpiScaleValue > 1 )
    {
      LODWORD(v60) = v62 / DCDpiScaleValue;
      HIDWORD(v60) = v63 / DCDpiScaleValue;
      v50 = v54;
      *(float *)(v54 + 660) = (float)DCDpiScaleValue;
      *(float *)(v50 + 664) = (float)DCDpiScaleValue;
      *(_DWORD *)(v50 + 116) |= 0x800u;
      *(_QWORD *)(v50 + 668) = v60;
    }
  }
  v51 = *(_QWORD *)(v54 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v54);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v57);
  return v51;
}
