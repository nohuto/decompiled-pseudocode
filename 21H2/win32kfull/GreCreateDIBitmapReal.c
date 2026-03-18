/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C002BC78
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0023D00 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0025910 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiCreateDIBSection @ 0x1C0029440 (NtGdiCreateDIBSection.c)
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00F2040 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00FC2B0 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C0121FE0 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012E518 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C014E4E8 (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B4A00 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C008A518 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     GreGetDCDpiScaleValue @ 0x1C00C3E00 (GreGetDCDpiScaleValue.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00E3768 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C027414C (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BBF08 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BBFC8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        __int64 a2,
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
  __int64 v16; // r8
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // r11d
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // esi
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  void *v27; // rsi
  _QWORD *v28; // r12
  unsigned int v29; // eax
  unsigned int v30; // edx
  int v31; // ecx
  unsigned int v32; // edx
  unsigned __int64 v33; // rsi
  void *v34; // rax
  void *v35; // r15
  __int64 v36; // r8
  HDC v37; // r15
  ULONG v38; // ecx
  __int64 v39; // rcx
  unsigned int *v40; // rax
  unsigned int *v41; // rsi
  unsigned int v42; // r8d
  int v43; // esi
  __int64 v44; // rbx
  int DCDpiScaleValue; // eax
  __int64 v46; // rcx
  __int64 v47; // rbx
  int v49; // [rsp+60h] [rbp-108h]
  void *v50; // [rsp+68h] [rbp-100h]
  __int64 v51; // [rsp+70h] [rbp-F8h] BYREF
  char v52; // [rsp+78h] [rbp-F0h]
  int v53; // [rsp+7Ch] [rbp-ECh]
  __int64 v54; // [rsp+80h] [rbp-E8h] BYREF
  int v55; // [rsp+88h] [rbp-E0h]
  void *v56; // [rsp+90h] [rbp-D8h]
  int v57; // [rsp+98h] [rbp-D0h] BYREF
  unsigned int v58; // [rsp+9Ch] [rbp-CCh]
  unsigned int v59; // [rsp+A0h] [rbp-C8h]
  _DWORD v60[3]; // [rsp+A4h] [rbp-C4h] BYREF
  int v61; // [rsp+B0h] [rbp-B8h]
  int v62; // [rsp+B4h] [rbp-B4h]
  int v63; // [rsp+B8h] [rbp-B0h]
  unsigned int v64; // [rsp+BCh] [rbp-ACh]
  unsigned int v65; // [rsp+C0h] [rbp-A8h]
  int v66; // [rsp+C4h] [rbp-A4h]
  unsigned int v67; // [rsp+C8h] [rbp-A0h]
  unsigned int v68; // [rsp+CCh] [rbp-9Ch]
  DC *v69[6]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v70[13]; // [rsp+100h] [rbp-68h] BYREF

  memset(v60, 0, sizeof(v60));
  v62 = 0;
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
  if ( a6 < 0x28 )
    goto LABEL_118;
  v16 = *a4;
  v63 = v16;
  v66 = v16;
  if ( a6 < (unsigned int)v16 )
    goto LABEL_118;
  if ( (unsigned int)v16 < 0x28 )
    goto LABEL_118;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_118;
  v17 = a4[1];
  if ( v17 <= 0 )
    goto LABEL_118;
  v18 = a4[2];
  if ( !v18 )
    goto LABEL_118;
  v61 = 0x4000000;
  v58 = v17;
  if ( v18 < 0 )
  {
    v18 = -v18;
    v61 = 67108865;
  }
  v59 = v18;
  v19 = *((unsigned __int16 *)a4 + 7);
  v57 = v19;
  v20 = a4[4];
  v65 = v20;
  v67 = v20;
  v64 = a4[8];
  v68 = v64;
  v56 = (char *)a4 + v16;
  if ( v20 )
  {
    if ( v20 == 3 )
    {
      if ( a6 >= 0x34 && !a5 )
      {
        v56 = a4 + 10;
        v24 = a4[10];
        v26 = a4[11];
        v25 = a4[12];
        v22 = 0;
        v23 = 512;
        if ( (_WORD)v19 == 16 )
        {
          v57 = 4;
          goto LABEL_55;
        }
        if ( v19 == 32 )
        {
          v57 = 6;
          goto LABEL_55;
        }
      }
      goto LABEL_118;
    }
    if ( v20 != 10 )
      goto LABEL_118;
    DCOBJ::DCOBJ((DCOBJ *)v69, a1);
    if ( !v69[0] || !(unsigned int)DC::bIsCMYKColor(v69[0]) )
      goto LABEL_117;
    switch ( v57 )
    {
      case 1:
        v57 = 1;
        v22 = 2;
        break;
      case 4:
        v57 = 2;
        v22 = 16;
        break;
      case 8:
        v57 = 3;
        v22 = 256;
        break;
      case 32:
        v57 = 6;
        v22 = 0;
        v15 = 16;
        v23 = 512;
LABEL_52:
        DCOBJ::~DCOBJ((DCOBJ *)v69);
        goto LABEL_53;
      default:
LABEL_117:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v69);
        return 0LL;
    }
    v15 = 1;
    v23 = 1024;
    goto LABEL_52;
  }
  switch ( v19 )
  {
    case 1:
      v57 = 1;
      v22 = 2;
      goto LABEL_30;
    case 4:
      v57 = 2;
      v22 = 16;
      goto LABEL_30;
    case 8:
      v57 = 3;
      v22 = 256;
LABEL_30:
      v15 = 1;
      v23 = 1024;
LABEL_53:
      v24 = 0;
      goto LABEL_54;
  }
  v21 = 0;
  if ( a5 != 1 )
    v21 = a5;
  v14 = v21;
  v22 = 0;
  v23 = 512;
  if ( (_WORD)v19 == 16 )
  {
    v57 = 4;
    v24 = 31744;
    v25 = 31;
    v26 = 992;
    a5 = v14;
    goto LABEL_55;
  }
  if ( (_WORD)v19 == 24 )
  {
    v57 = 5;
    goto LABEL_26;
  }
  if ( v19 != 32 )
  {
LABEL_118:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v57 = 6;
LABEL_26:
  v15 = 8;
  a5 = v21;
  v24 = 0;
LABEL_54:
  v25 = 0;
  v26 = 0;
LABEL_55:
  v55 = 0;
  v54 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v54, v15, v22, 0LL, v24, v26, v25, v23, 1) )
  {
LABEL_56:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v54);
    return 0LL;
  }
  *(_QWORD *)&v60[1] = *(_QWORD *)v54;
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  v27 = 0LL;
  v50 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v54 + 24) |= 0x8000u;
    v27 = a3;
    v50 = a8;
    if ( !a3 )
    {
LABEL_83:
      SURFMEM::~SURFMEM((SURFMEM *)&v51);
      goto LABEL_56;
    }
    a3 = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v70, a1);
    if ( v70[0] && (*(_DWORD *)(*(_QWORD *)(v70[0] + 48LL) + 40LL) & 0x8000) != 0 )
      v61 |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v70);
  }
  v49 = a11 & 8;
  v28 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v51,
          (struct _DEVBITMAPINFO *)&v57,
          v27,
          v50,
          a9,
          a10,
          a12,
          0,
          1,
          v49 != 0,
          a13 != 0LL)
    || !*(_WORD *)(v51 + 100) && *(_QWORD *)(v51 + 192) && *(_DWORD *)(v51 + 64) != a7 )
  {
    goto LABEL_83;
  }
  if ( a3 )
  {
    v29 = *(_DWORD *)(v51 + 64);
    if ( v29 > a7 )
      goto LABEL_93;
    memmove(*(void **)(v51 + 72), a3, v29);
    v30 = a6;
    v31 = v63;
  }
  else
  {
    v30 = a6;
    v31 = v63;
  }
  if ( v64 && v64 < v22 )
    v22 = v64;
  if ( !v22 )
    goto LABEL_89;
  v32 = v30 - v31;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v33 = 2LL * v22;
      if ( v33 <= 0xFFFFFFFF && v32 >= v33 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v69, a1);
        if ( !v69[0] )
        {
LABEL_82:
          DCOBJ::~DCOBJ((DCOBJ *)v69);
          goto LABEL_83;
        }
        v34 = (void *)AllocFreeTmpBuffer(2 * v22);
        v35 = v34;
        if ( !v34 )
        {
          EngSetLastError(0xEu);
          goto LABEL_82;
        }
        memmove(v34, v56, 2LL * v22);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a5);
        v36 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v69) + 16);
        if ( !v36 )
          v36 = *(_QWORD *)(*((_QWORD *)v69[0] + 6) + 1776LL);
        XEPALOBJ::vGetEntriesFrom(&v54, *((_QWORD *)v69[0] + 11), v36, v35, v22);
        FreeTmpBuffer(v35);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a5);
        DCOBJ::~DCOBJ((DCOBJ *)v69);
        goto LABEL_89;
      }
      goto LABEL_93;
    }
