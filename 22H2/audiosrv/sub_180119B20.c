/*
 * XREFs of sub_180119B20 @ 0x180119B20
 * Callers:
 *     sub_180115FD8 @ 0x180115FD8 (sub_180115FD8.c)
 *     sub_180116134 @ 0x180116134 (sub_180116134.c)
 *     sub_180117D48 @ 0x180117D48 (sub_180117D48.c)
 * Callees:
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 */

bool __fastcall sub_180119B20(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  int v4; // edx
  __int64 v5; // rcx
  __int128 v7; // [rsp+50h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v7 = v3;
  return (int)sub_18004AE9C(v5, v4, a2, &v7, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
