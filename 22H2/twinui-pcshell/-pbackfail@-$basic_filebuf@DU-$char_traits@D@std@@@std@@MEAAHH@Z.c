/*
 * XREFs of ?pbackfail@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180128920
 * Callers:
 *     <none>
 * Callees:
 *     ?_Set_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180126F28 (-_Set_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::filebuf::pbackfail(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rbx

  if ( ((__int64 (*)(void))std::streambuf::gptr)() )
  {
    v4 = std::streambuf::eback(a1);
    if ( v4 < std::streambuf::gptr(a1) && (a2 == -1 || *(unsigned __int8 *)(std::streambuf::gptr(a1) - 1) == a2) )
    {
      std::streambuf::_Gndec(a1);
      if ( a2 == -1 )
        return 0;
      return a2;
    }
  }
  if ( *(_QWORD *)(a1 + 128) && a2 != -1 )
  {
    if ( !*(_QWORD *)(a1 + 104) && (unsigned int)_o_ungetc((unsigned __int8)a2) != -1 )
      return a2;
    if ( std::streambuf::gptr(a1) != a1 + 112 )
    {
      *(_BYTE *)(a1 + 112) = a2;
      std::filebuf::_Set_back(a1);
      return a2;
    }
  }
  return 0xFFFFFFFFLL;
}