LABEL_89:
    v37 = a1;
    goto LABEL_90;
  }
  if ( 4 * (unsigned __int64)v22 > 0xFFFFFFFF || (v39 = 4 * v22, v32 < (unsigned int)v39) )
  {
LABEL_93:
    v38 = 87;
LABEL_94:
    EngSetLastError(v38);
    goto LABEL_83;
  }
  v40 = (unsigned int *)AllocFreeTmpBuffer(v39);
  v41 = v40;
  if ( !v40 )
  {
    v38 = 14;
    goto LABEL_94;
  }
  memmove(v40, v56, 4LL * v22);
  if ( v65 - 10 <= 2 )
    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v54, v41, v42, v22);
  else
    XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v54, (struct tagRGBQUAD *)v41, 0, v22);
  FreeTmpBuffer(v41);
  if ( (a11 & 4) == 0 || v57 != 3 )
    goto LABEL_89;
  v37 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v69, a1);
  v43 = 0;
  if ( v69[0] )
  {
    v44 = *((_QWORD *)v69[0] + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a5);
    if ( *(_DWORD *)(v44 + 2076) == 3 && (*(_DWORD *)(v44 + 2140) & 0x100) != 0 && (*(_DWORD *)(v44 + 40) & 1) != 0 )
    {
      v43 = 1;
      XEPALOBJ::apalColorSet((XEPALOBJ *)&v54, *(struct PALETTE **)(v44 + 1776));
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a5);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v69);
  if ( !v43 )
    goto LABEL_83;
LABEL_90:
  if ( v28 )
  {
    if ( v49 )
      *v28 = 0LL;
    else
      *v28 = *(_QWORD *)(v51 + 72);
  }
  v52 |= 1u;
  v55 = 1;
  if ( (a11 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v37);
    if ( DCDpiScaleValue > 1 )
    {
      LODWORD(v56) = v58 / DCDpiScaleValue;
      HIDWORD(v56) = v59 / DCDpiScaleValue;
      v46 = v51;
      *(float *)(v51 + 660) = (float)DCDpiScaleValue;
      *(float *)(v46 + 664) = (float)DCDpiScaleValue;
      *(_DWORD *)(v46 + 116) |= 0x800u;
      *(_QWORD *)(v46 + 668) = v56;
    }
  }
  v47 = *(_QWORD *)(v51 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v51);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v54);
  return v47;
}
