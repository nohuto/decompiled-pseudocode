/*
 * XREFs of sub_1800D48F8 @ 0x1800D48F8
 * Callers:
 *     sub_1800D9D10 @ 0x1800D9D10 (sub_1800D9D10.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D48F8(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        void **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  _WORD *v19; // rcx
  __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // rcx
  _WORD *v23; // rcx
  _BYTE v25[32]; // [rsp+30h] [rbp-C9h] BYREF
  _WORD *v26; // [rsp+50h] [rbp-A9h]
  int v27; // [rsp+58h] [rbp-A1h]
  int v28; // [rsp+5Ch] [rbp-9Dh]
  __int64 v29; // [rsp+60h] [rbp-99h]
  __int64 v30; // [rsp+68h] [rbp-91h]
  __int64 v31; // [rsp+70h] [rbp-89h]
  __int64 v32; // [rsp+78h] [rbp-81h]
  __int64 v33; // [rsp+80h] [rbp-79h]
  __int64 v34; // [rsp+88h] [rbp-71h]
  __int64 v35; // [rsp+90h] [rbp-69h]
  __int64 v36; // [rsp+98h] [rbp-61h]
  _WORD *v37; // [rsp+A0h] [rbp-59h]
  int v38; // [rsp+A8h] [rbp-51h]
  int v39; // [rsp+ACh] [rbp-4Dh]
  __int64 v40; // [rsp+B0h] [rbp-49h]
  __int64 v41; // [rsp+B8h] [rbp-41h]
  __int64 v42; // [rsp+C0h] [rbp-39h]
  __int64 v43; // [rsp+C8h] [rbp-31h]
  __int64 v44; // [rsp+D0h] [rbp-29h]
  __int64 v45; // [rsp+D8h] [rbp-21h]
  __int64 v46; // [rsp+E0h] [rbp-19h]
  __int64 v47; // [rsp+E8h] [rbp-11h]

  v47 = 16LL;
  v45 = 4LL;
  v16 = -1LL;
  v43 = 4LL;
  v17 = *a14;
  v18 = 2;
  v44 = a13;
  v42 = a12;
  v40 = a11;
  v46 = v17;
  v41 = 2LL;
  v19 = *a10;
  if ( *a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &unk_18015C744;
    v21 = 2;
  }
  v35 = a9;
  v37 = v19;
  v38 = v21;
  v39 = 0;
  v22 = *a8;
  v31 = a7;
  v29 = a6;
  v33 = v22;
  v36 = 2LL;
  v34 = 16LL;
  v23 = *a5;
  v32 = 1LL;
  v30 = 4LL;
  if ( v23 )
  {
    do
      ++v16;
    while ( v23[v16] );
    v18 = 2 * v16 + 2;
  }
  else
  {
    v23 = &unk_18015C744;
  }
  v26 = v23;
  v27 = v18;
  v28 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 12, (__int64)v25);
}
