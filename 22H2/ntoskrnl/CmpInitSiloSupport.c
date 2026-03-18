/*
 * XREFs of CmpInitSiloSupport @ 0x14080EB40
 * Callers:
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     CmInitServerSiloState @ 0x14080EBB4 (CmInitServerSiloState.c)
 *     PspStorageAllocSlot @ 0x14082150C (PspStorageAllocSlot.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot(&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
