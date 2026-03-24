/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C00C0F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserRemoveWindowedSwapChain())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256E38;
  if ( qword_1C0256E38 )
    return (__int64 (*)(void))qword_1C0256E38();
  return result;
}
