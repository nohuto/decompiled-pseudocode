/*
 * XREFs of sub_180079798 @ 0x180079798
 * Callers:
 *     sub_1800165CC @ 0x1800165CC (sub_1800165CC.c)
 * Callees:
 *     sub_18006BD7C @ 0x18006BD7C (sub_18006BD7C.c)
 */

__int128 *__fastcall sub_180079798(__int64 a1)
{
  __int128 *result; // rax
  __int128 v3; // xmm1
  bool v4; // zf
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1;
  *(_QWORD *)&v5 = sub_180078F80;
  DWORD2(v5) = 0;
  result = (__int128 *)sub_18006BD7C((__int64)v6, &v5, &v7);
  if ( *(_DWORD *)(a1 + 1192) || (v3 = *result, *result = 0LL, v4 = v6[2] == 0, *(_OWORD *)(a1 + 1184) = v3, !v4) )
  {
    _o_terminate();
    __debugbreak();
  }
  return result;
}
