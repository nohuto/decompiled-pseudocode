/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C00AADE8
 * Callers:
 *     _DrawIconEx @ 0x1C0043EF4 (_DrawIconEx.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0045924 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0066A58 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008D720 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00BEDE8 (CreateOrGetRedirectionBitmap.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C010F970 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateDIBitmapComp @ 0x1C0121C84 (GreCreateDIBitmapComp.c)
 *     RecolorDeskPattern @ 0x1C01369E0 (RecolorDeskPattern.c)
 *     CreateCompatiblePublicDC @ 0x1C0159590 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C016040C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C01617C0 (CreateSpb.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E6B48 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C021E580 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C0221450 (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023D930 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E3AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0241FB0 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C029E6B8 (GreEscCreateScaledCompatibleBitmap.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00AB3AC (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00AB8BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00D5A80 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C0169DAC (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C0169E3C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        _QWORD *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rdi
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v12; // rbx
  struct SURFACE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  struct SURFACE *v20; // r14
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r15
  float v24; // xmm7_4
  float v25; // xmm8_4
  float v26; // xmm0_4
  unsigned __int16 ScaledLogPixels; // ax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned int v36; // [rsp+88h] [rbp-80h]
  int v37; // [rsp+90h] [rbp-78h] BYREF
  int v38; // [rsp+94h] [rbp-74h] BYREF
  int v39; // [rsp+98h] [rbp-70h]
  unsigned __int64 v40; // [rsp+A0h] [rbp-68h]
  _QWORD v41[2]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v42[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v43[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v44[32]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int128 v46; // [rsp+108h] [rbp+0h] BYREF
  __int64 v47; // [rsp+118h] [rbp+10h]
  int v48; // [rsp+120h] [rbp+18h]
  _QWORD v49[2]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v50[32]; // [rsp+138h] [rbp+30h] BYREF
  __int16 v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  __int64 v53; // [rsp+168h] [rbp+60h]

  v6 = 0LL;
  v8 = (int)a3;
  v9 = (int)a2;
  v40 = __PAIR64__(a3, a2);
  if ( (a4 & 0x2000000) != 0 && (a4 & 0x1000000) == 0 )
    DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
  v39 = a4 & 0x4000000;
  if ( (int)v9 > 0 && (int)v8 > 0 && (unsigned __int64)(v8 * v9) <= 0x3FFFFFFF )
  {
    if ( !a1 )
      return GreCreateBitmap((unsigned int)v9, (unsigned int)v8, 1LL);
    v41[0] = 0LL;
    v41[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v42);
    XDCOBJ::vLock((XDCOBJ *)v41, a1);
    if ( !v41[0] )
      goto LABEL_55;
    v12 = *(_QWORD *)(v41[0] + 48LL);
    if ( (*(_DWORD *)(v12 + 40) & 0x8000) != 0 )
    {
      v13 = XDCOBJ::pSurfaceEff((XDCOBJ *)v41);
      if ( *(_DWORD *)(v14 + 32) == 1 )
        v15 = *((unsigned int *)v13 + 24);
      else
        v15 = *(unsigned int *)(v12 + 2108);
      CreateCompatibleSurface(v44, v12, v15);
      v18 = v45;
      if ( v45 )
      {
        LOBYTE(v17) = 5;
        HmgSetOwner(*(_QWORD *)(v45 + 32), 2147483650LL, v17);
        v18 = v45;
        v19 = *(_QWORD *)(v45 + 32);
      }
      else
      {
        v19 = 0LL;
      }
      if ( v18 )
        DEC_SHARE_REF_CNT(v18, v16);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v44);
LABEL_54:
      v6 = v19;
LABEL_55:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v41);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v42);
      return v6;
    }
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    v20 = *(struct SURFACE **)(v41[0] + 496LL);
    if ( !v20 )
      v20 = SURFACE::pdibDefault;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v43, (struct XDCOBJ *)v41);
    v49[0] = 0LL;
    v49[1] = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v50);
    v51 = 256;
    v46 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v46);
    v22 = *(_DWORD *)(v12 + 40);
    v48 = 1;
    if ( (v22 & 1) != 0 )
    {
      *(_QWORD *)&v46 = *(_QWORD *)(v12 + 48);
      v47 = v12;
      GreAcquireSemaphore(v46);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v46, 11LL);
    }
    v23 = v41[0];
    if ( *(_DWORD *)(v41[0] + 32LL) == 1 )
    {
      v21 = *((unsigned int *)v20 + 24);
      v36 = *((_DWORD *)v20 + 24);
    }
    else
    {
      v36 = *(_DWORD *)(v12 + 2108);
    }
    v24 = 0.0;
    v25 = 0.0;
    if ( a6 )
    {
      v21 = *a6;
      v26 = 0.0;
      if ( (_WORD)v21 == 96 )
        goto LABEL_36;
      ScaledLogPixels = GreGetScaledLogPixels(v21);
      v23 = v41[0];
      v24 = (float)ScaledLogPixels / 96.0;
      v26 = v24;
      v25 = v24;
    }
    else
    {
      v28 = *(_DWORD *)(v41[0] + 520LL);
      if ( (v28 & 1) == 0 || (v28 & 2) != 0 )
      {
        v26 = 0.0;
        goto LABEL_36;
      }
      v25 = *(float *)(v41[0] + 528LL);
      v24 = *(float *)(v41[0] + 524LL);
      v26 = v25;
    }
    if ( v24 != 0.0 )
    {
LABEL_37:
      v37 = v9;
      v38 = v8;
      bFToL(v21, &v37, 6LL);
      bFToL(v29, &v38, v30);
LABEL_38:
      if ( v39 )
      {
        if ( (*(_DWORD *)(v12 + 40) & 0x4000000) != 0 )
        {
          if ( a5 )
          {
            v31 = *(_QWORD *)(v12 + 1800);
            if ( v31 )
            {
              *(_QWORD *)(v31 + 104) = *a5;
              v23 = v41[0];
            }
          }
        }
      }
      CreateCompatibleSurface(v44, *(_QWORD *)(v23 + 48), v36);
      v34 = v45;
      if ( v45 )
      {
        if ( v24 != 0.0 || v25 != 0.0 )
        {
          v35 = v40;
          *(_DWORD *)(v45 + 116) |= 0x800u;
          *(_QWORD *)(v34 + 668) = v35;
          *(float *)(v34 + 660) = v24;
          *(float *)(v34 + 664) = v25;
          v34 = v45;
        }
        LOBYTE(v33) = 5;
        HmgSetOwner(*(_QWORD *)(v34 + 32), 2147483650LL, v33);
        v34 = v45;
        v19 = *(_QWORD *)(v45 + 32);
      }
      else
      {
        v19 = 0LL;
      }
      if ( v34 )
        DEC_SHARE_REF_CNT(v34, v32);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v44);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v46);
      if ( v49[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v49);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v50);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v43);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      goto LABEL_54;
    }
LABEL_36:
    if ( v26 == 0.0 )
      goto LABEL_38;
    goto LABEL_37;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
