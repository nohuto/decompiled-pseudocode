/*
 * XREFs of sub_1800E9530 @ 0x1800E9530
 * Callers:
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E9530(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10)
{
  int v12; // edx
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rax
  _BYTE v17[32]; // [rsp+30h] [rbp-69h] BYREF
  _WORD *v18; // [rsp+50h] [rbp-49h]
  int v19; // [rsp+58h] [rbp-41h]
  int v20; // [rsp+5Ch] [rbp-3Dh]
  __int64 v21; // [rsp+60h] [rbp-39h]
  __int64 v22; // [rsp+68h] [rbp-31h]
  __int64 v23; // [rsp+70h] [rbp-29h]
  __int64 v24; // [rsp+78h] [rbp-21h]
  __int64 v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  __int64 v27; // [rsp+90h] [rbp-9h]
  __int64 v28; // [rsp+98h] [rbp-1h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  __int64 v30; // [rsp+A8h] [rbp+Fh]

  v29 = a10;
  v30 = 4LL;
  v28 = 16LL;
  v12 = 2;
  v26 = 4LL;
  v13 = *a9;
  v25 = a8;
  v23 = a7;
  v21 = a6;
  v27 = v13;
  v24 = 4LL;
  v22 = 2LL;
  v14 = *a5;
  if ( *a5 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v12 = 2 * v15 + 2;
  }
  else
  {
    v14 = &unk_18015C744;
  }
  v18 = v14;
  v19 = v12;
  v20 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 8, (__int64)v17);
}
