/*
 * XREFs of sub_180124A0C @ 0x180124A0C
 * Callers:
 *     sub_180126640 @ 0x180126640 (sub_180126640.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180124A0C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 *a12)
{
  __int64 v13; // rcx
  int v14; // edx
  _WORD *v15; // rcx
  __int64 v16; // rax
  _BYTE v18[32]; // [rsp+30h] [rbp-99h] BYREF
  _WORD *v19; // [rsp+50h] [rbp-79h]
  int v20; // [rsp+58h] [rbp-71h]
  int v21; // [rsp+5Ch] [rbp-6Dh]
  __int64 v22; // [rsp+60h] [rbp-69h]
  __int64 v23; // [rsp+68h] [rbp-61h]
  __int64 v24; // [rsp+70h] [rbp-59h]
  __int64 v25; // [rsp+78h] [rbp-51h]
  __int64 v26; // [rsp+80h] [rbp-49h]
  __int64 v27; // [rsp+88h] [rbp-41h]
  __int64 v28; // [rsp+90h] [rbp-39h]
  __int64 v29; // [rsp+98h] [rbp-31h]
  __int64 v30; // [rsp+A0h] [rbp-29h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  __int64 v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  __int64 v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]

  v35 = 16LL;
  v33 = 4LL;
  v27 = 4LL;
  v13 = *a12;
  v14 = 2;
  v32 = a11;
  v30 = a10;
  v28 = a9;
  v26 = a8;
  v24 = a7;
  v22 = a6;
  v34 = v13;
  v31 = 2LL;
  v29 = 2LL;
  v15 = *a5;
  v25 = 4LL;
  v23 = 2LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v14 = 2 * v16 + 2;
  }
  else
  {
    v15 = &unk_18015C744;
  }
  v19 = v15;
  v20 = v14;
  v21 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 10, (__int64)v18);
}
