/*
 * XREFs of sub_180134768 @ 0x180134768
 * Callers:
 *     sub_180076132 @ 0x180076132 (sub_180076132.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_3 @ 0x180076156 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180076156.c)
 *     sub_180136CB1 @ 0x180136CB1 (sub_180136CB1.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_180134768(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
