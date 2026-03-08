/*
 * XREFs of VerifierExAllocatePool @ 0x140ACD8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     ExAllocatePool @ 0x1402B6080 (ExAllocatePool.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePool(int PoolType, SIZE_T NumberOfBytes)
{
  __int32 v3; // ebx
  PVOID result; // rax
  POOL_TYPE v6; // edi
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = PoolType & 0x10;
  if ( (PoolType & 2) == 0
    && (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)ViFnAutoFailInject("ExAllocatePool") )
  {
    if ( !v3 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v6 = PoolType & 0xFFFFFFEF;
  if ( !v3 )
    v6 = PoolType;
  if ( (MmVerifierData & 0x2000000) != 0 )
    VfCheckPoolType(PoolType, retaddr, 0);
  if ( VfExAllocPoolInternal == pXdvExAllocatePool || !pXdvExAllocatePool )
    result = ExAllocatePool(v6, NumberOfBytes);
  else
    result = (PVOID)pXdvExAllocatePool(
                      v6 | 0x80u,
                      0LL,
                      NumberOfBytes,
                      1885434455LL,
                      32,
                      0LL,
                      0,
                      retaddr,
                      (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))VfHandlePoolAlloc);
  if ( !result && v3 )
    goto LABEL_18;
  return result;
}
