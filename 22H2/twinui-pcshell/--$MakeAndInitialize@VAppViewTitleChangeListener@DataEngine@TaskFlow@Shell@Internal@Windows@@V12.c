/*
 * XREFs of ??$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1802A7100
 * Callers:
 *     ?Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1802A7460 (-Create@AppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801CA244 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1802A7220 (--0AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
        __int64 **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v5; // rax
  __int64 *v6; // rdi

  v4 = 0;
  *a1 = 0LL;
  v5 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)operator new(
                                                                                       0x98uLL,
                                                                                       (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = (__int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AppViewTitleChangeListener(v5);
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(v6 + 10, *a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
