/*
 * XREFs of sub_18000455C @ 0x18000455C
 * Callers:
 *     sub_180005E08 @ 0x180005E08 (sub_180005E08.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 *     sub_180075AE7 @ 0x180075AE7 (sub_180075AE7.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA @ 0x180075B82 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV.c)
 *     sub_180075B94 @ 0x180075B94 (sub_180075B94.c)
 *     ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z @ 0x1800D5360 (--_Gcritical_section@Concurrency@@QEAAPEAXI@Z.c)
 * Callees:
 *     sub_1800361D0 @ 0x1800361D0 (sub_1800361D0.c)
 *     sub_1800D569C @ 0x1800D569C (sub_1800D569C.c)
 */

__int64 __fastcall sub_18000455C(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx

  v2 = a1 + 3;
  *a1 = &off_180146410;
  sub_1800361D0(a1 + 3);
  _o_free(a1[1]);
  v3 = 0LL;
  a1[1] = 0LL;
  if ( *v2 )
  {
    sub_1800D569C(*v2, v2[1]);
    _o_free(*v2);
    v3 = a1[1];
  }
  *a1 = &off_180146440;
  return _o_free(v3);
}
