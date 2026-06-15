/*
 * XREFs of sub_1800D0BB4 @ 0x1800D0BB4
 * Callers:
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_18 @ 0x1800D1158 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800D1158.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1800D0BB4(void **a1)
{
  void *v1; // rcx
  PVOID result; // rax

  v1 = *a1;
  if ( v1 )
    return RtlFreeSid(v1);
  return result;
}
