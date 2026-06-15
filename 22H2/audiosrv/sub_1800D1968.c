/*
 * XREFs of sub_1800D1968 @ 0x1800D1968
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_22 @ 0x18007A9A2 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_22.c)
 *     sub_18007B5B0 @ 0x18007B5B0 (sub_18007B5B0.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 */

__int64 __fastcall sub_1800D1968(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 result; // rax

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    sub_1800583E4(*(__int64 **)a1, *(__int64 **)(a1 + 8));
    result = sub_1800472E0((__int64)v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
