/*
 * XREFs of sub_1800D1640 @ 0x1800D1640
 * Callers:
 *     sub_180033330 @ 0x180033330 (sub_180033330.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D1640(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        __int64 a10)
{
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  _BYTE v16[32]; // [rsp+30h] [rbp-79h] BYREF
  __int64 *v17; // [rsp+50h] [rbp-59h]
  __int64 v18; // [rsp+58h] [rbp-51h]
  __int64 v19; // [rsp+60h] [rbp-49h]
  int v20; // [rsp+68h] [rbp-41h]
  int v21; // [rsp+6Ch] [rbp-3Dh]
  __int64 v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  _WORD *v26; // [rsp+90h] [rbp-19h]
  int v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+9Ch] [rbp-Dh]
  __int64 v29; // [rsp+A0h] [rbp-9h]
  __int64 v30; // [rsp+A8h] [rbp-1h]
  __int64 v31; // [rsp+B0h] [rbp+7h]
  __int64 v32; // [rsp+B8h] [rbp+Fh]

  v31 = a10;
  v29 = a9;
  v32 = 4LL;
  v30 = 4LL;
  v12 = *a8;
  if ( *a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &unk_18015C744;
    v14 = 2;
  }
  v24 = a7;
  v22 = a6;
  v26 = v12;
  v27 = v14;
  v28 = 0;
  v25 = 8LL;
  v19 = *a5;
  v20 = 4 * *((unsigned __int16 *)a5 + 4);
  v17 = a5 + 1;
  v23 = 1LL;
  v18 = 2LL;
  v21 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 9, (__int64)v16);
}
