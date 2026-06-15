/*
 * XREFs of sub_1800E29AC @ 0x1800E29AC
 * Callers:
 *     sub_1800E58D0 @ 0x1800E58D0 (sub_1800E58D0.c)
 *     sub_1800E5AC0 @ 0x1800E5AC0 (sub_1800E5AC0.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E29AC(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5, const CHAR **a6)
{
  __int64 v8; // rdx
  const CHAR *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  _WORD *v12; // rcx
  int v13; // eax
  _BYTE v15[32]; // [rsp+30h] [rbp-58h] BYREF
  _WORD *v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  const CHAR *v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = *a6;
  if ( *a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = MultiByteStr;
    v11 = 1;
  }
  v20 = v11;
  v19 = v9;
  v21 = 0;
  v12 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v12[v8] );
    v13 = 2 * v8 + 2;
  }
  else
  {
    v12 = &unk_18015C744;
    v13 = 2;
  }
  v17 = v13;
  v16 = v12;
  v18 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 4, (__int64)v15);
}
