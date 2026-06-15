/*
 * XREFs of ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_8 @ 0x180079F4A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall `std::time_put<char,std::ostreambuf_iterator<char>>::do_put'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *(void **)(a2 + 120);
  if ( v2 )
    return sub_180033A70(v2);
  return result;
}
