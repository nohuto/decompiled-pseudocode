/*
 * XREFs of sub_1801246E0 @ 0x1801246E0
 * Callers:
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_18004C628 @ 0x18004C628 (sub_18004C628.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801246E0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // edx
  _WORD *v9; // rcx
  __int64 v10; // rax
  _BYTE v12[32]; // [rsp+30h] [rbp-68h] BYREF
  _WORD *v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]

  v18 = a7;
  v8 = 2;
  v16 = a6;
  v19 = 2LL;
  v17 = 2LL;
  v9 = *a5;
  if ( *a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v8 = 2 * v10 + 2;
  }
  else
  {
    v9 = &unk_18015C744;
  }
  v13 = v9;
  v14 = v8;
  v15 = 0;
  return sub_1800521E8((__int64)&dword_18019C448, a2, 0LL, 0LL, 5, (__int64)v12);
}
