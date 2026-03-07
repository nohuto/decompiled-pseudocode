PVOID __fastcall VerifierExAllocatePoolWithTag(unsigned int PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int32 v4; // ebx
  PVOID result; // rax
  POOL_TYPE v8; // edi
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = PoolType & 0x10;
  if ( (PoolType & 2) == 0
    && (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)ViFnAutoFailInject("ExAllocatePoolWithTag") )
  {
    if ( !v4 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v8 = PoolType & 0xFFFFFFEF;
  if ( !v4 )
    v8 = PoolType;
  if ( (MmVerifierData & 0x2000000) != 0 )
    VfCheckPoolType(PoolType, retaddr, 0LL);
  if ( VfExAllocPoolInternal == pXdvExAllocatePoolWithTag || !pXdvExAllocatePoolWithTag )
    result = ExAllocatePoolWithTag(v8, NumberOfBytes, Tag);
  else
    result = (PVOID)pXdvExAllocatePoolWithTag(
                      v8 | 0x80u,
                      0,
                      NumberOfBytes,
                      Tag,
                      32,
                      0LL,
                      0,
                      retaddr,
                      (__int64)VfHandlePoolAlloc);
  if ( !result && v4 )
    goto LABEL_18;
  return result;
}
