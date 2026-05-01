/*
 * XREFs of _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x1801B7DD4
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator() @ 0x1801B8080 (CDelayIAMOperations--CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180071D94 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083AF8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___ @ 0x1801B43C0 (CIAMGlobals--QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___.c)
 *     ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x1801BE848 (-PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z.c)
 *     ?get@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAAPEAVIamTraceLogging@@P6AXXZ@Z @ 0x1801C97AC (-get@-$static_lazy@VIamTraceLogging@@@details@wil@@QEAAPEAVIamTraceLogging@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bb299bb733d931796faa9380238be063_::operator()(__int64 a1)
{
  HWND ForegroundWindow; // rax
  HWND v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  wil::TraceLoggingProvider *v6; // rax
  __int64 v7; // rcx
  IamTraceLogging *v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
    &v11);
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow
    || (v3 = *(HWND *)(a1 + 8), ForegroundWindow == v3)
    && ForegroundWindow == *(HWND *)(a1 + 16)
    && *(HWND *)(*(_QWORD *)a1 + 768LL) != v3
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 416LL))(v11) )
  {
    v10 = *(_QWORD *)(a1 + 24);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___(v4, &v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<IamTraceLogging>::get(
                                        v5,
                                        _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
    if ( wil::TraceLoggingProvider::IsEnabled_(v6, 0) )
    {
      wil::details::static_lazy<IamTraceLogging>::get(
        v7,
        _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
      IamTraceLogging::PendingActivation_(v8, *(HWND *)(a1 + 8));
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
}
