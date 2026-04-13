/*
 * XREFs of ?_Tidy@?$numpunct@D@std@@AEAAXXZ @ 0x1800B7F88
 * Callers:
 *     _std::numpunct_char_::_Init_::_1_::catch$0 @ 0x1800DA23C (_std--numpunct_char_--_Init_--_1_--catch$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x1800CF7A4 (--_V@YAXPEAX@Z_0.c)
 */

void __fastcall std::numpunct<char>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
}
