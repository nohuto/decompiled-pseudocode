/*
 * XREFs of ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180031850
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x180004EFC (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180005378 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180005498 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180005AF4 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x180006568 (-OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800071C0 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180008144 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800090E0 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180009768 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18000FC60 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800156D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800183C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x18002A8A4 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800302A0 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x1800305FC (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180031788 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800328E0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180032BB0 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x180032C48 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x180036100 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18003E3CC (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180045864 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180047578 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800875B4 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18008CCF0 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x180096430 (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x180097B80 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x180097C0C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1800983AC (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x1800985D8 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x180098A10 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180098AE4 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180098BE0 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18009919C (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x180099818 (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800998C0 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800999FC (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180099D28 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180099FD0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18009A460 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x18009E61C (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E71C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800BAA40 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800BAAB0 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800BF870 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CWindowList::ProcessSyncDwmMessage(
        CWindowList *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned int a6,
        struct _REMOTE_PORT_VIEW *a7,
        int *a8,
        unsigned int *a9)
{
  __int64 v10; // r9
  int updated; // ebx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  int v18; // ebx
  unsigned int v19; // r12d
  struct CWindowData *v20; // r13
  struct IDwmWindow *v21; // rax
  struct CWindowData *v22; // rsi
  CWindowData *v23; // rax
  CWindowData *v24; // rax
  struct IDwmWindow *v25; // rbx
  int v26; // eax
  __int64 v27; // rbx
  int v28; // eax
  int v29; // eax
  LONG v30; // r12d
  LONG v31; // r14d
  volatile signed __int32 *v32; // rsi
  float *v33; // rdx
  int v34; // r13d
  __int64 v35; // r14
  struct CVisual *v36; // rax
  volatile signed __int32 *v37; // rcx
  CBaseObject *v38; // r14
  __int64 v39; // rcx
  struct CVisual *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // r12d
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  int *v50; // rsi
  unsigned int v51; // r8d
  CAnimationClockCoordinator *v52; // rcx
  unsigned int v53; // r8d
  CAnimationClockCoordinator *v54; // rcx
  CAnimationClockCoordinator *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rcx
  unsigned int v58; // r8d
  CAnimationClockCoordinator *v59; // rcx
  struct _GUID v60; // xmm0
  CAnimationClockCoordinator *v61; // rcx
  int v62; // eax
  struct IDwmWindow *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  HWND v78; // rsi
  HWND v79; // rbx
  HWND v80; // rbx
  HWND v81; // rbx
  void *v82; // rcx
  bool v83; // zf
  unsigned __int8 v84; // [rsp+48h] [rbp-B8h]
  unsigned int v85; // [rsp+4Ch] [rbp-B4h] BYREF
  struct tagPOINT v86; // [rsp+50h] [rbp-B0h] BYREF
  int v87; // [rsp+58h] [rbp-A8h]
  float v88; // [rsp+60h] [rbp-A0h] BYREF
  float v89; // [rsp+64h] [rbp-9Ch]
  struct IDwmWindow *v90; // [rsp+68h] [rbp-98h] BYREF
  struct CVisual *v91; // [rsp+70h] [rbp-90h] BYREF
  struct _RTL_CRITICAL_SECTION *v92; // [rsp+78h] [rbp-88h] BYREF
  __int64 v93; // [rsp+80h] [rbp-80h] BYREF
  void *v94; // [rsp+88h] [rbp-78h] BYREF
  __int64 v95; // [rsp+90h] [rbp-70h] BYREF
  __int64 v96; // [rsp+98h] [rbp-68h] BYREF
  __int64 v97; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v101; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v102; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v103; // [rsp+E0h] [rbp-20h] BYREF
  struct _GUID v104; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v105; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v106; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v107; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v108[64]; // [rsp+130h] [rbp+30h] BYREF

  v10 = 0LL;
  *a9 = 0;
  updated = -2147024872;
  switch ( a2 )
  {
    case 0x40000018u:
      if ( a4 != 52 )
        goto LABEL_210;
      v15 = *(_QWORD *)(a3 + 4);
      if ( v15 && !(unsigned int)DwmValidateWindow(v15, a6) )
        goto LABEL_9;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v17 = *(_QWORD *)(a3 + 4);
      v18 = 0;
      v19 = -2;
      v20 = 0LL;
      v85 = -2;
      if ( !v17 )
        goto LABEL_65;
      v21 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 7)
                                                                   + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 7));
      v90 = v21;
      if ( !v21 )
        goto LABEL_65;
      v22 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( v22 )
        goto LABEL_19;
      v23 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             768LL);
      if ( !v23 || (v24 = CWindowData::CWindowData(v23), (v22 = v24) == 0LL) )
      {
        v18 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x88Bu);
LABEL_21:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x86Eu);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x16E4u);
LABEL_66:
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        *a9 = 52;
        updated = 0;
        result = 2147500033LL;
        goto LABEL_211;
      }
      v25 = v90;
      *((_QWORD *)v24 + 3) = v90;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v25)(v25, v24);
      *((_QWORD *)v22 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v25 + 24LL))(v25);
      v26 = CWindowList::SyncWindowData(a1, v25, v22);
      v18 = v26;
      if ( v26 >= 0 )
LABEL_19:
        v20 = v22;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x88Fu);
      if ( v18 < 0 )
        goto LABEL_21;
      if ( !v20 )
        goto LABEL_65;
      v27 = *((_QWORD *)v20 + 48);
      if ( !v27 )
        goto LABEL_65;
      if ( (*(_BYTE *)(a3 + 24) & 1) != 0 || (v28 = *(_DWORD *)(a3 + 12), v28 == 513) || (v84 = 0, v28 == 161) )
        v84 = 1;
      v29 = *(_DWORD *)(a3 + 40);
      v86 = *(struct tagPOINT *)(a3 + 16);
      v30 = v86.y - *(_DWORD *)(v27 + 116);
      v31 = v86.x - *(_DWORD *)(v27 + 112);
      v87 = v29;
      v83 = (*(_BYTE *)(v27 + 84) & 2) == 0;
      v32 = 0LL;
      v91 = 0LL;
      v86.x = v31;
      v86.y = v30;
      if ( v83 )
        goto LABEL_31;
      CVisual::GetCurrentTransform((CVisual *)v27, (struct D2DMatrix *)v108);
      if ( D2DMatrixInverse((struct D2DMatrix *)v108, v33, (const struct D2DMatrix *)v108) )
      {
        v88 = (float)v31;
        v89 = (float)v30;
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v88,
          (const struct D2DVector2 *)&v88,
          (const struct D2DMatrix *)v108);
        v86.y = (int)v89;
        v86.x = (int)v88;
LABEL_31:
        CTopLevelWindow::DoHitTest((CTopLevelWindow *)v27, &v86, &v91, &v85);
        v32 = (volatile signed __int32 *)v91;
        v19 = v85;
      }
      else
      {
        v19 = 0;
        v85 = 0;
      }
      v34 = 4;
      v35 = 4LL;
      if ( v87 == 8 )
      {
        v35 = 1LL;
      }
      else if ( v87 == 9 )
      {
        v35 = 2LL;
      }
      else
      {
        if ( v87 != 20 )
        {
          if ( v87 == 21 )
          {
            v34 = 0;
            v35 = 0LL;
          }
          goto LABEL_42;
        }
        v35 = 3LL;
      }
      v34 = v35;
LABEL_42:
      v36 = *(struct CVisual **)(v27 + 744);
      if ( v36 )
      {
        CButton::SetMouseCapture(*(CButton **)(v27 + 744), 0);
        v36 = *(struct CVisual **)(v27 + 744);
        if ( v36 )
        {
          CBaseObject::Release(*(CBaseObject **)(v27 + 744));
          v36 = 0LL;
          *(_QWORD *)(v27 + 744) = 0LL;
        }
      }
      if ( v34 != 4 )
      {
        v37 = *(volatile signed __int32 **)(v27 + 8 * v35 + 488);
        if ( v37 )
        {
          *(_QWORD *)(v27 + 744) = v37;
          _InterlockedIncrement(v37 + 2);
          CButton::SetMouseCapture((CButton *)v37, 1);
          v36 = *(struct CVisual **)(v27 + 744);
          v32 = (volatile signed __int32 *)v91;
          v19 = v85;
        }
      }
      if ( v36 )
      {
        v40 = 0LL;
        if ( v87 == v19 )
          v40 = v36;
        CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)v27, v40);
      }
      else
      {
        v38 = *(CBaseObject **)(v27 + 736);
        if ( v32 == (volatile signed __int32 *)v27 )
          v32 = 0LL;
        v91 = (struct CVisual *)v32;
        if ( v32 != (volatile signed __int32 *)v38 )
        {
          *(_QWORD *)(v27 + 736) = v32;
          if ( v32 )
          {
            _InterlockedIncrement(v32 + 2);
            v19 = v85;
          }
          if ( v38 )
            (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v38 + 120LL))(v38);
          v39 = *(_QWORD *)(v27 + 736);
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 112LL))(v39);
          if ( v38 )
            CBaseObject::Release(v38);
        }
      }
      v41 = *(_QWORD *)(v27 + 736);
      if ( v41 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v41 + 128LL))(v41, v84);
LABEL_65:
      *(_DWORD *)(a3 + 44) = v19;
      *(_DWORD *)(a3 + 48) = v19 != -2;
      goto LABEL_66;
    case 0x40000019u:
      if ( a4 != 156 )
        goto LABEL_210;
      CWindowList::GetTitleBarInfo(a1, (struct MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *)a3);
      *a9 = 156;
      updated = 0;
      result = 2147500033LL;
      goto LABEL_211;
    case 0x4000001Eu:
      if ( a4 != 36 )
        goto LABEL_210;
      v42 = *(_QWORD *)(a3 + 12);
      if ( v42 && !(unsigned int)DwmValidateWindow(v42, a6) )
      {
        updated = -2147024891;
        result = 2147500033LL;
        goto LABEL_211;
      }
      updated = CWindowList::RegisterThumbnail(a1, a6, (struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *)a3);
      goto LABEL_206;
    case 0x4000001Fu:
      if ( a4 != 57 )
        goto LABEL_210;
      updated = CWindowList::UpdateThumbnailProperties(
                  a1,
                  a6,
                  (struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *)a3);
      goto LABEL_206;
    case 0x40000020u:
      if ( a4 != 12 )
        goto LABEL_210;
      updated = CWindowList::UnregisterThumbnail(a1, a6, (const struct MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL *)a3);
      goto LABEL_206;
    case 0x40000022u:
      if ( a4 != 20 )
        goto LABEL_210;
      updated = CWindowList::QueryThumbnailSourceSize(
                  a1,
                  a6,
                  (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *)a3);
      *a9 = 20;
      goto LABEL_206;
    case 0x40000023u:
      if ( a4 != 24 )
        goto LABEL_210;
      v43 = *(_QWORD *)(a3 + 4);
      if ( !v43 || (unsigned int)DwmValidateWindow(v43, a6) )
      {
        updated = CWindowList::QueryWindowThumbnailSourceSize(
                    a1,
                    (struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *)a3);
        *a9 = 24;
      }
      else
      {
        updated = -2147024891;
        *a9 = 24;
      }
      goto LABEL_206;
    case 0x40000028u:
      if ( a4 != 36 )
        goto LABEL_210;
      updated = CWindowList::SetColorizationParameters(
                  a1,
                  (const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *)a3);
      goto LABEL_206;
    case 0x40000029u:
      if ( a4 != 36 )
        goto LABEL_210;
      CWindowList::GetColorizationParameters(a1, (struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *)a3);
      *a9 = 36;
      updated = 0;
      result = 2147500033LL;
      goto LABEL_211;
    case 0x4000002Au:
      if ( !a5 )
        goto LABEL_210;
      if ( a4 <= 0x18 )
        goto LABEL_210;
      v44 = *(_DWORD *)(a3 + 20) + 24;
      if ( *(_DWORD *)(a3 + 20) >= 0xFFFFFFE8 || a4 < v44 || !*(_DWORD *)(a3 + 4) )
        goto LABEL_210;
      updated = CWindowList::GetWindowAttribute(a1, (struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
      *a9 = v44;
      goto LABEL_206;
    case 0x40000033u:
      if ( a4 != 20 )
        goto LABEL_210;
      updated = CWindowList::GetGlobalState(a1, (struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *)a3);
      *a9 = 20;
      goto LABEL_206;
    case 0x40000038u:
      if ( !CDesktopManager::IsLivePreviewAllowed() )
      {
        updated = -2147024846;
        result = 2147500033LL;
        goto LABEL_211;
      }
      if ( a4 != 48 )
        goto LABEL_10;
      updated = CWindowList::PostActivateLivePreview(a1, (const struct MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW *)a3);
      goto LABEL_206;
    case 0x40000039u:
      if ( a4 != 24 )
        goto LABEL_210;
      v46 = *(_QWORD *)(a3 + 4);
      if ( v46 && !(unsigned int)DwmValidateWindow(v46, a6) )
      {
        updated = -2147024891;
        result = 2147500033LL;
        goto LABEL_211;
      }
      updated = CWindowList::SetIconicThumbnail(
                  a1,
                  a6,
                  (const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *)a3,
                  a7);
      goto LABEL_206;
    case 0x4000003Bu:
      if ( a4 != 16 )
        goto LABEL_210;
      updated = CWindowList::QueryThumbnailType(a1, a6, (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *)a3);
      *a9 = 16;
      goto LABEL_206;
    case 0x4000003Cu:
      if ( !CDesktopManager::IsLivePreviewAllowed() )
      {
        updated = -2147024846;
        result = 2147500033LL;
        goto LABEL_211;
      }
      if ( a4 != 32 )
        goto LABEL_10;
      v47 = *(_QWORD *)(a3 + 4);
      if ( v47 && !(unsigned int)DwmValidateWindow(v47, a6) )
      {
        updated = -2147024891;
        result = 2147500033LL;
        goto LABEL_211;
      }
      updated = CWindowList::SetIconicLivePreviewBitmap(
                  a1,
                  a6,
                  (const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *)a3,
                  a7);
      goto LABEL_206;
    case 0x4000003Du:
      if ( a4 != 12 )
        goto LABEL_210;
      v48 = *(_QWORD *)(a3 + 4);
      if ( v48 && !(unsigned int)DwmValidateWindow(v48, a6) )
      {
        updated = -2147024891;
        result = 2147500033LL;
        goto LABEL_211;
      }
      updated = CWindowList::InvalidateIconicBitmaps(
                  a1,
                  a6,
                  (const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *)a3);
      goto LABEL_206;
    case 0x40000040u:
      if ( a4 != 32 )
        goto LABEL_210;
      updated = CContactManager::OnGesture(
                  *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
                  (const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *)a3);
      goto LABEL_206;
    case 0x40000041u:
      if ( a4 != 16 )
        goto LABEL_210;
      updated = CContactManager::OnFlick(
                  *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
                  (const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *)a3);
      goto LABEL_206;
    case 0x40000047u:
      if ( a4 != 48 )
        goto LABEL_210;
      updated = CWindowList::StartTransition(a1, (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)a3);
      *a9 = 48;
      goto LABEL_206;
    case 0x4000004Eu:
      if ( a4 != 8 )
        goto LABEL_210;
      updated = CWindowList::HandleHardwareExpressionActivation(a1, *(_DWORD *)(a3 + 4));
      goto LABEL_206;
    case 0x40000051u:
      if ( a4 != 52 )
        goto LABEL_210;
      updated = CWindowList::UpdateSharedVirtualDesktopVisual(
                  a1,
                  a6,
                  (const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *)a3,
                  a7);
      goto LABEL_206;
    case 0x40000054u:
      if ( a4 != 16 )
        goto LABEL_210;
      v45 = *(_QWORD *)(a3 + 4);
      if ( v45 && !(unsigned int)DwmValidateWindow(v45, a6) )
      {
        updated = -2147024891;
        result = 2147500033LL;
        goto LABEL_211;
      }
      updated = CWindowList::SetIconicBitmapBackgroundColor(
                  a1,
                  (const struct MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR *)a3);
      goto LABEL_206;
    case 0x40000058u:
      if ( a4 != 24 )
        goto LABEL_210;
      v51 = *(_DWORD *)(a3 + 20);
      v52 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      v102 = *(struct _GUID *)(a3 + 4);
      updated = CAnimationClockCoordinator::OnCreateAnimationClock(v52, &v102, v51);
      goto LABEL_206;
    case 0x40000059u:
      if ( a4 != 24 )
        goto LABEL_210;
      v53 = *(_DWORD *)(a3 + 20);
      v54 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      v103 = *(struct _GUID *)(a3 + 4);
      updated = CAnimationClockCoordinator::OnBeginAnimationClock(v54, &v103, v53);
      goto LABEL_206;
    case 0x4000005Au:
      if ( a4 != 20 )
        goto LABEL_210;
      v55 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      v104 = *(struct _GUID *)(a3 + 4);
      updated = CAnimationClockCoordinator::OnEndAnimationClock(v55, &v104);
      goto LABEL_206;
    case 0x4000005Bu:
      if ( a4 != 32 )
        goto LABEL_210;
      v56 = *(unsigned int *)(a3 + 20);
      v57 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      v105 = *(_OWORD *)(a3 + 4);
      updated = CAnimationClockCoordinator::OnGetAnimationClockTime(v57, &v105, v56, a3 + 24);
      *a9 = 32;
      goto LABEL_206;
    case 0x4000005Cu:
      if ( a4 != 32 )
        goto LABEL_210;
      v58 = *(_DWORD *)(a3 + 20);
      if ( *(_QWORD *)(a3 + 24) )
        v10 = a3 + 24;
      v59 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      v106 = *(struct _GUID *)(a3 + 4);
      updated = CAnimationClockCoordinator::OnSetAnimationClockTime(v59, &v106, v58, v10);
      goto LABEL_206;
    case 0x4000005Du:
      if ( a4 != 28 )
        goto LABEL_210;
      v60 = *(struct _GUID *)(a3 + 4);
      v90 = 0LL;
      v61 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      v107 = v60;
      updated = CAnimationClockCoordinator::OnGetAnimationClockToken(v61, &v107, (void **)&v90);
      if ( updated < 0 )
        goto LABEL_205;
      v62 = NtDCompositionDuplicateHandleToProcess(v90, a6, &v93);
      updated = v62 | 0x10000000;
      if ( v62 >= 0 )
        *(_QWORD *)(a3 + 20) = v93;
      v63 = v90;
LABEL_204:
      CloseHandle(v63);
LABEL_205:
      *a9 = 28;
      goto LABEL_206;
    case 0x4000005Eu:
      if ( a4 != 28 )
        goto LABEL_210;
      updated = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                  *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 25),
                  (const struct _GUID *)(a3 + 4),
                  a6,
                  &v94);
      *(_QWORD *)(a3 + 20) = v94;
      goto LABEL_205;
    case 0x40000064u:
      if ( a4 != 76 )
      {
        updated = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003303421, 0x400u);
        result = 2147500033LL;
        goto LABEL_216;
      }
      v92 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                     *(_QWORD *)(a3 + 56));
      v50 = a8;
      updated = CMagnifierControl::OnMagnifierSyncApiMessage(MagnifierControlForDesktop, a2, a3, a5);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v92);
      goto LABEL_207;
    case 0x4000006Fu:
      if ( a4 != 64 )
        goto LABEL_210;
      updated = CWindowList::TransitionBitmap(a1, (const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *)a3, a7);
      goto LABEL_206;
    case 0x40000072u:
      if ( a4 != 28 )
        goto LABEL_210;
      updated = CWindowList::UpdateAccentBlurRect(a1, (const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *)a3);
      goto LABEL_206;
    case 0x40000073u:
      if ( a4 != 20 )
        goto LABEL_210;
      updated = CDesktopManager::UpdateSDRToHDRBoost(
                  CDesktopManager::s_pDesktopManagerInstance,
                  *(HMONITOR *)(a3 + 4),
                  *(double *)(a3 + 12));
      *a9 = 20;
      goto LABEL_206;
    case 0x40000075u:
      if ( a4 != 16 )
        goto LABEL_210;
      v80 = *(HWND *)(a3 + 4);
      *(_DWORD *)(a3 + 12) = 0;
      if ( !v80 || (unsigned int)DwmValidateWindow(v80, a6) )
      {
        updated = CWindowList::GetUnmetTabRequirements(a1, v80, (enum DWM_TAB_WINDOW_REQUIREMENTS *)(a3 + 12));
        *a9 = 16;
      }
      else
      {
        updated = -2147024891;
        *a9 = 16;
      }
      goto LABEL_206;
    case 0x40000076u:
      if ( !a5 || a4 != 28 )
        goto LABEL_210;
      v81 = *(HWND *)(a3 + 4);
      if ( !v81 || (unsigned int)DwmValidateWindow(*(_QWORD *)(a3 + 4), a6) )
        updated = CWindowList::AddProjectedShadowCaster(a1, v81, *(void **)(a3 + 12), *(void **)(a3 + 20));
      else
        updated = -2147024891;
      v82 = *(void **)(a3 + 12);
      if ( v82 )
        CloseHandle(v82);
      v63 = *(struct IDwmWindow **)(a3 + 20);
      if ( v63 )
        goto LABEL_204;
      goto LABEL_205;
    case 0x40000078u:
      result = 2147500033LL;
      if ( a4 != 36 )
        goto LABEL_211;
      *a9 = 36;
LABEL_215:
      updated = -2147467263;
      goto LABEL_216;
    case 0x40000079u:
      if ( !a5 || a4 != 28 )
        goto LABEL_210;
      if ( a6 != *(_DWORD *)(a3 + 24) )
        goto LABEL_209;
      v69 = *(_QWORD *)(a3 + 12);
      v70 = *(_QWORD *)(a3 + 4);
      v71 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
      v97 = *(_QWORD *)(a3 + 20);
      updated = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v71 + 8LL))(
                  v71,
                  v70,
                  v69,
                  &v97);
      goto LABEL_206;
    case 0x4000007Au:
      if ( !a5 || a4 != 28 )
        goto LABEL_210;
      if ( a6 != *(_DWORD *)(a3 + 24) )
        goto LABEL_209;
      v66 = *(_QWORD *)(a3 + 12);
      v67 = *(_QWORD *)(a3 + 4);
      v68 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
      v96 = *(_QWORD *)(a3 + 20);
      updated = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v68 + 32LL))(
                  v68,
                  v67,
                  v66,
                  &v96);
      goto LABEL_206;
    case 0x4000007Bu:
      if ( a4 != 20 )
        goto LABEL_210;
      if ( a6 != *(_DWORD *)(a3 + 16) )
        goto LABEL_209;
      v64 = *(_QWORD *)(a3 + 4);
      v65 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
      v95 = *(_QWORD *)(a3 + 12);
      updated = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v65 + 16LL))(v65, v64, &v95);
      goto LABEL_206;
    case 0x4000007Cu:
      if ( a4 != 12 )
        goto LABEL_210;
      if ( a6 != *(_DWORD *)(a3 + 8) )
        goto LABEL_209;
      v72 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
      v98 = *(_QWORD *)(a3 + 4);
      updated = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 24LL))(v72, &v98);
      goto LABEL_206;
    case 0x4000007Du:
      if ( a4 != 12 )
        goto LABEL_210;
      if ( a6 != *(_DWORD *)(a3 + 8) )
        goto LABEL_209;
      v73 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
      v99 = *(_QWORD *)(a3 + 4);
      updated = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v73 + 40LL))(v73, &v99);
      goto LABEL_206;
    case 0x4000007Eu:
      if ( !a5 || a4 != 28 )
        goto LABEL_210;
      if ( a6 != *(_DWORD *)(a3 + 24) )
        goto LABEL_209;
      v74 = *(_QWORD *)(a3 + 12);
      v75 = *(_QWORD *)(a3 + 4);
      v76 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
      v100 = *(_QWORD *)(a3 + 20);
      updated = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v76 + 96LL))(
                  v76,
                  v75,
                  v74,
                  &v100);
      goto LABEL_206;
    case 0x4000007Fu:
      if ( a4 != 12 )
        goto LABEL_210;
      if ( a6 == *(_DWORD *)(a3 + 8) )
      {
        v77 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65);
        v101 = *(_QWORD *)(a3 + 4);
        updated = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v77 + 104LL))(v77, &v101);
        goto LABEL_206;
      }
LABEL_209:
      updated = -2147024891;
LABEL_210:
      result = 2147500033LL;
      goto LABEL_211;
    case 0x40000080u:
      if ( a4 != 20 )
        goto LABEL_210;
      v78 = *(HWND *)(a3 + 4);
      v79 = *(HWND *)(a3 + 12);
      if ( !(unsigned int)DwmValidateWindow(v78, a6) || v79 && !(unsigned int)DwmValidateWindow(v79, a6) )
      {
LABEL_9:
        updated = -2147024891;
LABEL_10:
        result = 2147500033LL;
LABEL_211:
        v50 = a8;
        goto LABEL_212;
      }
      updated = CWindowList::OnProxyWindowUpdate(a1, v78, v79);
LABEL_206:
      v50 = a8;
LABEL_207:
      result = 2147500033LL;
      v83 = updated == -2147467263;
      if ( updated != -2147467263 )
      {
LABEL_212:
        if ( v50 )
          *v50 = updated;
LABEL_216:
        v83 = updated == -2147467263;
      }
      if ( !v83 )
        return 0LL;
      return result;
    default:
      result = 2147500033LL;
      goto LABEL_215;
  }
}
