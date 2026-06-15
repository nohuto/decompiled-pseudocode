/*
 * XREFs of sub_1800E1520 @ 0x1800E1520
 * Callers:
 *     sub_1800E1E10 @ 0x1800E1E10 (sub_1800E1E10.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_1800BD9FC @ 0x1800BD9FC (sub_1800BD9FC.c)
 *     sub_1800D7B5C @ 0x1800D7B5C (sub_1800D7B5C.c)
 */

__int64 __fastcall sub_1800E1520(__int64 a1)
{
  _DWORD *v2; // r8
  __int64 v3; // r9
  void **v4; // rax
  void *v5; // rcx
  void **v6; // rax
  void *v7; // rcx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  if ( *v2 > 4u )
  {
    v4 = *(void ***)(a1 + 8);
    if ( v4 )
      v5 = *v4;
    else
      v5 = 0LL;
    v10 = *(_DWORD *)a1;
    v11 = v5;
    sub_1800BD9FC((__int64)v2, byte_1801675C3, (__int64)v2, v3, (__int64)&v10, &v11);
  }
  v6 = *(void ***)(a1 + 8);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0LL;
  result = sub_1800D7B5C(v7);
  if ( (int)result < 0 )
    return sub_18006D26C((int)retaddr, 192, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp", result);
  return result;
}
