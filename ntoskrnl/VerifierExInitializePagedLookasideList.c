/*
 * XREFs of VerifierExInitializePagedLookasideList @ 0x140ADF0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

PVOID (__stdcall *__fastcall VerifierExInitializePagedLookasideList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int16 a7))(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int16 v8; // r10
  PVOID (__stdcall *result)(POOL_TYPE, SIZE_T, ULONG); // rax
  void *v10; // rax

  v8 = 0;
  if ( (VfRuleClasses & 1) == 0 )
    v8 = a7;
  pXdvExInitializePagedLookasideList(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    v8,
    1,
    (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ExInitializePagedLookasideListInternal);
  result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))(unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 1) != 0 )
  {
    result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))ExFreePool;
    if ( *(void (__stdcall **)(PVOID))(a1 + 56) == ExFreePool )
    {
      result = *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48);
      if ( result == ExAllocatePoolWithTag )
      {
        v10 = VerifierExAllocatePoolWithTag;
      }
      else
      {
        if ( result != ExAllocatePoolWithQuotaTag )
          return result;
        v10 = VerifierExAllocatePoolWithQuotaTag;
      }
      *(_QWORD *)(a1 + 48) = v10;
      result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))VerifierExFreePool;
      *(_QWORD *)(a1 + 56) = VerifierExFreePool;
    }
  }
  return result;
}
