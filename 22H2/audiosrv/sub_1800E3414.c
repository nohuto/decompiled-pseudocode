/*
 * XREFs of sub_1800E3414 @ 0x1800E3414
 * Callers:
 *     sub_18002FD00 @ 0x18002FD00 (sub_18002FD00.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_35 @ 0x1800E27FA (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_35.c)
 * Callees:
 *     sub_180033AB0 @ 0x180033AB0 (sub_180033AB0.c)
 */

__int64 __fastcall sub_1800E3414(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_180033AB0(result);
  }
  return result;
}
