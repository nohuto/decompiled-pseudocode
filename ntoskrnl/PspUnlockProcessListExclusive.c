/*
 * XREFs of PspUnlockProcessListExclusive @ 0x140298F30
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall PspUnlockProcessListExclusive(__int64 a1)
{
  char v2; // al
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspActiveProcessLock);
  LODWORD(v3) = KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LODWORD(v3) = KiCheckForKernelApcDelivery(v5, v4, v6, v7);
  }
  return (int)v3;
}
