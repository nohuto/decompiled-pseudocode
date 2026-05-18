/*
 * XREFs of sub_180001410 @ 0x180001410
 * Callers:
 *     sub_1801148B0 @ 0x1801148B0 (sub_1801148B0.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001410(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        void **a9,
        void **a10)
{
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  _BYTE *v20; // rcx
  int v21; // edx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-79h] BYREF
  _BYTE *v24; // [rsp+50h] [rbp-59h]
  int v25; // [rsp+58h] [rbp-51h]
  int v26; // [rsp+5Ch] [rbp-4Dh]
  __int64 v27; // [rsp+60h] [rbp-49h]
  int v28; // [rsp+68h] [rbp-41h]
  int v29; // [rsp+6Ch] [rbp-3Dh]
  __int64 v30; // [rsp+70h] [rbp-39h]
  int v31; // [rsp+78h] [rbp-31h]
  int v32; // [rsp+7Ch] [rbp-2Dh]
  __int64 v33; // [rsp+80h] [rbp-29h]
  int v34; // [rsp+88h] [rbp-21h]
  int v35; // [rsp+8Ch] [rbp-1Dh]
  _BYTE *v36; // [rsp+90h] [rbp-19h]
  int v37; // [rsp+98h] [rbp-11h]
  int v38; // [rsp+9Ch] [rbp-Dh]
  _BYTE *v39; // [rsp+A0h] [rbp-9h]
  int v40; // [rsp+A8h] [rbp-1h]
  int v41; // [rsp+ACh] [rbp+3h]

  v12 = -1LL;
  v13 = *a10;
  if ( *a10 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_180139BFA;
    v15 = 1;
  }
  v41 = 0;
  v40 = v15;
  v39 = v13;
  v16 = *a9;
  if ( *a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &unk_180139BFA;
    v18 = 1;
  }
  v38 = 0;
  v35 = 0;
  v32 = 0;
  v29 = 0;
  v37 = v18;
  v33 = a8;
  v36 = v16;
  v34 = 4;
  v31 = 16;
  v19 = *a7;
  v27 = a6;
  v30 = v19;
  v28 = 4;
  v20 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v20[v12] );
    v21 = v12 + 1;
  }
  else
  {
    v20 = &unk_180139BFA;
    v21 = 1;
  }
  v26 = 0;
  v24 = v20;
  v25 = v21;
  return sub_180002A58(a1, a2, a3, a4, 8u, &v23);
}
