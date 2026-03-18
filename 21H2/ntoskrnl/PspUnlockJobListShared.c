/*
 * XREFs of PspUnlockJobListShared @ 0x14068A79C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     PspGetNextJob @ 0x14068A6EC (PspGetNextJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

char __fastcall PspUnlockJobListShared(__int64 a1)
{
  _QWORD *v2; // rax

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  LOBYTE(v2) = KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
