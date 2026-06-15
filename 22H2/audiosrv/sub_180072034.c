/*
 * XREFs of sub_180072034 @ 0x180072034
 * Callers:
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_12 @ 0x18007C091 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_18007C091.c)
 * Callees:
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 */

void __fastcall sub_180072034(__int64 a1)
{
  int v1; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v1 = sub_18004C264(*(_QWORD *)a1, 0, **(_DWORD **)(a1 + 8), **(_QWORD **)(a1 + 16));
    if ( v1 < 0 )
      sub_18006D26C(
        (int)retaddr,
        8520,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v1);
  }
}
