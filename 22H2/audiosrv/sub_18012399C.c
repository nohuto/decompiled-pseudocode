/*
 * XREFs of sub_18012399C @ 0x18012399C
 * Callers:
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18012399C(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5, __int64 *a6)
{
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  _BYTE v11[32]; // [rsp+30h] [rbp-58h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+58h] [rbp-30h]
  int v14; // [rsp+5Ch] [rbp-2Ch]
  __int64 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]

  v16 = 16LL;
  v15 = *a6;
  v7 = *a5;
  if ( *a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &unk_18015C744;
    v9 = 2;
  }
  v12 = v7;
  v13 = v9;
  v14 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 4, (__int64)v11);
}
