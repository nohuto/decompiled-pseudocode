/*
 * XREFs of ApiSetEditionProcessForegroundPriorityChanged @ 0x1C005BF84
 * Callers:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C005B770 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionProcessForegroundPriorityChanged(__int64 a1, unsigned int a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D76F8;
  if ( qword_1C02D76F8 )
  {
    result = (__int64 (*)(void))qword_1C02D76F8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02D7700;
      if ( qword_1C02D7700 )
        return (__int64 (*)(void))qword_1C02D7700(a1, a2);
    }
  }
  return result;
}
