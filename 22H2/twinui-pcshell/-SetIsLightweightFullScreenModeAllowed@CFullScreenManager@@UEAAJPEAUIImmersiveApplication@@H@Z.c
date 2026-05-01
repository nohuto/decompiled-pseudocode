/*
 * XREFs of ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x1800496A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18004B270 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ @ 0x18009A0B0 (--1-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFullScreenManager::SetIsLightweightFullScreenModeAllowed(
        ApplicationViewHelpers **this,
        struct IUnknown *a2,
        int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct IApplicationView **v9; // r9
  int ViewForApplication; // eax
  int v11; // eax
  HRESULT v12; // eax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-50h]
  IUnknown *punk; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v19; // [rsp+50h] [rbp-20h] BYREF
  __int16 v20; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+B8h] [rbp+48h] BYREF

  v18[1] = -2LL;
  v17 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, __int64 *))a2->lpVtbl[2].QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v6,
      v15);
    goto LABEL_14;
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v18,
    v17);
  v19 = 11;
  if ( a3 )
    v20 = -1;
  else
    v20 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int16 *))(*(_QWORD *)v18[0] + 48LL))(
         v18[0],
         &PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed,
         &v19);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v8,
      v15);
    goto LABEL_13;
  }
  v22 = 0LL;
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *(this - 9),
                         a2,
                         (struct IImmersiveApplication *)&v22,
                         v9);
  v7 = ViewForApplication;
  if ( ViewForApplication < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)ViewForApplication,
      v15);
    goto LABEL_12;
  }
  punk = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v22 + 80LL))(v22, &punk);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v11,
      v15);
    goto LABEL_11;
  }
  ppvOut = 0LL;
  v12 = IUnknown_QueryService(
          punk,
          &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
          &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
          &ppvOut);
  v7 = v12;
  if ( v12 < 0 )
  {
    v14 = 335LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v12,
      v15);
    goto LABEL_10;
  }
  v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v22);
  v7 = v12;
  if ( v12 < 0 )
  {
    v14 = 336LL;
    goto LABEL_22;
  }
  v7 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_13:
  CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(v18);
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v7;
}
