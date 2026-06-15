/*
 * XREFs of sub_1800011E4 @ 0x1800011E4
 * Callers:
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

__int64 __fastcall sub_1800011E4(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        void **a8)
{
  __int64 v9; // rcx
  int v10; // r9d
  _WORD *v11; // rdx
  __int64 v12; // rax
  int v13; // r8d
  _WORD *v14; // rdx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-19h]
  __int64 v18; // [rsp+58h] [rbp-11h]
  __int64 v19; // [rsp+60h] [rbp-9h]
  __int64 v20; // [rsp+68h] [rbp-1h]
  _WORD *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  _WORD *v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]

  v9 = -1LL;
  v10 = 2;
  v11 = *a8;
  if ( *a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_18015C744;
    v13 = 2;
  }
  v24 = v11;
  v25 = v13;
  v26 = 0;
  v14 = *a7;
  if ( *a7 )
  {
    do
      ++v9;
    while ( v14[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v14 = &unk_18015C744;
  }
  v19 = a6;
  v17 = a5;
  v21 = v14;
  v22 = v10;
  v23 = 0;
  v20 = 4LL;
  v18 = 4LL;
  return sub_180109634((int)&dword_18019C4F0, a2, 0, 0, 6u, &v16);
}
