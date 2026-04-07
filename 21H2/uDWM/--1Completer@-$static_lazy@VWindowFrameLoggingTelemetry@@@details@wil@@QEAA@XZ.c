/*
 * XREFs of ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x180006F68
 * Callers:
 *     ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x180006E8C (-get@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemet.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002D448 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  union _RTL_RUN_ONCE v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4.Ptr = *(PVOID *)(wil::details::static_lazy<WindowFrameLogging>::get(
                          a1,
                          _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                      + 8);
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = v4.Ptr;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
