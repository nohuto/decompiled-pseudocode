/*
 * XREFs of ??_EHolographicViewHostItemLedger@@UEAAPEAXI@Z @ 0x1802B7E34
 * Callers:
 *     ??_EHolographicViewHostItemLedger@@WDA@EAAPEAXI@Z @ 0x1801670F0 (--_EHolographicViewHostItemLedger@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@UIViewProvider@Core@ComposableShell@89@U?$CloakedIid@UIHolographicViewHostItemLedgerPrivate@Holographic@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801AFBDC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponen.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801B5114 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Ue.c)
 */

HolographicViewHostItemLedger *__fastcall HolographicViewHostItemLedger::`vector deleting destructor'(
        HolographicViewHostItemLedger *this,
        char a2)
{
  __int64 *v2; // rdi
  volatile int *v5; // rdx

  v2 = (__int64 *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>(
      v2,
      *((__int64 **)this + 26));
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 27) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 24);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::ComposableShell::Core::IViewProvider,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::ComposableShell::Core::IViewProvider,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v5);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
