/*
 * XREFs of sub_1800E14C4 @ 0x1800E14C4
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180076D40 @ 0x180076D40 (sub_180076D40.c)
 *     unknown_libname_50 @ 0x18007A6E9 (unknown_libname_50.c)
 *     sub_1800E1B0E @ 0x1800E1B0E (sub_1800E1B0E.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_70 @ 0x18011BD82 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_70.c)
 *     sub_18011FCA2 @ 0x18011FCA2 (sub_18011FCA2.c)
 *     sub_180131B9A @ 0x180131B9A (sub_180131B9A.c)
 *     unknown_libname_361 @ 0x180131BB2 (unknown_libname_361.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800E14C4(__int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
