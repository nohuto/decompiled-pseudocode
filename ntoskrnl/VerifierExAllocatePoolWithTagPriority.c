/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x140ACDE80
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x1402E1F00 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithTagPriority(int PoolType, SIZE_T NumberOfBytes, ULONG Tag, __int32 Priority)
{
  __int32 v5; // ebx
  PVOID result; // rax
  POOL_TYPE v10; // edi
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v5 = PoolType & 0x10;
  if ( (PoolType & 2) == 0
    && (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)ViFnAutoFailInject("ExAllocatePoolWithTagPriority") )
  {
    if ( !v5 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v10 = PoolType & 0xFFFFFFEF;
  if ( !v5 )
    v10 = PoolType;
  if ( (MmVerifierData & 0x2000000) != 0 )
    VfCheckPoolType(PoolType, retaddr, 0);
  if ( (char *)VfExAllocPoolInternal == (char *)pXdvExAllocatePoolWithTagPriority || !pXdvExAllocatePoolWithTagPriority )
    result = ExAllocatePoolWithTagPriority(v10, NumberOfBytes, Tag, (EX_POOL_PRIORITY)Priority);
  else
    result = (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v10 | 0x80u,
                      0,
                      NumberOfBytes,
                      Tag,
                      Priority,
                      0LL,
                      0,
                      retaddr,
                      (__int64)VfHandlePoolAlloc);
  if ( !result && v5 )
    goto LABEL_18;
  return result;
}
