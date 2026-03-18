/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C0090C1C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C001F528 (CreateOrGetRedirectionBitmap.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0025910 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00414F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C00BA240 (CreateCompatiblePublicDC.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00BF48C (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C00FC280 (NtGdiCreateCompatibleBitmap.c)
 *     RecolorDeskPattern @ 0x1C0121FE0 (RecolorDeskPattern.c)
 *     GreCreateDIBitmapComp @ 0x1C014A20C (GreCreateDIBitmapComp.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C02194F8 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C021BB40 (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C0239218 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023D3F4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C023E0B4 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C029D5EC (GreEscCreateScaledCompatibleBitmap.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BB4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bIsZero@EPOINTFL@@QEBAHXZ @ 0x1C00911B8 (-bIsZero@EPOINTFL@@QEBAHXZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00911E4 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00DBA70 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v9; // r13
  __int64 v11; // r14
  int v12; // r15d
  BOOL v13; // eax
  int v14; // esi
  __int64 v16; // rbx
  struct SURFACE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rbx
  struct SURFACE *v24; // r15
  int v25; // eax
  __int64 v26; // r14
  __int64 *v27; // rax
  bool v28; // zf
  __int64 v29; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  int v31; // eax
  int v32; // xmm3_4
  __int64 v33; // rcx
  int IsZero; // r15d
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rcx
  __int64 v40; // xmm0_8
  unsigned __int64 v41; // rax
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+90h] [rbp-70h] BYREF
  int v45; // [rsp+94h] [rbp-6Ch] BYREF
  int v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-58h]
  _QWORD v49[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v50[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v51[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v52[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v53; // [rsp+108h] [rbp+8h]
  __int128 v54; // [rsp+110h] [rbp+10h] BYREF
  __int64 v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  _QWORD v57[2]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v58[32]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  __int64 v61; // [rsp+170h] [rbp+70h]
  BOOL v62; // [rsp+1C8h] [rbp+C8h]
  int v63; // [rsp+1D0h] [rbp+D0h]
  BOOL v64; // [rsp+1D8h] [rbp+D8h]

  v6 = 0LL;
  v7 = (int)a3;
  v9 = (int)a2;
  v63 = 0;
  v48 = __PAIR64__(a3, a2);
  v11 = 0LL;
  v12 = 0;
  v64 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v12 = 1;
      v63 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v46 = a4 & 0x4000000;
  v13 = (a4 & 0x4000000) != 0;
  v14 = (a4 >> 27) & 1;
  v62 = v13;
  if ( (int)v9 > 0 && (int)v7 > 0 && (unsigned __int64)(v7 * v9) <= 0x3FFFFFFF )
  {
    if ( !a1 )
      return GreCreateBitmap((unsigned int)v9, (unsigned int)v7, 1LL, 1LL, 0LL);
    v49[0] = 0LL;
    v49[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v50);
    XDCOBJ::vLock((XDCOBJ *)v49, a1);
    if ( !v49[0] )
      goto LABEL_57;
    v16 = *(_QWORD *)(v49[0] + 48LL);
    if ( (*(_DWORD *)(v16 + 40) & 0x8000) == 0 )
    {
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v24 = *(struct SURFACE **)(v49[0] + 496LL);
      if ( !v24 )
        v24 = SURFACE::pdibDefault;
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v51, (struct XDCOBJ *)v49);
      v57[0] = 0LL;
      v57[1] = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v58);
      v59 = 256;
      v54 = 0LL;
      v61 = 0LL;
      v60 = 0LL;
      DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v54);
      v25 = *(_DWORD *)(v16 + 40);
      v56 = 1;
      if ( (v25 & 1) != 0 )
      {
        *(_QWORD *)&v54 = *(_QWORD *)(v16 + 48);
        v55 = v16;
        GreAcquireSemaphore(v54);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v54, 11LL);
      }
      v26 = v49[0];
      v47 = 0LL;
      if ( *(_DWORD *)(v49[0] + 32LL) == 1 )
      {
        v27 = (__int64 *)*((_QWORD *)v24 + 16);
        v43 = *((_DWORD *)v24 + 24);
        if ( v27 )
          v47 = *v27;
      }
      else
      {
        v28 = (*(_DWORD *)(v16 + 2140) & 0x100) == 0;
        v43 = *(_DWORD *)(v16 + 2076);
        if ( v28 )
          v47 = **(_QWORD **)(v16 + 1776);
      }
      v42 = 0LL;
      if ( a6 )
      {
        v29 = *a6;
        if ( (_WORD)v29 != 96 )
        {
          ScaledLogPixels = GreGetScaledLogPixels(v29);
          v26 = v49[0];
          *((float *)&v42 + 1) = (float)ScaledLogPixels / 96.0;
          *(float *)&v42 = *((float *)&v42 + 1);
        }
      }
      else
      {
        v31 = *(_DWORD *)(v49[0] + 520LL);
        if ( (v31 & 1) != 0 && (v31 & 2) == 0 )
        {
          v32 = *(_DWORD *)(v49[0] + 528LL);
          LODWORD(v42) = *(_DWORD *)(v49[0] + 524LL);
          HIDWORD(v42) = v32;
        }
      }
      IsZero = EPOINTFL::bIsZero((EPOINTFL *)&v42);
      if ( !IsZero )
      {
        v44 = v9;
        v45 = v7;
        bFToL(v33, &v44, 6LL);
        bFToL(v35, &v45, v36);
        LODWORD(v9) = v44;
        LODWORD(v7) = v45;
      }
      if ( v46 )
      {
        if ( (*(_DWORD *)(v16 + 40) & 0x4000000) != 0 )
        {
          if ( a5 )
          {
            v37 = *(_QWORD *)(v16 + 1768);
            if ( v37 )
            {
              *(_QWORD *)(v37 + 104) = *a5;
              v26 = v49[0];
            }
          }
        }
      }
      CreateCompatibleSurface(v52, *(_QWORD *)(v26 + 48), v43, v47, v9, v7, v64, v63, v62, 0, 0, 0, v14, 0, 0, 0LL);
      v39 = (_QWORD *)v53;
      if ( v53 )
      {
        if ( !IsZero )
        {
          v40 = v42;
          v41 = v48;
          *(_DWORD *)(v53 + 116) |= 0x800u;
          *(_QWORD *)((char *)v39 + 660) = v40;
          *(_QWORD *)((char *)v39 + 668) = v41;
          v39 = (_QWORD *)v53;
        }
        LOBYTE(v38) = 5;
        HmgSetOwner(v39[4], 2147483650LL, v38);
        v39 = (_QWORD *)v53;
        v23 = *(_QWORD *)(v53 + 32);
      }
      else
      {
        v23 = 0LL;
      }
      if ( v39 )
        DEC_SHARE_REF_CNT(v39);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v52);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v54);
      if ( v57[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v57);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v58);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v51);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      goto LABEL_56;
    }
    v17 = XDCOBJ::pSurfaceEff((XDCOBJ *)v49);
    if ( *(_DWORD *)(v18 + 32) == 1 )
    {
      v19 = *((unsigned int *)v17 + 24);
      v20 = (__int64 *)*((_QWORD *)v17 + 16);
      if ( v20 )
        goto LABEL_17;
    }
    else
    {
      v19 = *(unsigned int *)(v16 + 2076);
      if ( (*(_DWORD *)(v16 + 2140) & 0x100) == 0 )
      {
        v20 = *(__int64 **)(v16 + 1776);
LABEL_17:
        v11 = *v20;
      }
    }
    CreateCompatibleSurface(v52, v16, v19, v11, v9, v7, v64, v12, v62, 0, 0, 0, v14, 0, 0, 0LL);
    v22 = v53;
    if ( v53 )
    {
      LOBYTE(v21) = 5;
      HmgSetOwner(*(_QWORD *)(v53 + 32), 2147483650LL, v21);
      v22 = v53;
      v23 = *(_QWORD *)(v53 + 32);
    }
    else
    {
      v23 = 0LL;
    }
    if ( v22 )
      DEC_SHARE_REF_CNT(v22);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v52);
LABEL_56:
    v6 = v23;
LABEL_57:
    MDCOBJ::~MDCOBJ((MDCOBJ *)v49);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v50);
    return v6;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
