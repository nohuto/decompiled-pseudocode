/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x1C01FBC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256AE0;
  if ( qword_1C0256AE0 )
    return (__int64 (*)(void))qword_1C0256AE0();
  return result;
}
