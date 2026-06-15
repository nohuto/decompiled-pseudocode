/*
 * XREFs of sub_180123868 @ 0x180123868
 * Callers:
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180123868(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 *a7,
        void **a8,
        __int64 a9)
{
  __int64 v10; // rdx
  int v11; // r8d
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // r9d
  _WORD *v15; // rcx
  __int64 v16; // rax
  int v17; // r9d
  _WORD *v18; // rcx
  _BYTE v20[32]; // [rsp+30h] [rbp-51h] BYREF
  _WORD *v21; // [rsp+50h] [rbp-31h]
  int v22; // [rsp+58h] [rbp-29h]
  int v23; // [rsp+5Ch] [rbp-25h]
  _WORD *v24; // [rsp+60h] [rbp-21h]
  int v25; // [rsp+68h] [rbp-19h]
  int v26; // [rsp+6Ch] [rbp-15h]
  __int64 v27; // [rsp+70h] [rbp-11h]
  __int64 v28; // [rsp+78h] [rbp-9h]
  _WORD *v29; // [rsp+80h] [rbp-1h]
  int v30; // [rsp+88h] [rbp+7h]
  int v31; // [rsp+8Ch] [rbp+Bh]
  __int64 v32; // [rsp+90h] [rbp+Fh]
  __int64 v33; // [rsp+98h] [rbp+17h]

  v32 = a9;
  v10 = -1LL;
  v33 = 4LL;
  v11 = 2;
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
  v29 = v12;
  v30 = v14;
  v31 = 0;
  v27 = *a7;
  v28 = 16LL;
  v15 = *a6;
  if ( *a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &unk_18015C744;
    v17 = 2;
  }
  v24 = v15;
  v25 = v17;
  v26 = 0;
  v18 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v18[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v18 = &unk_18015C744;
  }
  v21 = v18;
  v22 = v11;
  v23 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 7, (__int64)v20);
}
