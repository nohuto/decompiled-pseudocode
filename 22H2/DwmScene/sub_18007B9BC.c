/*
 * XREFs of sub_18007B9BC @ 0x18007B9BC
 * Callers:
 *     sub_18007BC3C @ 0x18007BC3C (sub_18007BC3C.c)
 * Callees:
 *     sub_18006D178 @ 0x18006D178 (sub_18006D178.c)
 *     sub_180072244 @ 0x180072244 (sub_180072244.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18007B9BC(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_18006D178((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_180072244((__int64)(v4 + 4));
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
