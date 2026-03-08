/*
 * XREFs of CmpInitSiloSupport @ 0x140816810
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x14080C8BC (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x140816884 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
