/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x1C0271530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D6048;
  if ( qword_1C02D6048 )
    return (__int64 (*)(void))qword_1C02D6048();
  return result;
}
