/*
 * XREFs of VfHandlePoolAlloc @ 0x140ACDFB0
 * Callers:
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     IovAllocateMdl @ 0x140ABDDE0 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140ABDF20 (IovAllocateWorkItem.c)
 *     ViIrpAllocateLockedPacket @ 0x140ACAC64 (ViIrpAllocateLockedPacket.c)
 *     VfSpIoSetCompletionRoutineEx_Exit @ 0x140AE5670 (VfSpIoSetCompletionRoutineEx_Exit.c)
 *     ViSpRtlReplaceStringBuffer @ 0x140AE5774 (ViSpRtlReplaceStringBuffer.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x1402E1F00 (ExAllocatePoolWithTagPriority.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     ViGrowPoolAllocation @ 0x1405CD7B0 (ViGrowPoolAllocation.c)
 *     ExIsSpecialPoolAddress @ 0x14060CCD8 (ExIsSpecialPoolAddress.c)
 *     ExpPoolFlagsToPoolType @ 0x140AAB010 (ExpPoolFlagsToPoolType.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     VfTargetDriversGetVerifierData @ 0x140AC8528 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViPostPoolAllocation @ 0x140ACE608 (ViPostPoolAllocation.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140AD2EC8 (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140AD30E8 (VfFaultsIsSystemSufficientlyBooted.c)
 *     VfFillAllocatedMemory @ 0x140AD700C (VfFillAllocatedMemory.c)
 *     ViPtLogStackTrace @ 0x140ADC05C (ViPtLogStackTrace.c)
 *     ExAllocatePoolSanityChecks @ 0x140AE4C7C (ExAllocatePoolSanityChecks.c)
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
  __int64 v13; // rcx
  unsigned int v14; // r8d
  ULONG_PTR v15; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rcx
  EX_POOL_PRIORITY v21; // r14d
  PSLIST_ENTRY v22; // rsi
  ULONG_PTR PoolWithTagPriority; // rax
  ULONG_PTR v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rcx
  unsigned int v27; // r15d
  __int64 v28; // r14
  __int64 v29; // rdx
  _SLIST_ENTRY *v30; // rax
  unsigned int v31; // edx
  __int128 *v32; // rax
  _BYTE v33[8]; // [rsp+30h] [rbp-30h] BYREF
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-28h]
  int v35; // [rsp+40h] [rbp-20h]
  unsigned int v36; // [rsp+44h] [rbp-1Ch]
  unsigned __int64 v37; // [rsp+48h] [rbp-18h]
  unsigned __int64 v38; // [rsp+50h] [rbp-10h]
  POOL_TYPE v39; // [rsp+A0h] [rbp+40h] BYREF
  char v40; // [rsp+A8h] [rbp+48h] BYREF
  ULONG Tag; // [rsp+B8h] [rbp+58h] BYREF

  Tag = a4;
  v39 = PoolType;
  LODWORD(NumberOfBytes) = 0;
  v36 = 0;
  v10 = a2;
  v11 = PoolType;
  VerifierData = 0LL;
  if ( a2 )
  {
    if ( (int)ExpPoolFlagsToPoolType(a2, 0, (int *)&v39, v33, &v40) < 0 )
    {
      v14 = a4;
      v15 = a3;
LABEL_4:
      if ( a6 )
        return (PVOID)ExAllocatePool3(v13, v15, v14, a6, a7);
      else
        return (PVOID)ExAllocatePool2(v13, v15, v14);
    }
    v11 = v39;
  }
  if ( KernelVerifier )
  {
    if ( (v11 & 0x80u) == 0 )
    {
      v11 |= 0x80u;
      v39 = v11;
      if ( v10 )
        v10 |= 0x200uLL;
    }
    else
    {
      LODWORD(NumberOfBytes) = 1;
      VerifierData = (union _SLIST_HEADER *)VfTargetDriversGetVerifierData(a8);
      if ( !VerifierData )
      {
        v14 = a4;
        v15 = a3;
        if ( !v10 )
          return ExAllocatePoolWithTagPriority(v11, a3, a4, Priority);
        v13 = v10;
        goto LABEL_4;
      }
    }
  }
  v17 = a8;
  if ( (MmVerifierData & 1) != 0 )
    ExAllocatePoolSanityChecks((unsigned int)v11, a3, &Tag, a8);
  v35 = 0;
  if ( !a3 && (unsigned int)VfVerifyMode <= 1 )
  {
    v35 = 1;
    a3 = 1LL;
  }
  v38 = a3;
  v37 = a3;
  _InterlockedIncrement(&dword_140C13830);
  v18 = v39;
  v19 = Tag;
  if ( (v39 & 2) != 0 )
  {
    if ( (MmVerifierData & 8) != 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(0xC2u, 0x9AuLL, v18 & 0xFFFFFFFFFFFFFF7FuLL, a3, v19);
  }
  else if ( (MmVerifierData & 4) != 0 )
  {
    if ( !(_DWORD)NumberOfBytes )
    {
      LODWORD(NumberOfBytes) = 1;
      VerifierData = (union _SLIST_HEADER *)VfTargetDriversGetVerifierData(v17);
    }
    if ( VerifierData )
    {
      v20 = (unsigned int)v19;
      LODWORD(v20) = v19 & 0x7FFFFFFF;
      if ( (unsigned int)VfFaultsInjectPoolAllocationFailure(v20) )
      {
        ViPtLogStackTrace(0LL, (unsigned int)v19, a3, 0LL);
LABEL_28:
        if ( (v18 & 0x10) != 0 )
          RtlRaiseStatus(-1073741670);
        return 0LL;
      }
    }
  }
  v21 = Priority;
  if ( (VfRuleClasses & 1) != 0 || DifpSpecialPoolEnabled )
  {
    if ( (Priority & 9) == 0 )
    {
      if ( MmSpecialPoolCatchOverruns == 1 )
        v21 = Priority | 8;
      else
        v21 = Priority | 9;
    }
    if ( v10 )
      v10 |= 0x100000000uLL;
  }
  v22 = 0LL;
  if ( (VfRuleClasses & 8) != 0
    && !_bittest(&VfOptionFlags, 0xCu)
    && (v18 & 0x20) == 0
    && (_DWORD)v19 != 1850304854
    && (_DWORD)v19 != 1316118851 )
  {
    if ( !(_DWORD)NumberOfBytes )
      VerifierData = (union _SLIST_HEADER *)VfTargetDriversGetVerifierData(a8);
    if ( VerifierData && (NumberOfBytes = a3 + 8, a3 + 8 >= a3) )
    {
      v22 = RtlpInterlockedPopEntrySList(VerifierData + 5);
      if ( v22 || (v22 = ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        a3 = NumberOfBytes;
        LODWORD(v18) = v18 | 0x40;
        v39 = (int)v18;
        if ( !v10 )
        {
LABEL_55:
          PoolWithTagPriority = (ULONG_PTR)ExAllocatePoolWithTagPriority((POOL_TYPE)v18, a3, v19, v21);
          goto LABEL_59;
        }
        v10 |= 0x400uLL;
      }
    }
    else
    {
      ++dword_140C1385C;
    }
  }
  if ( !v10 )
    goto LABEL_55;
  if ( a6 )
    PoolWithTagPriority = ExAllocatePool3(v10, a3, v19, a6, a7);
  else
    PoolWithTagPriority = ExAllocatePool2(v10, a3, v19);
LABEL_59:
  v24 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    ++dword_140C13848;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a8, 176LL);
    if ( v22 )
      RtlpInterlockedPushEntrySList(VerifierData + 5, v22);
    goto LABEL_28;
  }
  v25 = a8;
  if ( v35 && (VfRuleClasses & 8) != 0 )
  {
    v26 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    *((_DWORD *)&ViBugcheckWorkaroundLog + 2 * v26) = 1;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v26 + 1) = v25;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v26 + 2) = PoolWithTagPriority;
  }
  v27 = 0;
  _InterlockedIncrement(&dword_140C13834);
  if ( (unsigned int)ExIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v27 = 1;
LABEL_71:
    _InterlockedIncrement(&dword_140C13838);
    goto LABEL_72;
  }
  if ( a3 > 0xFE0 )
    goto LABEL_71;
LABEL_72:
  v28 = Tag;
  if ( v22 )
  {
    v29 = (unsigned int)v39;
    *((_QWORD *)&v22->Next + 1) = v25;
    v22->Next = (_SLIST_ENTRY *)(v24 | v27);
    v30 = (_SLIST_ENTRY *)v38;
    if ( !v27 )
      v30 = (_SLIST_ENTRY *)a3;
    *((_QWORD *)&v22[1].Next + 1) = v28;
    v22[1].Next = v30;
    ViPostPoolAllocation(v22, v29);
  }
  if ( (VfRuleClasses & 8) != 0 )
  {
    if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
    {
      v31 = v36;
      v32 = &DifpPoolTags;
      while ( *(_DWORD *)v32 != (_DWORD)v28 )
      {
        ++v31;
        v32 = (__int128 *)((char *)v32 + 4);
        if ( v31 >= DifpPoolTagsSize )
          goto LABEL_83;
      }
    }
    ViPtLogStackTrace(v24, (unsigned int)v28, v37, 0LL);
LABEL_83:
    if ( v22 && !v27 && (v39 & 0x400) == 0 )
      VfFillAllocatedMemory((void *)v24);
  }
  return (PVOID)v24;
}
