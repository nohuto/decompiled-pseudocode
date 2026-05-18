/*
 * XREFs of sub_18009C790 @ 0x18009C790
 * Callers:
 *     sub_18009C65C @ 0x18009C65C (sub_18009C65C.c)
 *     sub_18009C790 @ 0x18009C790 (sub_18009C790.c)
 *     sub_1800A1C00 @ 0x1800A1C00 (sub_1800A1C00.c)
 * Callees:
 *     sub_18009C790 @ 0x18009C790 (sub_18009C790.c)
 *     sub_18009EE70 @ 0x18009EE70 (sub_18009EE70.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18009C790(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18009C790(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18009EE70(v6 + 4);
  }
  return result;
}
