/*
 * XREFs of sub_1801183B4 @ 0x1801183B4
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801183B4(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  _WORD *v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  _WORD *v17; // rdx
  _BYTE v19[32]; // [rsp+30h] [rbp-69h] BYREF
  _WORD *v20; // [rsp+50h] [rbp-49h]
  int v21; // [rsp+58h] [rbp-41h]
  int v22; // [rsp+5Ch] [rbp-3Dh]
  _WORD *v23; // [rsp+60h] [rbp-39h]
  int v24; // [rsp+68h] [rbp-31h]
  int v25; // [rsp+6Ch] [rbp-2Dh]
  __int64 v26; // [rsp+70h] [rbp-29h]
  __int64 v27; // [rsp+78h] [rbp-21h]
  __int64 v28; // [rsp+80h] [rbp-19h]
  __int64 v29; // [rsp+88h] [rbp-11h]
  __int64 v30; // [rsp+90h] [rbp-9h]
  __int64 v31; // [rsp+98h] [rbp-1h]
  __int64 v32; // [rsp+A0h] [rbp+7h]
  __int64 v33; // [rsp+A8h] [rbp+Fh]

  v33 = 16LL;
  v31 = 4LL;
  v29 = 4LL;
  v11 = *a10;
  v12 = 2;
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v32 = v11;
  v13 = -1LL;
  v27 = 2LL;
  v14 = *a6;
  if ( *a6 )
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
  v23 = v14;
  v24 = v16;
  v25 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v17[v13] );
    v12 = 2 * v13 + 2;
  }
  else
  {
    v17 = &unk_18015C744;
  }
  v20 = v17;
  v21 = v12;
  v22 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 8, (__int64)v19);
}
