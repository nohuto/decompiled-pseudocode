/*
 * XREFs of PspUnlockProcessListShared @ 0x1402E3A74
 * Callers:
 *     PsChangeQuantumTable @ 0x14076EDA4 (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x14076EEB0 (PsGetNextProcessEx.c)
 *     PsGetPreviousProcess @ 0x1409B4C60 (PsGetPreviousProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PspUnlockProcessListShared(__int64 a1)
{
  _QWORD *v2; // rax

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  LOBYTE(v2) = KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
