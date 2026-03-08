/*
 * XREFs of PspUnlockJobListExclusive @ 0x1406F8070
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1406F7BA0 (NtCreateJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PspUnlockJobListExclusive(__int64 a1)
{
  char v2; // al
  _QWORD *v3; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobListLock);
  LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
