/*
 * XREFs of ??$_Get_size_of_n@$0HI@@std@@YA_K_K@Z @ 0x180007524
 * Callers:
 *     ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x1801C82F0 (--$_Emplace_reallocate@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailS.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801A3990 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<120>(unsigned __int64 a1)
{
  if ( a1 > 0x222222222222222LL )
    std::_Throw_bad_array_new_length();
  return 120 * a1;
}
