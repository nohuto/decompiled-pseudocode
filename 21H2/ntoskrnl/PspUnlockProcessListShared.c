/*
 * XREFs of PspUnlockProcessListShared @ 0x14020C7B0
 * Callers:
 *     PsChangeQuantumTable @ 0x14068F5DC (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x14068F700 (PsGetNextProcessEx.c)
 *     PsGetPreviousProcess @ 0x1409B49A0 (PsGetPreviousProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockProcessListShared(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PspActiveProcessLock);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v4, v3, v5);
  }
  return result;
}
