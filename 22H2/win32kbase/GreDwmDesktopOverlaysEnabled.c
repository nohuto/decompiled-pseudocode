/*
 * XREFs of GreDwmDesktopOverlaysEnabled @ 0x1C01FBBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreDwmDesktopOverlaysEnabled())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0255AE0;
  if ( qword_1C0255AE0 )
    return (__int64 (*)(void))qword_1C0255AE0();
  return result;
}
