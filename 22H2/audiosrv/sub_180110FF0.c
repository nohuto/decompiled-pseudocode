/*
 * XREFs of sub_180110FF0 @ 0x180110FF0
 * Callers:
 *     ?dtor$1@?0??do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_N@Z@4HA_0 @ 0x18011371B (-dtor$1@-0--do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@_ea_18011371B.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180110FF0(_QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 24) )
  {
    *((_BYTE *)a1 + 24) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
  }
  return result;
}
