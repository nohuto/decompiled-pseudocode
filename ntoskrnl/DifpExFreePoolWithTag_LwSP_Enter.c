/*
 * XREFs of DifpExFreePoolWithTag_LwSP_Enter @ 0x140AE4B90
 * Callers:
 *     <none>
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14060CCD8 (ExIsSpecialPoolAddress.c)
 */

__int64 __fastcall DifpExFreePoolWithTag_LwSP_Enter(__int64 a1)
{
  __int64 result; // rax

  result = ExIsSpecialPoolAddress(*(_QWORD *)(a1 + 16));
  if ( (_DWORD)result )
    _InterlockedIncrement64(&LwSPAllocatedSpecialPools);
  DifpSpecialPoolEnabled = 0;
  return result;
}
