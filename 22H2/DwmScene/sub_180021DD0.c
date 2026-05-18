/*
 * XREFs of sub_180021DD0 @ 0x180021DD0
 * Callers:
 *     sub_180120A42 @ 0x180120A42 (sub_180120A42.c)
 *     sub_180120A55 @ 0x180120A55 (sub_180120A55.c)
 *     sub_180127F78 @ 0x180127F78 (sub_180127F78.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_2 @ 0x180129949 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_2.c)
 * Callees:
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180021DD0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 *v4; // rcx

  v2 = *a1;
  v3 = *(__int64 **)(v2 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180020058((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      j_j__o_free(v4);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return j_j__o_free(v2);
}
