/*
 * XREFs of sub_1800B779C @ 0x1800B779C
 * Callers:
 *     sub_180050904 @ 0x180050904 (sub_180050904.c)
 *     sub_1800B9DCC @ 0x1800B9DCC (sub_1800B9DCC.c)
 *     sub_1800F40E0 @ 0x1800F40E0 (sub_1800F40E0.c)
 *     sub_180126640 @ 0x180126640 (sub_180126640.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800B779C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7)
{
  _WORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  _BYTE v13[32]; // [rsp+30h] [rbp-68h] BYREF
  _WORD *v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+5Ch] [rbp-3Ch]
  __int64 v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  __int64 v19; // [rsp+70h] [rbp-28h]
  __int64 v20; // [rsp+78h] [rbp-20h]

  v19 = a7;
  v17 = a6;
  v20 = 4LL;
  v18 = 4LL;
  v9 = *a5;
  if ( *a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &unk_18015C744;
    v11 = 2;
  }
  v14 = v9;
  v15 = v11;
  v16 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 5, (__int64)v13);
}
