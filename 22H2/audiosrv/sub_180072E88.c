/*
 * XREFs of sub_180072E88 @ 0x180072E88
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     ?dtor$2@?0??_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@AEAY0M@_W@Z@4HA @ 0x18007601A (-dtor$2@-0--_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@A.c)
 * Callees:
 *     sub_18007303C @ 0x18007303C (sub_18007303C.c)
 */

__int64 __fastcall sub_180072E88(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return sub_18007303C();
  }
  return result;
}
