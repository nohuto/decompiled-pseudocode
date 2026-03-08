/*
 * XREFs of PsAdjustBasicEnclaveThreadList @ 0x1405A4260
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     PspFindVsmEnclaveThread @ 0x1408A13DC (PspFindVsmEnclaveThread.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsAdjustBasicEnclaveThreadList(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  _BOOL8 v10; // r8
  unsigned __int64 *v11; // rdi
  int VsmEnclaveThread; // eax
  _QWORD *v13; // rsi
  _QWORD *v14; // rax

  v3 = 0LL;
  if ( a3 )
  {
    Pool2 = ExAllocatePool2(256LL, 40LL, 1950708560LL);
    v3 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 32) = a3;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  if ( !a3 )
  {
    v11 = *(unsigned __int64 **)(a1 + 104);
    while ( v11 )
    {
      VsmEnclaveThread = PspFindVsmEnclaveThread(a2, v11, v10);
      if ( VsmEnclaveThread >= 0 )
      {
        if ( VsmEnclaveThread <= 0 )
          break;
        v11 = (unsigned __int64 *)v11[1];
      }
      else
      {
        v11 = (unsigned __int64 *)*v11;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 104), v11);
    goto LABEL_21;
  }
  v13 = *(_QWORD **)(a1 + 104);
  LOBYTE(v10) = 0;
  if ( !v13 )
    goto LABEL_20;
  while ( (int)PspFindVsmEnclaveThread(a2, v13, v10) >= 0 )
  {
    v14 = (_QWORD *)v13[1];
    if ( !v14 )
    {
      LOBYTE(v10) = 1;
      goto LABEL_20;
    }
LABEL_18:
    v13 = v14;
  }
  v14 = (_QWORD *)*v13;
  if ( *v13 )
    goto LABEL_18;
  LOBYTE(v10) = 0;
LABEL_20:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v13, v10, v3);
  v11 = 0LL;
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  KeLeaveCriticalRegion();
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return 0LL;
}
