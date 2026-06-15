/*
 * XREFs of sub_1801252B8 @ 0x1801252B8
 * Callers:
 *     sub_180125838 @ 0x180125838 (sub_180125838.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801252B8(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7)
{
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  _BYTE v12[32]; // [rsp+30h] [rbp-68h] BYREF
  _WORD *v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]

  v18 = a7;
  v16 = a6;
  v19 = 4LL;
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
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 5, (__int64)v12);
}
