/*
 * XREFs of ?_Initcvt@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXAEBV?$codecvt@DDU_Mbstatet@@@2@@Z @ 0x18012692C
 * Callers:
 *     ?imbue@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAXAEBVlocale@2@@Z @ 0x180128260 (-imbue@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAXAEBVlocale@2@@Z.c)
 *     ?open@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z @ 0x1801286CC (-open@-$basic_filebuf@DU-$char_traits@D@std@@@std@@QEAAPEAV12@PEBGHH@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::filebuf::_Initcvt(__int64 a1, std::codecvt_base *a2)
{
  char result; // al

  result = std::codecvt_base::always_noconv(a2);
  if ( result )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 104) = a2;
    return std::streambuf::_Init(a1);
  }
  return result;
}
