/*
 * XREFs of sub_180084BD0 @ 0x180084BD0
 * Callers:
 *     sub_180085CBC @ 0x180085CBC (sub_180085CBC.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x180126127 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 * Callees:
 *     sub_180084C3C @ 0x180084C3C (sub_180084C3C.c)
 *     sub_180085BC4 @ 0x180085BC4 (sub_180085BC4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180084BD0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_180084C3C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_180085BC4(v6 + 4);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
