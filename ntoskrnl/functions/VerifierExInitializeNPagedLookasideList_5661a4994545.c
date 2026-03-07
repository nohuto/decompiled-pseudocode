PVOID (__stdcall *__fastcall VerifierExInitializeNPagedLookasideList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        __int16 a7))(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int16 v7; // bp
  PVOID (__stdcall *result)(POOL_TYPE, SIZE_T, ULONG); // rax
  void *v13; // rax
  __int16 v14; // [rsp+30h] [rbp-38h]
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  v7 = 0;
  if ( (VfRuleClasses & 1) == 0 )
    v7 = a7;
  if ( (VfRuleClasses & 0x2000000) != 0 )
    VfCheckPoolType(a4, retaddr, a6);
  v14 = v7;
  pXdvExInitializeNPagedLookasideList[0](
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    v14,
    1,
    (__int64)ExInitializeNPagedLookasideListInternal);
  result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))(unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 1) != 0 )
  {
    result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))ExFreePool;
    if ( *(void (__stdcall **)(PVOID))(a1 + 56) == ExFreePool )
    {
      result = *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48);
      if ( result == ExAllocatePoolWithTag )
      {
        v13 = VerifierExAllocatePoolWithTag;
      }
      else
      {
        if ( result != ExAllocatePoolWithQuotaTag )
          return result;
        v13 = VerifierExAllocatePoolWithQuotaTag;
      }
      *(_QWORD *)(a1 + 48) = v13;
      result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))VerifierExFreePool;
      *(_QWORD *)(a1 + 56) = VerifierExFreePool;
    }
  }
  return result;
}
