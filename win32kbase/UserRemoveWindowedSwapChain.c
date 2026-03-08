/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C0272150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserRemoveWindowedSwapChain())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D7290;
  if ( qword_1C02D7290 )
    return (__int64 (*)(void))qword_1C02D7290();
  return result;
}
