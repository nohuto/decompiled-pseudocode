/*
 * XREFs of VfHandlePoolAlloc @ 0x140A90660
 * Callers:
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     IovAllocateMdl @ 0x140A7FF00 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140A80040 (IovAllocateWorkItem.c)
 *     ViIrpAllocateLockedPacket @ 0x140A8D338 (ViIrpAllocateLockedPacket.c)
 *     VfSpIoSetCompletionRoutineEx_Exit @ 0x140AA71F0 (VfSpIoSetCompletionRoutineEx_Exit.c)
 *     ViSpRtlReplaceStringBuffer @ 0x140AA72F4 (ViSpRtlReplaceStringBuffer.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140240470 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ViGrowPoolAllocation @ 0x1405FF8F0 (ViGrowPoolAllocation.c)
 *     ExIsSpecialPoolAddress @ 0x140642384 (ExIsSpecialPoolAddress.c)
 *     ExpPoolFlagsToPoolType @ 0x140A6E0A0 (ExpPoolFlagsToPoolType.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfTargetDriversGetVerifierData @ 0x140A8ABF8 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     ViPostPoolAllocation @ 0x140A90C80 (ViPostPoolAllocation.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140A96A2C (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140A96C48 (VfFaultsIsSystemSufficientlyBooted.c)
 *     VfFillAllocatedMemory @ 0x140A9A1DC (VfFillAllocatedMemory.c)
 *     ViPtLogStackTrace @ 0x140A9DFBC (ViPtLogStackTrace.c)
 *     ExAllocatePoolSanityChecks @ 0x140AA6EAC (ExAllocatePoolSanityChecks.c)
 */

