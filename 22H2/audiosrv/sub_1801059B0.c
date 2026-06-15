/*
 * XREFs of sub_1801059B0 @ 0x1801059B0
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_51 @ 0x180106073 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_51.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

void __fastcall sub_1801059B0(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v1 )
    sub_180052600(v1);
}
