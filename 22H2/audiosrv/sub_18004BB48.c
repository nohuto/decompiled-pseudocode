/*
 * XREFs of sub_18004BB48 @ 0x18004BB48
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180012550 @ 0x180012550 (sub_180012550.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_180046A30 @ 0x180046A30 (sub_180046A30.c)
 *     sub_1800487C4 @ 0x1800487C4 (sub_1800487C4.c)
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_180049670 @ 0x180049670 (sub_180049670.c)
 *     sub_18004A5C4 @ 0x18004A5C4 (sub_18004A5C4.c)
 *     sub_1800D652C @ 0x1800D652C (sub_1800D652C.c)
 *     sub_18011A3A4 @ 0x18011A3A4 (sub_18011A3A4.c)
 *     sub_18011F15C @ 0x18011F15C (sub_18011F15C.c)
 *     sub_180122780 @ 0x180122780 (sub_180122780.c)
 * Callees:
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 */

__int64 __fastcall sub_18004BB48(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax

  if ( a1 )
  {
    v2 = sub_18001FEF0(a1);
    if ( v2 >= 0 )
    {
      v2 = 1;
      if ( ((*(_WORD *)a1 - 1) & 0xFFFD) == 0 )
        return 0;
      if ( *(_WORD *)a1 == 0xFFFE )
      {
        v3 = 0x10000000000001LL - *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 24) == 0x10000000000001LL )
          v3 = 0x719B3800AA000080LL - *(_QWORD *)(a1 + 32);
        if ( !v3 )
          return 0;
        v4 = 0x10000000000003LL - *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 24) == 0x10000000000003LL )
          v4 = 0x719B3800AA000080LL - *(_QWORD *)(a1 + 32);
        if ( !v4 )
          return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v2;
}
