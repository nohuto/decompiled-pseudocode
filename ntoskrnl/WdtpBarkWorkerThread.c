/*
 * XREFs of WdtpBarkWorkerThread @ 0x140A6C3D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

LONG __fastcall WdtpBarkWorkerThread(__int64 a1)
{
  (*(void (__fastcall **)(__int64))(a1 + 24))(a1 + 141);
  return KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
}
