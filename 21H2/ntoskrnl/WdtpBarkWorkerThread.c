/*
 * XREFs of WdtpBarkWorkerThread @ 0x140980100
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

LONG __fastcall WdtpBarkWorkerThread(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 8));
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
