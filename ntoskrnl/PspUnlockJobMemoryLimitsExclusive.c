/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x1406FEEF4
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x1406DBAB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x1406F8760 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rdi
  _QWORD *v5; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 1248;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1248), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1248));
    LOBYTE(v5) = KeAbPostRelease(v4);
  }
  if ( a3 )
  {
    if ( (*(_WORD *)(a3 + 486))++ == 0xFFFF )
    {
      v5 = (_QWORD *)(a3 + 152);
      if ( (_QWORD *)*v5 != v5 )
        LOBYTE(v5) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v5;
}
