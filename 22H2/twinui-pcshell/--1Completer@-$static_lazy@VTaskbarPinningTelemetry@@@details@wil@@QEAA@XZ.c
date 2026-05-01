/*
 * XREFs of ??1Completer@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x180152CF4
 * Callers:
 *     ?get@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AXXZ@Z @ 0x18015EFD8 (-get@-$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18020E540 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

BOOL __fastcall wil::details::static_lazy<TaskbarPinningTelemetry>::Completer::~Completer(__int64 a1)
{
  DWORD v2; // edx
  LPINIT_ONCE v3; // rbx

  v2 = *(_DWORD *)(a1 + 8);
  if ( !v2 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v3[2].Ptr = TaskbarLogging::Provider();
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v3[1].Ptr + 1))(v3 + 1);
    v2 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v2, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
