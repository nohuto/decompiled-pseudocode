/*
 * XREFs of CmpExpandPathInfo @ 0x14073A0C4
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpComputeComponentHashes @ 0x140739D80 (CmpComputeComponentHashes.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall CmpExpandPathInfo(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  unsigned int v4; // edi
  PSLIST_ENTRY v5; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v4 = 0;
  v5 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v5 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v5 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v5
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v5 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_2:
    LODWORD(v5->Next) = CurrentPrcb->Number;
  }
  if ( v5 )
  {
    memset(v5, 0, 0x1E0uLL);
    *(_QWORD *)(a1 + 160) = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
