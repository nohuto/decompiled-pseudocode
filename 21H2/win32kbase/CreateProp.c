/*
 * XREFs of CreateProp @ 0x1C0086858
 * Callers:
 *     RealInternalSetProp @ 0x1C0149FC0 (RealInternalSetProp.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CreateProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  PVOID v10; // rsi
  __int64 v11; // rbx
  void *v12; // rdx
  PVOID v13; // rsi
  __int64 Pool2; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  LockRefactorStagingAssertOwned((struct _KTHREAD **)a1, a2, a3, a4);
  v5 = *(unsigned int **)(a1 + 24);
  if ( !v5 )
  {
    v13 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79707355) == 0x79707355
      && (v15 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 2037412693 )
      {
        if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_11;
      }
      Pool2 = ExAllocatePool2(260LL, 40LL);
      if ( !Pool2 )
        goto LABEL_26;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v13,
                                Pool2,
                                BackTrace) )
        {
          *(_QWORD *)(a1 + 24) = Pool2;
          goto LABEL_13;
        }
        goto LABEL_25;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v13,
                               Pool2,
                               BackTrace) )
      {
LABEL_25:
        ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_26:
        *(_QWORD *)(a1 + 24) = 0LL;
        return 0LL;
      }
      Pool2 += 16LL;
    }
    else
    {
LABEL_11:
      Pool2 = ExAllocatePool2(260LL, 24LL);
    }
    *(_QWORD *)(a1 + 24) = Pool2;
    if ( !Pool2 )
      return 0LL;
LABEL_13:
    *(_DWORD *)Pool2 = 1;
    goto LABEL_3;
  }
  v6 = *v5;
  if ( v5[1] != (_DWORD)v6 )
  {
LABEL_3:
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v7 + 4) = v8 + 1;
    return v7 + 16LL * v8 + 8;
  }
  v10 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79707355) == 0x79707355
    && (v16 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 2037412693 )
    {
      if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    v11 = ExAllocatePool2(260LL, 16 * v6 + 40);
    if ( !v11 )
      return 0LL;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(v11 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v10,
                               v11,
                               BackTrace) )
      {
LABEL_34:
        ExFreePoolWithTag((PVOID)v11, 0);
        return 0LL;
      }
LABEL_7:
      memmove((void *)v11, *(const void **)(a1 + 24), 16LL * (unsigned int)(**(_DWORD **)(a1 + 24) - 1) + 24);
      v12 = *(void **)(a1 + 24);
      if ( v12 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v12);
      *(_QWORD *)(a1 + 24) = v11;
      ++*(_DWORD *)v11;
      goto LABEL_3;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v10,
                             v11,
                             BackTrace) )
      goto LABEL_34;
    v11 += 16LL;
  }
  else
  {
LABEL_5:
    v11 = ExAllocatePool2(260LL, 16 * v6 + 24);
  }
  if ( v11 )
    goto LABEL_7;
  return 0LL;
}
