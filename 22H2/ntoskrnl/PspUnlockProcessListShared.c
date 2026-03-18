/*
 * XREFs of PspUnlockProcessListShared @ 0x1403506E4
 * Callers:
 *     PsChangeQuantumTable @ 0x1407C09D4 (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x1407C0AE0 (PsGetNextProcessEx.c)
 *     PsGetPreviousProcess @ 0x1409B7C90 (PsGetPreviousProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
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
