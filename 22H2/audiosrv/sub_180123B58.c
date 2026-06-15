/*
 * XREFs of sub_180123B58 @ 0x180123B58
 * Callers:
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180123B58(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 *a6,
        void **a7,
        __int64 a8)
{
  __int64 v9; // rdx
  int v10; // r9d
  _WORD *v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  _WORD *v14; // rcx
  _BYTE v16[32]; // [rsp+30h] [rbp-39h] BYREF
  _WORD *v17; // [rsp+50h] [rbp-19h]
  int v18; // [rsp+58h] [rbp-11h]
  int v19; // [rsp+5Ch] [rbp-Dh]
  __int64 v20; // [rsp+60h] [rbp-9h]
  __int64 v21; // [rsp+68h] [rbp-1h]
  _WORD *v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]
  __int64 v25; // [rsp+80h] [rbp+17h]
  __int64 v26; // [rsp+88h] [rbp+1Fh]

  v25 = a8;
  v9 = -1LL;
  v26 = 4LL;
  v10 = 2;
  v11 = *a7;
  if ( *a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_18015C744;
    v13 = 2;
  }
  v22 = v11;
  v23 = v13;
  v24 = 0;
  v20 = *a6;
  v21 = 16LL;
  v14 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( v14[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v14 = &unk_18015C744;
  }
  v17 = v14;
  v18 = v10;
  v19 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 6, (__int64)v16);
}
