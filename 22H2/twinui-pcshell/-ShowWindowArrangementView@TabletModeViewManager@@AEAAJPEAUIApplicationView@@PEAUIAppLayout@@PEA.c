/*
 * XREFs of ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x180472150
 * Callers:
 *     ?BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPOINT@@PEAUITabletModeInputSource@@@Z @ 0x180470ED0 (-BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPO.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x180471AC0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?ShowPlaceMode@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1804720F0 (-ShowPlaceMode@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18047270C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18021877C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18021B244 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ @ 0x180470DD0 (--1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x18047155C (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x180472564 (-StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VI.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x180472FA4 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180480DE0 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x180483EE4 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabletModeViewManager::ShowWindowArrangementView(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  int AppLayoutForDropFeedback; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  char v15; // r14
  __int64 *v16; // rax
  IUnknown *v17; // rdx
  IUnknown *v18; // rcx
  int Instance; // eax
  __int64 v20; // rdx
  const struct _GUID *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  WINBOOL v26; // edx
  __int64 v27; // rcx
  IUnknown *punk; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  IUnknown *v33; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT Point; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 *v36; // [rsp+68h] [rbp-98h]
  IUnknown **p_punk; // [rsp+70h] [rbp-90h]
  char v38; // [rsp+78h] [rbp-88h]
  _QWORD v39[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v32 = a4;
  v35 = a6;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v39,
    (__int64)"WindowArrangementView_Show");
  v39[0] = &TabletModeTelemetry::WindowArrangementView_Show::`vftable';
  TabletModeTelemetry::WindowArrangementView_Show::StartActivity(v39, a7, a8);
  v31 = 0LL;
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v31, a3);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback((__int64)a1, a2, a7, &v31);
    v13 = AppLayoutForDropFeedback;
    if ( AppLayoutForDropFeedback < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FD,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)AppLayoutForDropFeedback);
      goto LABEL_40;
    }
  }
  if ( a5 )
    Point = *a5;
  else
    GetPhysicalCursorPos(&Point);
  v14 = a1[16];
  if ( v14 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, 0LL);
  punk = 0LL;
  v36 = a1;
  p_punk = &punk;
  v15 = 1;
  v38 = 1;
  v16 = a1 + 17;
  v17 = (IUnknown *)a1[17];
  if ( v17 )
  {
    v18 = 0LL;
    if ( &v33 != (IUnknown **)v16 )
    {
      *v16 = 0LL;
      v18 = v17;
    }
    v33 = punk;
    punk = v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
LABEL_14:
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    Instance = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))punk->lpVtbl->QueryInterface)(
                 punk,
                 &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
                 &v30);
    v13 = Instance;
    if ( Instance >= 0 )
    {
      if ( a9 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a9 + 24LL))(a9, v30);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v20 = 563LL;
          goto LABEL_28;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 19);
        Instance = TabletModeInputHandler_CreateInstance(a8, v30, v24, a1 + 19);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v20 = 568LL;
          goto LABEL_28;
        }
      }
      Instance = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagPOINT *, __int64))punk->lpVtbl[1].AddRef)(
                   punk,
                   v32,
                   &Point,
                   v35);
      v13 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(a1 + 16, (__int64 *)&punk);
        v25 = a1[20];
        if ( v25 != a9 )
        {
          if ( a9 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a9 + 8LL))(a9);
            v25 = a1[20];
          }
          v32 = v25;
          a1[20] = a9;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
        }
        TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)a1);
        v15 = 0;
        v38 = 0;
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v39,
          v26);
        v13 = 0;
        goto LABEL_34;
      }
      v20 = 571LL;
    }
    else
    {
      v20 = 558LL;
    }
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)Instance);
LABEL_34:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    goto LABEL_35;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v22 = WindowArrangementView_CreateInstance(v21, (void **)&punk);
  v13 = v22;
  if ( v22 >= 0 )
  {
    IUnknown_SetSite(punk, (IUnknown *)a1);
    v22 = ((__int64 (__fastcall *)(IUnknown *, __int64, __int64, _QWORD, unsigned int))punk->lpVtbl[1].QueryInterface)(
            punk,
            a2,
            v31,
            a7,
            a8);
    v13 = v22;
    if ( v22 >= 0 )
      goto LABEL_14;
    v23 = 553LL;
  }
  else
  {
    v23 = 551LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v22);
LABEL_35:
  if ( v15 )
  {
    v38 = 0;
    v27 = a1[19];
    if ( v27 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 56LL))(v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 19);
    }
    IUnknown_SetSite(punk, 0LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
LABEL_40:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  TabletModeTelemetry::WindowArrangementView_Show::~WindowArrangementView_Show((TabletModeTelemetry::WindowArrangementView_Show *)v39);
  return v13;
}
