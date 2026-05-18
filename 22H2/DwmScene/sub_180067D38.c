/*
 * XREFs of sub_180067D38 @ 0x180067D38
 * Callers:
 *     sub_180066684 @ 0x180066684 (sub_180066684.c)
 *     sub_1800A10C8 @ 0x1800A10C8 (sub_1800A10C8.c)
 * Callees:
 *     sub_1800647C4 @ 0x1800647C4 (sub_1800647C4.c)
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180067D38(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_1800647C4((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_180065AF4(v4 + 4, 0);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
