/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x1C023DA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029B840;
  if ( qword_1C029B840 )
    return (__int64 (*)(void))qword_1C029B840();
  return result;
}
