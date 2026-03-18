/*
 * XREFs of ApiSetEditionProcessForegroundPriorityChanged @ 0x1C006656C
 * Callers:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0065CC0 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionProcessForegroundPriorityChanged(__int64 a1, unsigned int a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296580;
  if ( qword_1C0296580 )
  {
    result = (__int64 (*)(void))qword_1C0296580();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296588;
      if ( qword_1C0296588 )
        return (__int64 (*)(void))qword_1C0296588(a1, a2);
    }
  }
  return result;
}
