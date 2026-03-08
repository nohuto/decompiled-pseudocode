/*
 * XREFs of ExCreateHandleTable @ 0x140706274
 * Callers:
 *     ExDupHandleTable @ 0x140705D54 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x140707D3C (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x1407DCAAC (RtlpInitializeHandleTableForAtomTable.c)
 *     AlpcpInitSystem @ 0x140856E38 (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140975E3C (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140B6FB58 (PspInitializeJobStructures.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpAllocateHandleTable @ 0x140706348 (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  char v8; // si

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  LOBYTE(a2) = 1;
  result = ExpAllocateHandleTable(a1, a2);
  v5 = result;
  if ( result )
  {
    v6 = (_QWORD *)(result + 24);
    if ( v3 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
      v7 = (_QWORD *)qword_140D54EC8;
      if ( *(__int64 **)qword_140D54EC8 != &HandleTableListHead )
        __fastfail(3u);
      *v6 = &HandleTableListHead;
      v6[1] = v7;
      *v7 = v6;
      qword_140D54EC8 = (__int64)v6;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return v5;
    }
    else
    {
      *(_QWORD *)(result + 32) = result + 24;
      *v6 = v6;
    }
  }
  return result;
}
