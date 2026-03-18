/*
 * XREFs of ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30
 * Callers:
 *     NtGdiCreateDIBitmapInternal @ 0x1C002A210 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C002A420 (NtGdiCreateDIBSection.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002BA80 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0030EF0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00DCBE0 (NtGdiCreateSessionMappedDIBSection.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreCreateDIBitmapReal @ 0x1C02DE52C (GreCreateDIBitmapReal.c)
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00058C8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     GreGetDCDpiScaleValue @ 0x1C0015C58 (GreGetDCDpiScaleValue.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00E0B4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C026F0D8 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1C02AA628 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02D8F10 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02D8FAC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        void *a9,
        char a10,
        unsigned __int64 a11,
        _QWORD *a12)
{
  int v12; // r14d
  __int64 v15; // r8
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // r10d
  unsigned int v19; // r15d
  int v20; // ecx
  unsigned int v21; // r12d
  unsigned int v22; // r13d
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // esi
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // r13
  char v30; // r12
  unsigned int v31; // esi
  __int64 v32; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  struct UMPDOBJ *v36; // rdx
  DC *v37; // r9
  int v38; // ebx
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v40; // rax
  __int64 v41; // rbx
  _QWORD *v42; // r15
  int v43; // r12d
  __int64 v44; // rbx
  unsigned int v45; // eax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rsi
  HDC v48; // r14
  void *v49; // rax
  void *v50; // rbx
  bool v51; // zf
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // r8
  ULONG v55; // ecx
  __int64 v56; // rcx
  unsigned int *v57; // rax
  const unsigned int *v58; // rsi
  unsigned int v59; // r8d
  unsigned int v60; // edx
  Gre::Base *v61; // rcx
  char *v62; // rdx
  char v63; // al
  signed __int32 v64; // ecx
  __int64 v65; // r8
  __int64 v66; // rdx
  char v67; // cl
  int v68; // edi
  __int64 v69; // rbx
  int DCDpiScaleValue; // eax
  __int64 v71; // rcx
  float v72; // xmm0_4
  void *v73; // rax
  __int64 v74; // rbx
  __int64 v75; // [rsp+60h] [rbp-A0h] BYREF
  char v76; // [rsp+68h] [rbp-98h]
  int v77; // [rsp+6Ch] [rbp-94h]
  __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  int v79; // [rsp+78h] [rbp-88h]
  int v80; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v81; // [rsp+84h] [rbp-7Ch]
  unsigned int v82; // [rsp+88h] [rbp-78h]
  _BYTE v83[12]; // [rsp+8Ch] [rbp-74h] BYREF
  int v84; // [rsp+98h] [rbp-68h]
  int v85; // [rsp+9Ch] [rbp-64h]
  DC *v86; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v87; // [rsp+A8h] [rbp-58h]
  _BYTE v88[32]; // [rsp+B0h] [rbp-50h] BYREF
  void *v89; // [rsp+D0h] [rbp-30h]
  int v90; // [rsp+D8h] [rbp-28h]
  unsigned int v91; // [rsp+DCh] [rbp-24h]
  void *Src; // [rsp+E0h] [rbp-20h]
  _QWORD v93[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v94; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v95; // [rsp+100h] [rbp+0h]
  __int64 v96; // [rsp+118h] [rbp+18h]
  DC *v97[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v98[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v99; // [rsp+150h] [rbp+50h]
  __int64 v100; // [rsp+158h] [rbp+58h]
  __int64 v101; // [rsp+160h] [rbp+60h]
  __int16 v102; // [rsp+168h] [rbp+68h]
  unsigned int v104; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 *v105; // [rsp+1C0h] [rbp+C0h]

  v105 = a3;
  v104 = a2;
  v12 = a5;
  memset(v83, 0, sizeof(v83));
  v85 = 0;
  if ( a5 != 1 )
  {
    if ( a5 == 3 )
    {
      if ( (a10 & 1) == 0 )
        goto LABEL_4;
    }
    else if ( a5 )
    {
LABEL_4:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  if ( !a7 && (a10 & 8) != 0 )
    goto LABEL_4;
  if ( !a4 )
    goto LABEL_4;
  if ( a6 < 0x28 )
    goto LABEL_4;
  v15 = *a4;
  v90 = v15;
  if ( a6 < (unsigned int)v15 )
    goto LABEL_4;
  if ( (unsigned int)v15 < 0x28 )
    goto LABEL_4;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_4;
  v16 = a4[1];
  if ( v16 <= 0 )
    goto LABEL_4;
  v17 = a4[2];
  if ( !v17 )
    goto LABEL_4;
  v84 = 0x4000000;
  v81 = v16;
  if ( v17 < 0 )
  {
    v17 = -v17;
    v84 = 67108865;
  }
  v18 = a4[4];
  v19 = 0;
  v20 = *((unsigned __int16 *)a4 + 7);
  v21 = 0;
  v82 = v17;
  v22 = 0;
  v104 = a4[8];
  Src = (char *)a4 + v15;
  v80 = v20;
  v91 = v18;
  if ( v18 )
  {
    if ( v18 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_4;
      v19 = a4[10];
      v21 = a4[11];
      v24 = 0;
      v22 = a4[12];
      v26 = 2;
      Src = a4 + 10;
      v25 = 512;
      if ( v20 == 16 )
      {
        v80 = 4;
      }
      else
      {
        if ( v20 != 32 )
          goto LABEL_4;
        v80 = 6;
      }
      goto LABEL_58;
    }
    if ( v18 != 10 )
      goto LABEL_4;
    DCOBJ::DCOBJ((DCOBJ *)v97, a1);
    if ( !v97[0] || !(unsigned int)DC::bIsCMYKColor(v97[0]) )
    {
      EngSetLastError(0x57u);
      DCOBJ::~DCOBJ((DCOBJ *)v97);
      return 0LL;
    }
    switch ( v80 )
    {
      case 1:
        v80 = 1;
        v24 = 2;
        break;
      case 4:
        v80 = 2;
        v24 = 16;
        break;
      case 8:
        v80 = 3;
        v24 = 256;
        break;
      case 32:
        v24 = 0;
        v80 = 6;
        v26 = 16;
        v25 = 512;
        goto LABEL_55;
      default:
        EngSetLastError(0x57u);
        if ( v97[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v97);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v98);
        return 0LL;
    }
    v26 = 1;
    v25 = 1024;
LABEL_55:
    if ( v27 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v97);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v98);
    goto LABEL_58;
  }
  switch ( v20 )
  {
    case 1:
      v24 = 2;
      v80 = 1;
      v25 = 1024;
      v26 = 1;
      break;
    case 4:
      v25 = 1024;
      v80 = 2;
      v24 = 16;
      v26 = 1;
      break;
    case 8:
      v80 = 3;
      v24 = 256;
      v26 = 1;
      v25 = 1024;
      break;
    default:
      v23 = 0;
      v24 = 0;
      v25 = 512;
      if ( a5 != 1 )
        v23 = a5;
      v12 = v23;
      switch ( v20 )
      {
        case 16:
          v26 = 2;
          v80 = 4;
          v19 = 31744;
          v21 = 992;
          v22 = 31;
          break;
        case 24:
          v80 = 5;
          v26 = 8;
          break;
        case 32:
          v80 = 6;
          v26 = 8;
          break;
        default:
          goto LABEL_4;
      }
      break;
  }
LABEL_58:
  v79 = 0;
  v78 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v78, v26, v24, 0LL, v19, v21, v22, v25, 1) )
  {
LABEL_126:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v78);
    return 0LL;
  }
  v28 = v105;
  v29 = 0LL;
  v30 = a10;
  v93[0] = 0LL;
  v31 = *((_DWORD *)v105 + 2) - *((_DWORD *)v105 + 4);
  *(_QWORD *)&v83[4] = *(_QWORD *)v78;
  v75 = 0LL;
  v76 = 0;
  v77 = 0;
  v94 = 0LL;
  v95 = 0;
  v96 = 0LL;
  v89 = 0LL;
  if ( (a10 & 2) == 0 )
  {
    if ( !a1 )
      goto LABEL_108;
    v86 = 0LL;
    v87 = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v88);
    LOBYTE(v32) = 1;
    v86 = (DC *)HmgLockEx(a1, v32, HIDWORD(v87));
    if ( v86 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && (v34 = *ThreadWin32Thread) != 0 && (v35 = *(_QWORD *)(v34 + 40), v35 != v34 + 40) )
        v36 = (struct UMPDOBJ *)(v35 - 40);
      else
        v36 = 0LL;
      v37 = v86;
      if ( *((_WORD *)v86 + 6) == 1 )
      {
        *((_QWORD *)v86 + 271) = v36;
        *((_DWORD *)v86 + 544) = 0xFFFF;
        v37 = v86;
      }
      else if ( *((struct UMPDOBJ **)v86 + 271) != v36 )
      {
        XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v86, v36);
        v37 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v86 + 3);
        v86 = 0LL;
        goto LABEL_97;
      }
      if ( HIDWORD(v87) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v37 + 6) + 40LL) & 0x8000) == 0 )
        {
LABEL_75:
          _InterlockedDecrement((volatile signed __int32 *)v37 + 3);
          v37 = 0LL;
          v86 = 0LL;
          goto LABEL_97;
        }
        v38 = *((_DWORD *)v37 + 528);
        if ( v38 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          v37 = v86;
          goto LABEL_75;
        }
      }
      else
      {
        if ( !*((_DWORD *)v37 + 528) )
          goto LABEL_84;
        *((_DWORD *)v37 + 528) = 0;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v37 = v86;
LABEL_84:
    if ( !v37 )
    {
LABEL_107:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v88);
      goto LABEL_108;
    }
    if ( (*((_DWORD *)v37 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v87) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v86);
        if ( UserAttr && !DC::SaveAttributes(v86, UserAttr) )
        {
          v37 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)v86 + 3);
          v86 = 0LL;
LABEL_97:
          if ( v37 )
          {
            if ( (_DWORD)v87 && (*((_DWORD *)v37 + 11) & 2) != 0 )
            {
              if ( !HIDWORD(v87) )
              {
                v40 = XDCOBJ::GetUserAttr((XDCOBJ *)&v86);
                if ( v40 )
                  DC::RestoreAttributes(v86, v40);
                v37 = v86;
              }
              *((_DWORD *)v37 + 11) &= ~2u;
              v37 = v86;
              LODWORD(v87) = 0;
            }
            a5 = 0;
            v41 = *(_QWORD *)v37;
            HmgDecrementExclusiveReferenceCountEx(v37, HIDWORD(v87), &a5);
            if ( a5 )
              GrepDeleteDC(v41, 0x2000000LL);
          }
          goto LABEL_107;
        }
        v37 = v86;
      }
      *((_DWORD *)v37 + 11) |= 2u;
      v37 = v86;
      LODWORD(v87) = 1;
    }
    if ( (*((_DWORD *)v37 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v37);
      v37 = v86;
    }
    if ( !v37 )
      goto LABEL_107;
    if ( (*(_DWORD *)(*((_QWORD *)v37 + 6) + 40LL) & 0x8000) != 0 )
      v84 |= 0x40000u;
    goto LABEL_97;
  }
  *(_DWORD *)(v78 + 24) |= 0x8000u;
  v29 = *v28;
  v96 = v28[2];
  v89 = a7;
  if ( !v29 )
  {
LABEL_125:
    SURFMEM::~SURFMEM((SURFMEM *)&v75);
    goto LABEL_126;
  }
  v99 = 0LL;
  v101 = 0LL;
  v102 = 0;
  v28[2] = 0LL;
  v100 = 0LL;
  *v28 = 0LL;
  v28[1] = 0LL;
  *((_WORD *)v28 + 12) = 0;
LABEL_108:
  v42 = a12;
  v43 = v30 & 8;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v75,
          (struct _DEVBITMAPINFO *)&v80,
          (void *)(v29 + v96),
          v89,
          a8,
          a9,
          a11,
          0,
          1,
          v43 != 0,
          a12 != 0LL) )
    goto LABEL_125;
  v44 = v75;
  if ( !*(_WORD *)(v75 + 100) && *(_QWORD *)(v75 + 192) && *(_DWORD *)(v75 + 64) != v31 )
    goto LABEL_125;
  if ( *v105 )
  {
    v45 = *(_DWORD *)(v75 + 64);
    if ( v45 > v31 )
      goto LABEL_163;
    umptr_r<unsigned char>::read<unsigned char>(v105, *(_QWORD *)(v75 + 72), v45, 0LL);
    v44 = v75;
  }
  if ( v104 && v104 < v24 )
  {
    v24 = v104;
  }
  else if ( !v24 )
  {
    goto LABEL_164;
  }
  v46 = a6 - v90;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v47 = 2LL * v24;
      if ( v47 <= 0xFFFFFFFF && v46 >= v47 )
      {
        v48 = a1;
        DCOBJ::DCOBJ((DCOBJ *)v93, a1);
        if ( !v93[0] )
        {
          DCOBJ::~DCOBJ((DCOBJ *)v93);
          goto LABEL_125;
        }
        v49 = (void *)AllocFreeTmpBuffer(2 * v24);
        v50 = v49;
        if ( !v49 )
        {
          EngSetLastError(0xEu);
          v51 = v93[0] == 0LL;
          goto LABEL_129;
        }
        memmove(v49, Src, 2LL * v24);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v104);
        v52 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v93) + 16);
        if ( !v52 )
          v52 = *(_QWORD *)(*(_QWORD *)(v93[0] + 48LL) + 1776LL);
        XEPALOBJ::vGetEntriesFrom(&v78, *(_QWORD *)(v93[0] + 88LL), v52, v50, v24);
        FreeTmpBuffer(v50, v53, v54);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v104);
LABEL_136:
        if ( v93[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v93);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(&v94);
        v44 = v75;
        goto LABEL_165;
      }
      v55 = 87;
LABEL_140:
      EngSetLastError(v55);
      SURFMEM::~SURFMEM((SURFMEM *)&v75);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v78);
      return 0LL;
    }
LABEL_164:
    v48 = a1;
LABEL_165:
    v67 = a10;
    goto LABEL_166;
  }
  if ( 4 * (unsigned __int64)v24 > 0xFFFFFFFF || (v56 = 4 * v24, (unsigned int)v46 < (unsigned int)v56) )
  {
LABEL_163:
    EngSetLastError(0x57u);
    goto LABEL_132;
  }
  v57 = (unsigned int *)AllocFreeTmpBuffer(v56);
  v58 = v57;
  if ( !v57 )
  {
    v55 = 14;
    goto LABEL_140;
  }
  memmove(v57, Src, 4LL * v24);
  if ( v91 - 10 <= 2 )
  {
    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v78, v58, v59, v24);
  }
  else
  {
    v60 = *(_DWORD *)(v78 + 28);
    v61 = *(Gre::Base **)(v78 + 112);
    if ( v24 <= v60 || (v24 = *(_DWORD *)(v78 + 28), v60) )
    {
      v62 = (char *)v58 + 1;
      do
      {
        *((_BYTE *)v61 + 3) = 0;
        v61 = (Gre::Base *)((char *)v61 + 4);
        v63 = *(v62 - 1);
        v62 += 4;
        *((_BYTE *)v61 - 2) = v63;
        *((_BYTE *)v61 - 4) = *(v62 - 3);
        *((_BYTE *)v61 - 3) = *(v62 - 4);
        --v24;
      }
      while ( v24 );
    }
    v64 = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v61) + 962);
    *(_DWORD *)(v78 + 32) = v64;
    v66 = *(_QWORD *)(v78 + 120);
    if ( v66 != v78 )
      *(_DWORD *)(v66 + 32) = v64;
  }
  FreeTmpBuffer(v58, v66, v65);
  v67 = a10;
  if ( (a10 & 4) != 0 && v80 == 3 )
  {
    v48 = a1;
    DCOBJ::DCOBJ((DCOBJ *)v93, a1);
    v68 = 0;
    if ( !v93[0] )
    {
LABEL_131:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(&v94);
LABEL_132:
      SURFMEM::~SURFMEM((SURFMEM *)&v75);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v78);
      return 0LL;
    }
    v69 = *(_QWORD *)(v93[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v104);
    if ( *(_DWORD *)(v69 + 2076) == 3 && (*(_DWORD *)(v69 + 2140) & 0x100) != 0 && (*(_DWORD *)(v69 + 40) & 1) != 0 )
    {
      v68 = 1;
      XEPALOBJ::apalColorSet((XEPALOBJ *)&v78, *(struct PALETTE **)(v69 + 1776));
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v104);
    if ( !v68 )
    {
      v51 = v93[0] == 0LL;
LABEL_129:
      if ( !v51 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v93);
      goto LABEL_131;
    }
    goto LABEL_136;
  }
  v44 = v75;
  v48 = a1;
LABEL_166:
  if ( v42 )
  {
    if ( v43 )
      *v42 = 0LL;
    else
      *v42 = *(_QWORD *)(v44 + 72);
  }
  v76 |= 1u;
  v79 = 1;
  if ( (v67 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v48);
    if ( DCDpiScaleValue > 1 )
    {
      LODWORD(v89) = v81 / DCDpiScaleValue;
      v71 = v75;
      v72 = (float)DCDpiScaleValue;
      HIDWORD(v89) = v82 / DCDpiScaleValue;
      v73 = v89;
      *(_DWORD *)(v75 + 116) |= 0x800u;
      *(_QWORD *)(v71 + 668) = v73;
      *(float *)(v71 + 660) = v72;
      *(float *)(v71 + 664) = v72;
    }
    v44 = v75;
  }
  v74 = *(_QWORD *)(v44 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v75);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v78);
  return v74;
}
