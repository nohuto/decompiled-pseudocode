/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x1C0232670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0294ED8;
  if ( qword_1C0294ED8 )
    return (__int64 (*)(void))qword_1C0294ED8();
  return result;
}
