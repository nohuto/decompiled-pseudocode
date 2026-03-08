/*
 * XREFs of AmliWatchdogInitiateLiveDump @ 0x1C0046F18
 * Callers:
 *     AmliWatchdogTimeoutAction @ 0x1C0046F84 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AmliWatchdogInitiateLiveDump(_QWORD *a1)
{
  ULONG_PTR v1; // rax

  v1 = a1[1];
  if ( !v1 || !*(_QWORD *)(v1 + 768) )
    v1 = RootDeviceExtension;
  return DbgkWerCaptureLiveKernelDump(
           L"AcpiFirmwareWatchDog",
           464LL,
           *a1,
           *a1 + 440LL,
           v1,
           &gAcpiTriageInfo,
           0LL,
           0LL,
           0);
}
