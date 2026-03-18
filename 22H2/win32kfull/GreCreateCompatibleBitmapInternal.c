/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C0057310
 * Callers:
 *     CreateSpb @ 0x1C000DD04 (CreateSpb.c)
 *     _DrawIconEx @ 0x1C0028030 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002BA80 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C009D490 (NtGdiCreateCompatibleBitmap.c)
 *     RecolorDeskPattern @ 0x1C00BDFC0 (RecolorDeskPattern.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00D564C (CreateOrGetRedirectionBitmap.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0103ED0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C01159A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01FBEB8 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01FF298 (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C0220810 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02243DC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022537C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxSnapWindow @ 0x1C02281E8 (xxxSnapWindow.c)
 *     CreateCompatiblePublicDC @ 0x1C023F4DC (CreateCompatiblePublicDC.c)
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C02A7D30 (GreEscCreateScaledCompatibleBitmap.c)
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DDE1C (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0057ED0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00AB110 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00E0B4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00FA6B8 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EAC8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // r13
  __int64 v8; // r15
  __int64 v10; // rdi
  int v11; // esi
  BOOL v12; // r12d
  int v13; // r14d
  __int64 v15; // rdx
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v17; // rcx
  __int64 v18; // rax
  struct UMPDOBJ *v19; // rax
  DC *v20; // rdx
  int v21; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v23; // rbx
  struct SURFACE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdi
  struct Gre::Base::SESSION_GLOBALS *v31; // rdi
  struct SURFACE *v32; // rdi
  Gre::Base *v33; // rcx
  int v34; // eax
  __int64 v35; // r12
  DC *v36; // rsi
  __int64 *v37; // rax
  unsigned int v38; // edi
  float v39; // xmm6_4
  float v40; // xmm8_4
  unsigned __int16 ScaledLogPixels; // ax
  int v42; // eax
  float v43; // xmm0_4
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rbx
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  HSURF v56; // rbx
  Gre::Base *v57; // rcx
  struct Gre::Base::SESSION_GLOBALS *v58; // rbx
  char v59; // si
  __int64 v60; // rax
  __int64 v61; // rax
  Gre::Base *v62; // rcx
  struct Gre::Base::SESSION_GLOBALS *v63; // rbx
  DC *v64; // rcx
  struct _DC_ATTR *v65; // rax
  __int64 v66; // rbx
  int v67; // [rsp+20h] [rbp-E0h]
  DC *v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+88h] [rbp-78h]
  _BYTE v70[32]; // [rsp+90h] [rbp-70h] BYREF
  int v71; // [rsp+B0h] [rbp-50h] BYREF
  int v72; // [rsp+B4h] [rbp-4Ch] BYREF
  int v73; // [rsp+B8h] [rbp-48h]
  BOOL v74; // [rsp+BCh] [rbp-44h]
  __int128 v75; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-30h]
  unsigned int v77; // [rsp+D8h] [rbp-28h]
  int v78; // [rsp+DCh] [rbp-24h]
  DC *v79[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v80[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+120h] [rbp+20h]
  HDC v84; // [rsp+128h] [rbp+28h]
  float v85; // [rsp+130h] [rbp+30h]
  float v86; // [rsp+134h] [rbp+34h]
  unsigned __int64 v87; // [rsp+138h] [rbp+38h]
  float v88; // [rsp+144h] [rbp+44h]
  char v89[8]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v90[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v91; // [rsp+170h] [rbp+70h]
  DC *v92[2]; // [rsp+178h] [rbp+78h] BYREF
  char v93[32]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v94[32]; // [rsp+1A8h] [rbp+A8h] BYREF
  HSURF *v95; // [rsp+1C8h] [rbp+C8h]
  _BYTE v96[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct SURFACE *v97; // [rsp+1F0h] [rbp+F0h]
  char v98; // [rsp+278h] [rbp+178h] BYREF
  int v99; // [rsp+280h] [rbp+180h] BYREF
  BOOL v100; // [rsp+288h] [rbp+188h]

  v6 = (int)a2;
  v8 = (int)a3;
  v99 = 0;
  v87 = __PAIR64__(a3, a2);
  v10 = 0LL;
  v11 = 0;
  v100 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v11 = 1;
      v99 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v73 = a4 & 0x4000000;
  v12 = (a4 & 0x4000000) != 0;
  v13 = (a4 >> 27) & 1;
  v74 = v12;
  if ( (int)v6 <= 0 || (int)v8 <= 0 || (unsigned __int64)(v8 * v6) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( !a1 )
    return GreCreateBitmap((unsigned int)v6, (unsigned int)v8, 1LL, 1LL, 0LL);
  v69 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v70);
  LOBYTE(v15) = 1;
  v68 = (DC *)HmgLockEx(a1, v15, 0LL);
  if ( v68 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread
      && (v18 = *ThreadWin32Thread) != 0
      && (v17 = *(Gre::Base **)(v18 + 40), v17 != (Gre::Base *)(v18 + 40)) )
    {
      v19 = (Gre::Base *)((char *)v17 - 40);
    }
    else
    {
      v19 = 0LL;
    }
    v20 = v68;
    if ( *((_WORD *)v68 + 6) == 1 )
    {
      *((_QWORD *)v68 + 271) = v19;
      *((_DWORD *)v68 + 544) = 0xFFFF;
      v20 = v68;
    }
    else if ( *((struct UMPDOBJ **)v68 + 271) != v19 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v68, v19);
      goto LABEL_26;
    }
    if ( HIDWORD(v69) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_22:
        _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
        v68 = 0LL;
LABEL_23:
        DCOBJ::~DCOBJ((DCOBJ *)&v68);
        return 0LL;
      }
      v21 = *((_DWORD *)v20 + 528);
      if ( v21 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v20 = v68;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*((_DWORD *)v20 + 528) )
        goto LABEL_33;
      *((_DWORD *)v20 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v20 = v68;
LABEL_33:
  if ( !v20 )
    goto LABEL_23;
  if ( (*((_DWORD *)v20 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v69) )
    {
LABEL_39:
      *((_DWORD *)v20 + 11) |= 2u;
      v20 = v68;
      LODWORD(v69) = 1;
      goto LABEL_40;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v68);
    if ( !UserAttr || DC::SaveAttributes(v68, UserAttr) )
    {
      v20 = v68;
      goto LABEL_39;
    }
LABEL_26:
    _InterlockedDecrement((volatile signed __int32 *)v68 + 3);
    v68 = 0LL;
    DCOBJ::~DCOBJ((DCOBJ *)&v68);
    return 0LL;
  }
LABEL_40:
  if ( (*((_DWORD *)v20 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v20);
    v20 = v68;
  }
  if ( !v20 )
    goto LABEL_23;
  v23 = *((_QWORD *)v20 + 6);
  if ( (*(_DWORD *)(v23 + 40) & 0x8000) == 0 )
  {
    v31 = Gre::Base::Globals(v17);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v31 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v31 + 10));
    v32 = (struct SURFACE *)*((_QWORD *)v68 + 62);
    if ( !v32 )
      v32 = SURFACE::pdibDefault;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v89, (struct XDCOBJ *)&v68);
    v79[0] = 0LL;
    v79[1] = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v80);
    v34 = *(_DWORD *)(v23 + 40);
    v75 = 0LL;
    v81 = 256;
    v83 = 0LL;
    v82 = 0LL;
    v79[0] = 0LL;
    v77 = 1;
    if ( (v34 & 1) != 0 )
    {
      Gre::Base::Globals(v33);
      *(_QWORD *)&v75 = *(_QWORD *)(v23 + 48);
      v76 = v23;
      GreAcquireSemaphore(v75);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v75, 11LL);
    }
    v35 = 0LL;
    v36 = v68;
    if ( *((_DWORD *)v68 + 8) == 1 )
    {
      v37 = (__int64 *)*((_QWORD *)v32 + 16);
      v33 = (Gre::Base *)*((unsigned int *)v32 + 24);
      v38 = *((_DWORD *)v32 + 24);
      if ( !v37 )
        goto LABEL_66;
    }
    else
    {
      v38 = *(_DWORD *)(v23 + 2076);
      if ( (*(_DWORD *)(v23 + 2140) & 0x100) != 0 )
        goto LABEL_66;
      v37 = *(__int64 **)(v23 + 1776);
    }
    v35 = *v37;
LABEL_66:
    v39 = 0.0;
    v40 = 0.0;
    if ( a6 )
    {
      v33 = (Gre::Base *)*a6;
      if ( (_WORD)v33 == 96 )
        goto LABEL_73;
      ScaledLogPixels = GreGetScaledLogPixels(v33);
      v36 = v68;
      v39 = (float)ScaledLogPixels / 96.0;
      v40 = v39;
    }
    else
    {
      v42 = *((_DWORD *)v68 + 130);
      if ( (v42 & 1) == 0 || (v42 & 2) != 0 )
        goto LABEL_73;
      v39 = *((float *)v68 + 131);
      v43 = *((float *)v68 + 132);
      v85 = v39;
      v86 = v43;
      v88 = v43;
      v40 = v43;
    }
    if ( v39 != 0.0 )
    {
LABEL_74:
      v71 = v6;
      v72 = v8;
      bFToL(v33, &v71, 6LL);
      bFToL(v44, &v72, v45);
      LODWORD(v6) = v71;
      LODWORD(v8) = v72;
LABEL_75:
      if ( v73 )
      {
        if ( (*(_DWORD *)(v23 + 40) & 0x4000000) != 0 )
        {
          if ( a5 )
          {
            v46 = *(_QWORD *)(v23 + 1768);
            if ( v46 )
            {
              *(_QWORD *)(v46 + 104) = *a5;
              v36 = v68;
            }
          }
        }
      }
      CreateCompatibleSurface(v90, *((_QWORD *)v36 + 6), v38, v35, v6, v8, v100, v99, v74, 0, 0, 0, v13, 0, 0, 0LL);
      v48 = v91;
      if ( v91 )
      {
        if ( v39 != 0.0 || v40 != 0.0 )
        {
          v49 = v87;
          *(_DWORD *)(v91 + 116) |= 0x800u;
          *(_QWORD *)(v48 + 668) = v49;
          *(float *)(v48 + 660) = v39;
          *(float *)(v48 + 664) = v40;
          v48 = v91;
        }
        LOBYTE(v47) = 5;
        HmgSetOwner(*(_QWORD *)(v48 + 32), 2147483650LL, v47);
        v48 = v91;
        v30 = *(_QWORD *)(v91 + 32);
      }
      else
      {
        v30 = 0LL;
      }
      if ( v48 )
        DEC_SHARE_REF_CNT(v48);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v90);
      if ( v79[0] && HIBYTE(v81) )
      {
        v50 = *((_QWORD *)v79[0] + 6);
        if ( (v77 & 0x1000) != 0 )
        {
          DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v75);
          if ( (v77 & 0x10) != 0 )
          {
            *((_DWORD *)v79[0] + 9) &= ~0x4000u;
            DC::pSurface(v79[0], *(struct SURFACE **)(v50 + 2528));
          }
          DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v75);
        }
        DLODCOBJ::vUnlock((DLODCOBJ *)v79);
        v79[0] = 0LL;
      }
      v51 = v77;
      if ( (v77 & 0x1000) != 0 )
      {
        GreDecLockCount();
        v77 &= ~0x1000u;
        v52 = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( v52 )
        {
          *(_QWORD *)(v52 + 320) = 0LL;
          *(_QWORD *)(v52 + 312) = 0LL;
        }
        v51 = v77;
      }
      else if ( (v77 & 0x800000) != 0 )
      {
        GreDecLockCount();
        v51 = v77 & 0xFF7FFFFF;
        v77 &= ~0x800000u;
      }
      if ( (_QWORD)v75 )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
        GreReleaseSemaphoreInternal(v75);
        v51 = v77;
      }
      if ( (v51 & 8) != 0 )
        v77 = v51 & 0xFFFFFFF7;
      if ( *((_QWORD *)&v75 + 1) )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
        GreReleaseSemaphoreInternal(*((_QWORD *)&v75 + 1));
      }
      if ( v83 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v92, v84);
        SURFREF::SURFREF((SURFREF *)v94);
        SURFREF::SURFREF((SURFREF *)v96);
        LOBYTE(v53) = 5;
        v54 = HmgShareLock(v82, v53);
        LOBYTE(v55) = 5;
        v95 = (HSURF *)v54;
        v97 = (struct SURFACE *)HmgShareLock(v83, v55);
        v56 = *v95;
        DC::pSurface(v92[0], v97);
        DEC_SHARE_REF_CNT(v95);
        v95 = 0LL;
        DEC_SHARE_REF_CNT(v97);
        v97 = 0LL;
        GreDereferenceObject(v56, 1u);
        v57 = v92[0];
        v84 = 0LL;
        v82 = 0LL;
        *((_DWORD *)v92[0] + 9) |= v78;
        v58 = Gre::Base::Globals(v57);
        if ( (*((_DWORD *)v92[0] + 9) & 0x200) != 0 )
        {
          v59 = 0;
          if ( !(unsigned int)GreGetLockCount()
            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v58 + 15)) )
          {
            GreAcquireSemaphoreSharedInternal(*((_QWORD *)v58 + 15));
            EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v58 + 15));
            v59 = 1;
          }
          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v98);
          LOBYTE(v67) = 5;
          v60 = HmgShareUnlockRemoveObject(v83, 0LL, 0LL, 0LL, v67);
          if ( v60 )
            SURFACE::bDeleteSurface(v60, 0LL, 1LL);
          *((_QWORD *)v92[0] + 63) = 0LL;
          DC::vClearRendering(v92[0]);
          v83 = 0LL;
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v98);
          if ( v59 )
          {
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
            GreReleaseSemaphoreInternal(*((_QWORD *)v58 + 15));
          }
        }
        else
        {
          LOBYTE(v67) = 5;
          v61 = HmgShareUnlockRemoveObject(v83, 0LL, 0LL, 0LL, v67);
          if ( v61 )
            SURFACE::bDeleteSurface(v61, 0LL, 1LL);
          *((_QWORD *)v92[0] + 63) = 0LL;
          v83 = 0LL;
        }
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
        GreReleaseSemaphoreInternal(*((_QWORD *)v58 + 10));
        if ( v97 )
          DEC_SHARE_REF_CNT(v97);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v96);
        if ( v95 )
          DEC_SHARE_REF_CNT(v95);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v94);
        if ( v92[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v92);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v93);
      }
      if ( v79[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v79);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v80);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v89);
      v63 = Gre::Base::Globals(v62);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
      GreReleaseSemaphoreInternal(*((_QWORD *)v63 + 10));
      goto LABEL_129;
    }
