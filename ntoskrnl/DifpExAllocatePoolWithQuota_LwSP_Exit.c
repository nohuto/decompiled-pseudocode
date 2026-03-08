/*
 * XREFs of DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140AE4B60
 * Callers:
 *     <none>
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14060CCD8 (ExIsSpecialPoolAddress.c)
 */

__int64 __fastcall DifpExAllocatePoolWithQuota_LwSP_Exit(__int64 a1)
{
  __int64 result; // rax

  result = ExIsSpecialPoolAddress(*(_QWORD *)(a1 + 64));
  if ( (_DWORD)result )
    _InterlockedIncrement64(&LwSPAllocatedSpecialPools);
  DifpSpecialPoolEnabled = 0;
  return result;
}
