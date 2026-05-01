/*
 * XREFs of ?_Set_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180127098
 * Callers:
 *     ?pbackfail@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180128A90 (-pbackfail@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filebuf::_Set_back(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 112;
  if ( ((__int64 (*)(void))std::streambuf::eback)() != a1 + 112 )
  {
    *(_QWORD *)(a1 + 136) = std::streambuf::eback(a1);
    *(_QWORD *)(a1 + 144) = std::streambuf::egptr(a1);
  }
  return std::streambuf::setg(a1, v2, v2, a1 + 113);
}
