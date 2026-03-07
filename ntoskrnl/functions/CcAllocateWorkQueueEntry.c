__int64 __fastcall CcAllocateWorkQueueEntry(__int64 a1, __int64 a2, __int64 a3, PSLIST_ENTRY *a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v10; // r10
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v10 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v10 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v10 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v10
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v10 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_2:
    LODWORD(v10->Next) = CurrentPrcb->Number;
  }
  *a4 = v10;
  if ( !v10 )
    return 3221225626LL;
  *((_QWORD *)&v10[8].Next + 1) = a1;
  v10[9].Next = (_SLIST_ENTRY *)a2;
  *((_QWORD *)&v10[9].Next + 1) = a3;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( a2 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8)) <= 1 )
      __fastfail(0xEu);
  }
  return 0LL;
}
