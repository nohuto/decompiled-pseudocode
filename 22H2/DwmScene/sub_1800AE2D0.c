/*
 * XREFs of sub_1800AE2D0 @ 0x1800AE2D0
 * Callers:
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 * Callees:
 *     sub_180072BF0 @ 0x180072BF0 (sub_180072BF0.c)
 *     sub_1800A65B0 @ 0x1800A65B0 (sub_1800A65B0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800AE2D0(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_1800A65B0((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_180072BF0(v4 + 4, 0);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
