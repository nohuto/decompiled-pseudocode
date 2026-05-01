/*
 * XREFs of ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18012704C
 * Callers:
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x18011AF40 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180128900 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     ?seekoff@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x180128D70 (-seekoff@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@_JHH@Z.c)
 *     ?seekpos@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x180128E60 (-seekpos@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@V32@H@Z.c)
 *     ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x180129030 (-uflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHXZ.c)
 *     ?xsgetn@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z @ 0x1801296D0 (-xsgetn@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filebuf::_Reset_back(__int64 a1)
{
  __int64 result; // rax

  result = std::streambuf::eback();
  if ( result == a1 + 112 )
    return std::streambuf::setg(a1, *(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 144));
  return result;
}
