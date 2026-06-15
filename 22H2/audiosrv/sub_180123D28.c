/*
 * XREFs of sub_180123D28 @ 0x180123D28
 * Callers:
 *     sub_18005B5E8 @ 0x18005B5E8 (sub_18005B5E8.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180123D28(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  _BYTE v14[32]; // [rsp+30h] [rbp-51h] BYREF
  _WORD *v15; // [rsp+50h] [rbp-31h]
  int v16; // [rsp+58h] [rbp-29h]
  int v17; // [rsp+5Ch] [rbp-25h]
  __int64 v18; // [rsp+60h] [rbp-21h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  __int64 v25; // [rsp+98h] [rbp+17h]

  v24 = a9;
  v22 = a8;
  v20 = a7;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 4LL;
  v18 = *a6;
  v19 = 16LL;
  v10 = *a5;
  if ( *a5 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_18015C744;
    v12 = 2;
  }
  v15 = v10;
  v16 = v12;
  v17 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 7, (__int64)v14);
}
