/*
 * XREFs of unknown_libname_298 @ 0x1800E33C4
 * Callers:
 *     unknown_libname_33 @ 0x180076F00 (unknown_libname_33.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_3 @ 0x180076F7A (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180076F7A.c)
 *     unknown_libname_60 @ 0x18007B3D0 (unknown_libname_60.c)
 *     sub_18007B3F0 @ 0x18007B3F0 (sub_18007B3F0.c)
 *     sub_18007BC80 @ 0x18007BC80 (sub_18007BC80.c)
 *     sub_1800ED049 @ 0x1800ED049 (sub_1800ED049.c)
 *     sub_1800EDD44 @ 0x1800EDD44 (sub_1800EDD44.c)
 *     unknown_libname_117 @ 0x1800EDD50 (unknown_libname_117.c)
 * Callees:
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_298(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_1800E3CDC(v2);
  *a1 = 0LL;
  return result;
}
