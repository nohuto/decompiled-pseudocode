/*
 * XREFs of sub_1800B6440 @ 0x1800B6440
 * Callers:
 *     sub_1800B6C00 @ 0x1800B6C00 (sub_1800B6C00.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800B6440(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _WORD *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  _BYTE v18[32]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  __int64 v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  __int64 v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  __int64 v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  _WORD *v27; // [rsp+90h] [rbp-39h]
  int v28; // [rsp+98h] [rbp-31h]
  int v29; // [rsp+9Ch] [rbp-2Dh]
  __int64 v30; // [rsp+A0h] [rbp-29h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  __int64 v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  __int64 v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]

  v34 = a12;
  v32 = a11;
  v30 = a10;
  v35 = 8LL;
  v33 = 8LL;
  v31 = 4LL;
  v14 = *a9;
  if ( *a9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &unk_18015C744;
    v16 = 2;
  }
  v25 = a8;
  v23 = a7;
  v21 = a6;
  v19 = a5;
  v27 = v14;
  v28 = v16;
  v29 = 0;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 10, (__int64)v18);
}
