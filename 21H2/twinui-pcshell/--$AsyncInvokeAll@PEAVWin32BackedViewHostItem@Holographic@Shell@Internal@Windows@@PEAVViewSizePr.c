/*
 * XREFs of ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePreferencesChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800C7A18
 * Callers:
 *     ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUSize@Foundation@5@@Z @ 0x1802C1000 (-RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUS.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180057690 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0?$__func@V_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@QEAA@$$QEAV_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@@Z @ 0x1800C8674 (--0-$__func@V_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@$$A6AJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     ??1_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@QEAA@XZ @ 0x1800C86E8 (--1_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C914C (-InternalAddRef@-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C9198 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MakeSafelyCopyable@?$MakeSafelyCopyablTraitsIUnknown@PEAVViewSizePreferencesChangedEventArgsImpl@@@details@wil@@SA?AU?$MakeSafelyCopyableResult@V?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@PEAVViewSizePreferencesChangedEventArgsImpl@@@23@PEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800C92BC (-MakeSafelyCopyable@-$MakeSafelyCopyablTraitsIUnknown@PEAVViewSizePreferencesChangedEventArgsImp.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1801AFE04 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1802B0184 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     wil::details::MakeSafelyCopyable_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem___ @ 0x1802BA454 (wil--details--MakeSafelyCopyable_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem_.c)
 *     ??0?$MakeSafelyCopyableResult@V?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@details@wil@@QEAA@AEBU012@@Z @ 0x1802BBB50 (--0-$MakeSafelyCopyableResult@V-$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ??1?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802BC894 (--1-$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *,ViewSizePreferencesChangedEventArgsImpl *>(
        PVOID Parameter,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v9; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v12[104]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+27h]

  v13 = 0LL;
  wil::details::MakeSafelyCopyablTraitsIUnknown<ViewSizePreferencesChangedEventArgsImpl *>::MakeSafelyCopyable(&v7, *a3);
  v5 = wil::details::MakeSafelyCopyable_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem___(v10, a2);
  wil::details::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>,Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>::MakeSafelyCopyableResult<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>,Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>(
    v8,
    v5);
  v9 = v7;
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalAddRef(&v9);
  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(v11);
  v13 = wistd::__function::__func<_lambda_88fc7155b3915cd74e6d1f1f1c627343_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::__func<_lambda_88fc7155b3915cd74e6d1f1f1c627343_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>(
          v12,
          v8);
  _lambda_88fc7155b3915cd74e6d1f1f1c627343_::~_lambda_88fc7155b3915cd74e6d1f1f1c627343_((_lambda_88fc7155b3915cd74e6d1f1f1c627343_ *)v8);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>::~ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>(v10);
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalRelease(&v7);
  LODWORD(a2) = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::DoAsyncInvoke(Parameter);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v11);
  return (unsigned int)a2;
}
