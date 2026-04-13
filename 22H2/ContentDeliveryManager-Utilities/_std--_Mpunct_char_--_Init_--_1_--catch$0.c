/*
 * XREFs of _std::_Mpunct_char_::_Init_::_1_::catch$0 @ 0x1800DA749
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Mpunct@_W@std@@AEAAXXZ @ 0x1800C5258 (-_Tidy@-$_Mpunct@_W@std@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800CFD9C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Mpunct_char_::_Init_::_1_::catch_0(__int64 a1, __int64 a2)
{
  std::_Mpunct<wchar_t>::_Tidy(*(void ***)(a2 + 144));
  throw;
}
