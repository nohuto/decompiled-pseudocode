PSLIST_ENTRY __fastcall IopAllocateIrpPrivate(__int64 a1, char a2, char a3)
{
  char v3; // r13
  char v5; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  int v7; // edx
  PSLIST_ENTRY Pool2; // rbx
  unsigned __int16 v9; // si
  __int64 v10; // r12
  __int16 v11; // si
  _GENERAL_LOOKASIDE *L; // r12
  char v13; // r14
  char v14; // r14
  unsigned __int8 ApcStateIndex; // cl
  _SLIST_ENTRY **v16; // rcx
  char v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v5 = a2;
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
  {
    v5 = a2 + 2;
    v3 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (IopIrpStackProfilerFlags & 3) != 0 && (IopIrpStackProfilerFlags & 4) != 0 && v5 < 20 )
  {
    ++CurrentPrcb->IoIrpStackProfilerCurrent.Profile[v5];
    v7 = CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps + 1;
    CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps = v7;
    if ( CurrentPrcb->IoIrpStackProfilerCurrent.Profile[v5] - CurrentPrcb->IoIrpStackProfilerPrevious.Profile[v5] > IopIrpStackProfilerMinSizeThreshold
      && v7 - CurrentPrcb->IoIrpStackProfilerPrevious.TotalIrps > IopIrpStackProfilerSampleSize )
    {
      _m_prefetchw(&IopIrpStackProfilerFlags);
      if ( (_InterlockedAnd(&IopIrpStackProfilerFlags, 0xFFFFFFFB) & 4) != 0 )
        KiInsertQueueDpc((ULONG_PTR)&IopIrpStackProfilerDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  Pool2 = 0LL;
  v18 = 0;
  v9 = 72 * v5 + 208;
  if ( v5 > (char)IopLargeIrpStackLocations || a3 && CurrentPrcb->LookasideIrpFloat <= 0 )
    goto LABEL_32;
  v18 = 4;
  if ( v5 == 1 )
  {
    v19 = 0LL;
    v10 = 2048LL;
  }
  else
  {
    if ( v5 > (char)IopMediumIrpStackLocations )
    {
      v19 = 2LL;
      v10 = 2080LL;
      v11 = 9 * (char)IopLargeIrpStackLocations;
    }
    else
    {
      v19 = 1LL;
      v10 = 2064LL;
      v11 = 9 * (char)IopMediumIrpStackLocations;
    }
    v9 = 8 * v11 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v10);
  ++L->TotalAllocates;
  Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !Pool2 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v19].L;
    ++L->TotalAllocates;
    Pool2 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !Pool2 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 && Pool2 )
  {
    if ( *((_QWORD *)&Pool2[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * v5 + 208) )
    {
      v9 = *((_QWORD *)&Pool2[3].Next + 1);
      v13 = 0;
      goto LABEL_19;
    }
    ++L->TotalFrees;
    ExFreePoolWithTag(Pool2, 0);
    v13 = 0;
  }
  else
  {
LABEL_32:
    v13 = 0;
    if ( Pool2 )
    {
LABEL_19:
      if ( a3 && IopIrpCreditsEnabled > 1 )
      {
        _InterlockedDecrement(&CurrentPrcb->LookasideIrpFloat);
        v13 = 8;
      }
      a3 = 0;
      goto LABEL_21;
    }
  }
  Pool2 = (PSLIST_ENTRY)ExAllocatePool2((a3 != 0) + 66LL, v9, 544240201LL);
  if ( !Pool2 )
    return 0LL;
LABEL_21:
  memset(Pool2, 0, v9);
  v14 = v18 | v13;
  LOWORD(Pool2->Next) = 6;
  BYTE2(Pool2[4].Next) = v5;
  BYTE3(Pool2[4].Next) = v5 + 1;
  WORD1(Pool2->Next) = v9;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&Pool2[2].Next + 1) = Pool2 + 2;
  Pool2[2].Next = Pool2 + 2;
  BYTE6(Pool2[4].Next) = ApcStateIndex;
  v16 = &Pool2[4 * v5 + 13].Next + v5;
  *((_QWORD *)&Pool2[11].Next + 1) = v16;
  WORD2(Pool2->Next) = CurrentPrcb->Number;
  HIBYTE(Pool2[4].Next) = v14;
  if ( a3 )
    HIBYTE(Pool2[4].Next) = v14 | 1;
  if ( v3 )
  {
    BYTE3(Pool2[4].Next) -= 2;
    BYTE2(Pool2[4].Next) -= 2;
    *((_QWORD *)&Pool2[11].Next + 1) = v16 - 18;
    *((_QWORD *)&Pool2[12].Next + 1) = v16 - 18;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(Pool2);
  }
  return Pool2;
}
