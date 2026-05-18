/*
 * XREFs of sub_1800A1C00 @ 0x1800A1C00
 * Callers:
 *     sub_1800A10C8 @ 0x1800A10C8 (sub_1800A10C8.c)
 * Callees:
 *     sub_18009C790 @ 0x18009C790 (sub_18009C790.c)
 *     sub_18009EE70 @ 0x18009EE70 (sub_18009EE70.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A1C00(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_18009C790((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_18009EE70(v4 + 4);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
