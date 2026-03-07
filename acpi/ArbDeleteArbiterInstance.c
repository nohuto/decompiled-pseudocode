__int64 __fastcall ArbDeleteArbiterInstance(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _RTL_RANGE_LIST *v4; // rcx
  struct _RTL_RANGE_LIST *v5; // rcx
  void *v6; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 304);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  if ( v4 )
  {
    RtlFreeRangeList_0(v4);
    ExFreePoolWithTag(*(PVOID *)(a1 + 40), 0);
  }
  v5 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  if ( v5 )
  {
    RtlFreeRangeList_0(v5);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v6 = *(void **)(a1 + 112);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  ArbFreeOrderingList(a1 + 56);
  return ArbFreeOrderingList(a1 + 72);
}
