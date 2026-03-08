/*
 * XREFs of UserSetWindowedSwapChainApiExt @ 0x1C0272180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserSetWindowedSwapChainApiExt())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D7288;
  if ( qword_1C02D7288 )
    return (__int64 (*)(void))qword_1C02D7288();
  return result;
}
