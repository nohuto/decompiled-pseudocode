/*
 * XREFs of sub_1800BD9FC @ 0x1800BD9FC
 * Callers:
 *     sub_1800BE690 @ 0x1800BE690 (sub_1800BE690.c)
 *     sub_1800E1520 @ 0x1800E1520 (sub_1800E1520.c)
 *     sub_1800E15FC @ 0x1800E15FC (sub_1800E15FC.c)
 *     sub_1800F1A50 @ 0x1800F1A50 (sub_1800F1A50.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800BD9FC(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  _WORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  _BYTE v12[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  _WORD *v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]

  v8 = *a6;
  if ( *a6 )
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
  v15 = v8;
  v13 = a5;
  v16 = v10;
  v14 = 4LL;
  v17 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 4, (__int64)v12);
}
