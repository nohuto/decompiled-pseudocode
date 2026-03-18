/*
 * XREFs of ApiSetEditionImmActivateLayout @ 0x1C0206788
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionImmActivateLayout(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02966D0;
  if ( qword_1C02966D0 )
  {
    result = (__int64 (*)(void))qword_1C02966D0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02966D8;
      if ( qword_1C02966D8 )
        return (__int64 (*)(void))qword_1C02966D8(a1, a2);
    }
  }
  return result;
}
