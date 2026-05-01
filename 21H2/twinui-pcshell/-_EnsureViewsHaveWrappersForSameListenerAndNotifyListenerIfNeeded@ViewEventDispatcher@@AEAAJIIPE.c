/*
 * XREFs of ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18031B308
 * Callers:
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x180317F08 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1803182FC (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@W4ViewGrouping@345@PEAUIAsyncCallback@@@Z @ 0x180318630 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x18031B01C (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18031D0C8 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct IViewWrapperInternal **a4,
        struct IViewWrapperInternal **a5,
        struct IUnknown **a6)
{
  unsigned int v10; // edi
  struct IUnknown *v11; // rsi
  int HasWrapperAndListener; // eax
  int v13; // eax
  struct IViewWrapperInternal *v14; // r15
  struct IUnknown *v15; // rsi
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IViewWrapperInternal *v17; // r14
  struct IUnknown *v18; // rbx
  struct IUnknownVtbl *v19; // rcx
  struct IViewWrapperInternal *v21; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v22; // [rsp+38h] [rbp-28h] BYREF
  struct IViewWrapperInternal *v23; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v24[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IUnknownVtbl *v26; // [rsp+A0h] [rbp+40h] BYREF
  int v27; // [rsp+B8h] [rbp+58h] BYREF

  v10 = 0;
  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  LOBYTE(v26) = 0;
  v21 = 0LL;
  v24[0] = 0LL;
  LOBYTE(v27) = 0;
  v11 = (struct IUnknown *)(a1 + 280);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 280));
  v24[1] = v11;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  HasWrapperAndListener = ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
                            (ViewManagerBridge **)a1,
                            a2,
                            &v23,
                            &v22,
                            (char *)&v26);
  if ( HasWrapperAndListener < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)HasWrapperAndListener);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v13 = ViewEventDispatcher::_EnsureViewHasWrapperAndListener((ViewManagerBridge **)a1, a3, &v21, v24, (char *)&v27);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v13);
  if ( v11 )
    ReleaseSRWLockExclusive((PSRWLOCK)v11);
  v14 = v23;
  v15 = v22;
  if ( (_BYTE)v26 )
  {
    lpVtbl = v22[4].lpVtbl;
    v26 = lpVtbl;
    if ( lpVtbl )
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v14, 0LL, 0LL, &v26);
  }
  v17 = v21;
  v18 = v24[0];
  if ( (_BYTE)v27 )
  {
    v19 = v24[0][4].lpVtbl;
    v26 = v19;
    if ( v19 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v19->QueryInterface + 1))(v19);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v17, 0LL, 0LL, &v26);
  }
  if ( (unsigned int)SHIsSameObject(v15, v18) )
  {
    v23 = 0LL;
    *a4 = v14;
    v21 = 0LL;
    *a5 = v17;
    v22 = 0LL;
    *a6 = v15;
  }
  else
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x80070057LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return v10;
}
