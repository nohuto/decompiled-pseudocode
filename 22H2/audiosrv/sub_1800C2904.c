/*
 * XREFs of sub_1800C2904 @ 0x1800C2904
 * Callers:
 *     sub_18007B2B0 @ 0x18007B2B0 (sub_18007B2B0.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 *     sub_1800C31A0 @ 0x1800C31A0 (sub_1800C31A0.c)
 *     sub_1800C32C1 @ 0x1800C32C1 (sub_1800C32C1.c)
 *     ?dtor$1@?0??do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_N@Z@4HA @ 0x1800FB806 (-dtor$1@-0--do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-.c)
 *     sub_1800FC7DB @ 0x1800FC7DB (sub_1800FC7DB.c)
 * Callees:
 *     sub_1800C3110 @ 0x1800C3110 (sub_1800C3110.c)
 */

__int64 __fastcall sub_1800C2904(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    sub_1800C3110(v2, a1[1]);
    return _o_free(*a1);
  }
  return result;
}
