/*
 * XREFs of sub_1800E9378 @ 0x1800E9378
 * Callers:
 *     sub_18006FD50 @ 0x18006FD50 (sub_18006FD50.c)
 *     sub_18011F784 @ 0x18011F784 (sub_18011F784.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E9378(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5, void **a6)
{
  __int64 v8; // rcx
  int v9; // r9d
  _WORD *v10; // rdx
  __int64 v11; // rax
  int v12; // r8d
  _WORD *v13; // rdx
  _BYTE v15[32]; // [rsp+30h] [rbp-58h] BYREF
  _WORD *v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  _WORD *v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = 2;
  v10 = *a6;
  if ( *a6 )
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
  v19 = v10;
  v20 = v12;
  v21 = 0;
  v13 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v13[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v13 = &unk_18015C744;
  }
  v16 = v13;
  v17 = v9;
  v18 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 4, (__int64)v15);
}
