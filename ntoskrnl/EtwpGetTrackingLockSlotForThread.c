/*
 * XREFs of EtwpGetTrackingLockSlotForThread @ 0x1405FE198
 * Callers:
 *     PerfLogExecutiveResourceAcquire @ 0x1405FE2B8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405FE480 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405FE674 (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x1405FE790 (PerfLogExecutiveResourceWait.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall EtwpGetTrackingLockSlotForThread(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 Object; // rbx
  int v6; // esi
  signed __int64 result; // rax
  signed __int64 v8; // rax
  int v9; // ecx
  int v10; // edx

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return 0LL;
  Object = (signed __int64)CurrentThread[1].WaitBlock[0].Object;
  v6 = EtwpEthreadSyncTrackingSequence;
  if ( !Object )
  {
    result = ExAllocatePool2(72LL, 512LL, 1918133586LL);
    if ( result )
    {
      *(_QWORD *)(result + 16) = a1;
      *(_DWORD *)(result + 28) = a2;
      *(_DWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 40) = v6;
      Object = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Object,
                 result,
                 0LL);
      if ( !Object )
        return result;
      ExFreePoolWithTag((PVOID)result, 0);
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  v8 = 0LL;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)(Object + 28);
    if ( v10 == a2 && *(_QWORD *)(Object + 16) == a1 && *(_DWORD *)(Object + 40) == v6 )
      return Object;
    if ( !v8 )
    {
      if ( v10 )
      {
        if ( *(_DWORD *)(Object + 40) < v6 )
        {
          v8 = Object;
LABEL_17:
          Object = v8;
          if ( v8 )
          {
            *(_QWORD *)(v8 + 16) = a1;
            *(_DWORD *)(v8 + 28) = a2;
            *(_QWORD *)(v8 + 32) = 0LL;
            *(_QWORD *)v8 = 0LL;
            *(_QWORD *)(v8 + 8) = 0LL;
            *(_DWORD *)(v8 + 24) = 0;
            *(_DWORD *)(v8 + 40) = v6;
            *(_DWORD *)(v8 + 44) = 0;
          }
          return Object;
        }
      }
      else
      {
        v8 = Object;
      }
    }
    Object += 64LL;
    if ( (unsigned int)++v9 >= 8 )
      goto LABEL_17;
  }
}