PVOID __fastcall VfHandlePoolAlloc(
        POOL_TYPE PoolType,
        __int64 a2,
        unsigned __int64 a3,
        ULONG a4,
        EX_POOL_PRIORITY Priority,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v10; // rbx
  POOL_TYPE v11; // esi
  union _SLIST_HEADER *VerifierData; // r15
  int v13; // r13d
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rcx
  EX_POOL_PRIORITY v19; // r14d
  PSLIST_ENTRY v20; // rsi
  ULONG_PTR PoolWithTagPriority; // rax
  ULONG_PTR v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rcx
  unsigned int v25; // r15d
  __int64 v26; // r14
  __int64 v27; // rdx
  _SLIST_ENTRY *v28; // rax
  unsigned int v29; // edx
  _DWORD *v30; // rax
  _BYTE v31[4]; // [rsp+30h] [rbp-20h] BYREF
  int v32; // [rsp+34h] [rbp-1Ch]
  unsigned int v33; // [rsp+38h] [rbp-18h]
  unsigned __int64 v34; // [rsp+40h] [rbp-10h]
  unsigned __int64 v35; // [rsp+48h] [rbp-8h]
  POOL_TYPE v36; // [rsp+90h] [rbp+40h] BYREF
  char v37; // [rsp+98h] [rbp+48h] BYREF
  ULONG Tag; // [rsp+A8h] [rbp+58h] BYREF

  Tag = a4;
  v36 = PoolType;
  v33 = 0;
  v10 = a2;
  v11 = PoolType;
  VerifierData = 0LL;
  v13 = 0;
  if ( a2 )
  {
    if ( (int)ExpPoolFlagsToPoolType(a2, 0, (int *)&v36, v31, &v37) < 0 )
    {
LABEL_3:
      if ( a6 )
        return (PVOID)ExAllocatePool3(v10, a3, a4, a6, a7);
      else
        return (PVOID)ExAllocatePool2(v10, a3, a4);
    }
    v11 = v36;
  }
  if ( KernelVerifier )
  {
    if ( (v11 & 0x80u) == 0 )
    {
      v11 |= 0x80u;
      v36 = v11;
      if ( v10 )
        v10 |= 0x200uLL;
    }
    else
    {
      v13 = 1;
      VerifierData = (union _SLIST_HEADER *)VfTargetDriversGetVerifierData(a8);
      if ( !VerifierData )
      {
        if ( !v10 )
          return ExAllocatePoolWithTagPriority(v11, a3, a4, Priority);
        goto LABEL_3;
      }
    }
  }
  v15 = a8;
  if ( (MmVerifierData & 1) != 0 )
    ExAllocatePoolSanityChecks((unsigned int)v11, a3, &Tag, a8);
  v32 = 0;
  if ( !a3 && (unsigned int)VfVerifyMode <= 1 )
  {
    v32 = 1;
    a3 = 1LL;
  }
  v35 = a3;
  v34 = a3;
  _InterlockedIncrement(&dword_140C29FD0);
  v16 = v36;
  v17 = Tag;
  if ( (v36 & 2) != 0 )
  {
    if ( (MmVerifierData & 8) != 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(0xC2u, 0x9AuLL, v16 & 0xFFFFFFFFFFFFFF7FuLL, a3, v17);
  }
  else if ( (MmVerifierData & 4) != 0 )
  {
    if ( !v13 )
    {
      v13 = 1;
      VerifierData = (union _SLIST_HEADER *)VfTargetDriversGetVerifierData(v15);
    }
    if ( VerifierData )
    {
      v18 = (unsigned int)v17;
      LODWORD(v18) = v17 & 0x7FFFFFFF;
      if ( (unsigned int)VfFaultsInjectPoolAllocationFailure(v18) )
      {
        ViPtLogStackTrace(0LL, (unsigned int)v17, a3, 0LL);
LABEL_59:
        if ( (v16 & 0x10) != 0 )
          RtlRaiseStatus(-1073741670);
        return 0LL;
      }
    }
  }
  v19 = Priority;
  if ( (VfRuleClasses & 1) != 0 || DifpSpecialPoolEnabled )
  {
    if ( (Priority & 9) == 0 )
    {
      if ( MmSpecialPoolCatchOverruns == 1 )
        v19 = Priority | 8;
      else
        v19 = Priority | 9;
    }
    if ( v10 )
      v10 |= 0x100000000uLL;
  }
  v20 = 0LL;
  if ( (VfRuleClasses & 8) != 0 && (v16 & 0x20) == 0 && Tag != 1850304854 )
  {
    if ( !v13 )
      VerifierData = (union _SLIST_HEADER *)VfTargetDriversGetVerifierData(a8);
    if ( VerifierData && a3 + 8 >= a3 )
    {
      v20 = RtlpInterlockedPopEntrySList(VerifierData + 5);
      if ( v20 || (v20 = ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        LODWORD(v16) = v16 | 0x40;
        a3 += 8LL;
        v36 = (int)v16;
        if ( !v10 )
        {
LABEL_50:
          PoolWithTagPriority = (ULONG_PTR)ExAllocatePoolWithTagPriority((POOL_TYPE)v16, a3, Tag, v19);
          goto LABEL_54;
        }
        v10 |= 0x400uLL;
      }
    }
    else
    {
      ++dword_140C29FFC;
    }
  }
  if ( !v10 )
    goto LABEL_50;
  if ( a6 )
    PoolWithTagPriority = ExAllocatePool3(v10, a3, Tag, a6, a7);
  else
    PoolWithTagPriority = ExAllocatePool2(v10, a3, Tag);
LABEL_54:
  v22 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    ++dword_140C29FE8;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a8, 176LL);
    if ( v20 )
      RtlpInterlockedPushEntrySList(VerifierData + 5, v20);
    goto LABEL_59;
  }
  v23 = a8;
  if ( v32 && (VfRuleClasses & 8) != 0 )
  {
    v24 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    *((_DWORD *)&ViBugcheckWorkaroundLog + 2 * v24) = 1;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v24 + 1) = v23;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v24 + 2) = PoolWithTagPriority;
  }
  v25 = 0;
  _InterlockedIncrement(&dword_140C29FD4);
  if ( (unsigned int)ExIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v25 = 1;
LABEL_68:
    _InterlockedIncrement(&dword_140C29FD8);
    goto LABEL_69;
  }
  if ( a3 > 0xFE0 )
    goto LABEL_68;
LABEL_69:
  v26 = Tag;
  if ( v20 )
  {
    v27 = (unsigned int)v36;
    *((_QWORD *)&v20->Next + 1) = v23;
    v20->Next = (_SLIST_ENTRY *)(v22 | v25);
    v28 = (_SLIST_ENTRY *)v35;
    if ( !v25 )
      v28 = (_SLIST_ENTRY *)a3;
    *((_QWORD *)&v20[1].Next + 1) = v26;
    v20[1].Next = v28;
    ViPostPoolAllocation(v20, v27);
  }
  if ( (VfRuleClasses & 8) != 0 )
  {
    if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
    {
      v29 = v33;
      v30 = &DifpPoolTags;
      while ( *v30 != (_DWORD)v26 )
      {
        ++v29;
        ++v30;
        if ( v29 >= DifpPoolTagsSize )
          goto LABEL_80;
      }
    }
    ViPtLogStackTrace(v22, (unsigned int)v26, v34, 0LL);
LABEL_80:
    if ( v20 && !v25 && (v36 & 0x400) == 0 )
      VfFillAllocatedMemory((void *)v22);
  }
  return (PVOID)v22;
}
