/*
 * XREFs of AmliWatchdogInitiateBugcheck @ 0x1C0046ECC
 * Callers:
 *     AmliWatchdogTimeoutAction @ 0x1C0046F84 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn AmliWatchdogInitiateBugcheck(ULONG_PTR *a1)
{
  ULONG_PTR v1; // r9

  v1 = a1[1];
  if ( !v1 || !*(_QWORD *)(v1 + 768) )
    v1 = RootDeviceExtension;
  KeBugCheckEx(0x1D0u, *a1, *a1 + 440, v1, (ULONG_PTR)&gAcpiTriageInfo);
}
