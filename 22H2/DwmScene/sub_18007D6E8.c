/*
 * XREFs of sub_18007D6E8 @ 0x18007D6E8
 * Callers:
 *     sub_18007D6E8 @ 0x18007D6E8 (sub_18007D6E8.c)
 *     sub_18007DA58 @ 0x18007DA58 (sub_18007DA58.c)
 * Callees:
 *     sub_18007C9F0 @ 0x18007C9F0 (sub_18007C9F0.c)
 *     sub_18007CB4C @ 0x18007CB4C (sub_18007CB4C.c)
 *     sub_18007D368 @ 0x18007D368 (sub_18007D368.c)
 *     sub_18007D6E8 @ 0x18007D6E8 (sub_18007D6E8.c)
 */

void __fastcall sub_18007D6E8(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, __int64))
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = a3 >> 1;
    v10 = a3 - (a3 >> 1);
    v11 = (__int64)&a1[2 * v10];
    if ( v10 > a5 )
    {
      sub_18007D6E8((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_18007D6E8((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_18007CB4C((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_18007CB4C((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_18007C9F0((__int64)a1, (__int64)&a1[2 * v10], (__int64)a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18007D368(a1, a2, (__int64 (__fastcall *)(__int128 *, __int64 *))a6);
  }
}