LABEL_73:
    if ( v40 == 0.0 )
      goto LABEL_75;
    goto LABEL_74;
  }
  v24 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v68);
  if ( *(_DWORD *)(v25 + 32) == 1 )
  {
    v26 = *((unsigned int *)v24 + 24);
    v27 = (__int64 *)*((_QWORD *)v24 + 16);
    if ( v27 )
      goto LABEL_49;
  }
  else
  {
    v26 = *(unsigned int *)(v23 + 2076);
    if ( (*(_DWORD *)(v23 + 2140) & 0x100) == 0 )
    {
      v27 = *(__int64 **)(v23 + 1776);
LABEL_49:
      v10 = *v27;
    }
  }
  CreateCompatibleSurface(v90, v23, v26, v10, v6, v8, v100, v11, v12, 0, 0, 0, v13, 0, 0, 0LL);
  v29 = v91;
  if ( v91 )
  {
    LOBYTE(v28) = 5;
    HmgSetOwner(*(_QWORD *)(v91 + 32), 2147483650LL, v28);
    v29 = v91;
    v30 = *(_QWORD *)(v91 + 32);
  }
  else
  {
    v30 = 0LL;
  }
  if ( v29 )
    DEC_SHARE_REF_CNT(v29);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v90);
LABEL_129:
  v64 = v68;
  if ( v68 )
  {
    if ( (_DWORD)v69 && (*((_DWORD *)v68 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v69) )
      {
        v65 = XDCOBJ::GetUserAttr((XDCOBJ *)&v68);
        v64 = v68;
        if ( v65 )
        {
          DC::RestoreAttributes(v68, v65);
          v64 = v68;
        }
      }
      *((_DWORD *)v64 + 11) &= ~2u;
      v64 = v68;
      LODWORD(v69) = 0;
    }
    v99 = 0;
    v66 = *(_QWORD *)v64;
    HmgDecrementExclusiveReferenceCountEx(v64, HIDWORD(v69), &v99);
    if ( v99 )
      GrepDeleteDC(v66, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v70);
  return v30;
}
