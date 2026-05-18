/*
 * XREFs of sub_180022184 @ 0x180022184
 * Callers:
 *     sub_1800220E8 @ 0x1800220E8 (sub_1800220E8.c)
 *     sub_180062520 @ 0x180062520 (sub_180062520.c)
 *     sub_180062DE8 @ 0x180062DE8 (sub_180062DE8.c)
 *     sub_18008BD60 @ 0x18008BD60 (sub_18008BD60.c)
 *     sub_1800915D4 @ 0x1800915D4 (sub_1800915D4.c)
 *     sub_18009988C @ 0x18009988C (sub_18009988C.c)
 *     sub_18009B244 @ 0x18009B244 (sub_18009B244.c)
 *     sub_18009EF18 @ 0x18009EF18 (sub_18009EF18.c)
 *     sub_1800CAA68 @ 0x1800CAA68 (sub_1800CAA68.c)
 *     sub_1800CC4C4 @ 0x1800CC4C4 (sub_1800CC4C4.c)
 *     sub_1800CD134 @ 0x1800CD134 (sub_1800CD134.c)
 *     sub_1800CDDB0 @ 0x1800CDDB0 (sub_1800CDDB0.c)
 *     sub_1800F07E0 @ 0x1800F07E0 (sub_1800F07E0.c)
 *     sub_180124A9E @ 0x180124A9E (sub_180124A9E.c)
 *     unknown_libname_58 @ 0x1801262B1 (unknown_libname_58.c)
 *     sub_180126A46 @ 0x180126A46 (sub_180126A46.c)
 *     sub_180127D0B @ 0x180127D0B (sub_180127D0B.c)
 * Callees:
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180022184(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rcx

  v1 = (__int64 *)(a1 + 80);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(__int64 **)(v3 + 8);
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      sub_180020058((__int64)v1, (__int64)v1, (__int64 *)v4[2]);
      v5 = v4;
      v4 = (__int64 *)*v4;
      j_j__o_free(v5);
    }
    while ( !*((_BYTE *)v4 + 25) );
    v3 = *v1;
  }
  j_j__o_free(v3);
  return sub_180062318(a1);
}
