/*
 * XREFs of sub_180065B6C @ 0x180065B6C
 * Callers:
 *     sub_180064758 @ 0x180064758 (sub_180064758.c)
 *     sub_18006487C @ 0x18006487C (sub_18006487C.c)
 *     sub_18006D054 @ 0x18006D054 (sub_18006D054.c)
 *     sub_18006D2B0 @ 0x18006D2B0 (sub_18006D2B0.c)
 *     sub_1800D23B0 @ 0x1800D23B0 (sub_1800D23B0.c)
 *     sub_1800D4C64 @ 0x1800D4C64 (sub_1800D4C64.c)
 *     sub_1800D4FE8 @ 0x1800D4FE8 (sub_1800D4FE8.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180065B6C(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[5];
  if ( v4 >= 0x10 )
  {
    v5 = a1[2];
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x180065BE5LL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[4] = 0LL;
  a1[5] = 15LL;
  *((_BYTE *)a1 + 16) = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
