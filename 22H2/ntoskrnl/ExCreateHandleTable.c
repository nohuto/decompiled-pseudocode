/*
 * XREFs of ExCreateHandleTable @ 0x1406A6B48
 * Callers:
 *     ExDupHandleTable @ 0x1406065C0 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x140607AA4 (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x1406A6B1C (RtlpInitializeHandleTableForAtomTable.c)
 *     AlpcpInitSystem @ 0x1407CDF6C (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408C2E20 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140A72054 (PspInitializeJobStructures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAllocateHandleTable @ 0x140606154 (ExpAllocateHandleTable.c)
 */

_QWORD *__fastcall ExCreateHandleTable(struct _KPROCESS *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  char v8; // si

  CurrentThread = KeGetCurrentThread();
  result = ExpAllocateHandleTable(a1, 1);
  v5 = result;
  if ( result )
  {
    v6 = result + 3;
    if ( a2 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
      v7 = (_QWORD *)qword_140D2EB48;
      if ( *(__int64 **)qword_140D2EB48 != &HandleTableListHead )
        __fastfail(3u);
      *v6 = &HandleTableListHead;
      v6[1] = v7;
      *v7 = v6;
      qword_140D2EB48 = (__int64)v6;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return v5;
    }
    else
    {
      result[4] = result + 3;
      *v6 = v6;
    }
  }
  return result;
}
