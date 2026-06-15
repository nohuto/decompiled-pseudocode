/*
 * XREFs of sub_1800D4A5C @ 0x1800D4A5C
 * Callers:
 *     sub_1800DA150 @ 0x1800DA150 (sub_1800DA150.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D4A5C(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5, __int64 a6)
{
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  _BYTE v12[32]; // [rsp+30h] [rbp-58h] BYREF
  _WORD *v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+68h] [rbp-20h]

  v16 = a6;
  v17 = 8LL;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &unk_18015C744;
    v10 = 2;
  }
  v13 = v8;
  v14 = v10;
  v15 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 4, (__int64)v12);
}
