/*
 * XREFs of UserSetWindowedSwapChainApiExt @ 0x1C00C0BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserSetWindowedSwapChainApiExt())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257E30;
  if ( qword_1C0257E30 )
    return (__int64 (*)(void))qword_1C0257E30();
  return result;
}
