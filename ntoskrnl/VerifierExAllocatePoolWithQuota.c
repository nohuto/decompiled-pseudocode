/*
 * XREFs of VerifierExAllocatePoolWithQuota @ 0x140ACDCD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithQuota @ 0x140604860 (ExAllocatePoolWithQuota.c)
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuota(int PoolType, SIZE_T NumberOfBytes)
{
  POOL_TYPE v2; // ebx
  __int32 v4; // edi
  PVOID result; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = PoolType & 0xFFFFFFF7;
  v4 = PoolType & 8;
  if ( (PoolType & 8) == 0 )
    v2 = PoolType;
  if ( (MmVerifierData & 0x2000000) != 0 )
    VfCheckPoolType(PoolType, retaddr, 0);
  if ( (char *)VfExAllocPoolInternal == (char *)pXdvExAllocatePoolWithTagPriority || !pXdvExAllocatePoolWithTagPriority )
    result = ExAllocatePoolWithQuota(v2, NumberOfBytes);
  else
    result = (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v2 | 0x80u,
                      0,
                      NumberOfBytes,
                      1885434455,
                      32,
                      0LL,
                      0,
                      retaddr,
                      (__int64)VfHandlePoolAlloc);
  if ( !result && !v4 )
    RtlRaiseStatus(-1073741670);
  return result;
}
