/*
 * XREFs of sub_180124630 @ 0x180124630
 * Callers:
 *     sub_18004C628 @ 0x18004C628 (sub_18004C628.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180124630(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5, __int64 a6)
{
  int v7; // edx
  _WORD *v8; // rcx
  __int64 v9; // rax
  _BYTE v11[32]; // [rsp+30h] [rbp-58h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+5Ch] [rbp-2Ch]
  __int64 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]

  v15 = a6;
  v7 = 2;
  v16 = 2LL;
  v8 = *a5;
  if ( *a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v7 = 2 * v9 + 2;
  }
  else
  {
    v8 = &unk_18015C744;
  }
  v12 = v8;
  v13 = v7;
  v14 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 4, (__int64)v11);
}
