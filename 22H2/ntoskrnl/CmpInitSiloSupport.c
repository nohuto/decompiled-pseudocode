/*
 * XREFs of CmpInitSiloSupport @ 0x1407A5B28
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x1407906D8 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x1407A5B58 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
