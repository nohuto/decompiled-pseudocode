/*
 * XREFs of ??1TitleBarController@@EEAA@XZ @ 0x1802F5660
 * Callers:
 *     ??_GTitleBarController@@EEAAPEAXI@Z @ 0x1802F6310 (--_GTitleBarController@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180057690 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B13F0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@1@@Z @ 0x1802D70B8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIWin32ApplicationView@@Uerr_.c)
 *     ?reset@?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x1802F8764 (-reset@-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@w.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TitleBarController::~TitleBarController(TitleBarController *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  volatile int *v5; // rdx

  v2 = (char *)this + 224;
  SmartCookie::Unregister((TitleBarController *)((char *)this + 224));
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 25);
  wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset((char *)this + 176);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 23);
  wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset((char *)this + 152);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 16);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>,void *>>>(
    (__int64)this + 88,
    (__int64)this + 88,
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 11), (const struct std::nothrow_t *)0x30);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v5);
}
