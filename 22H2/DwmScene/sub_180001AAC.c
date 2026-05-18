/*
 * XREFs of sub_180001AAC @ 0x180001AAC
 * Callers:
 *     sub_1801141F0 @ 0x1801141F0 (sub_1801141F0.c)
 * Callees:
 *     sub_180002A58 @ 0x180002A58 (sub_180002A58.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001AAC(
        int a1,
        int a2,
        int a3,
        int a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        void **a9,
        void **a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  _BYTE *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  int v26; // edx
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h]
  int v31; // [rsp+5Ch] [rbp-A4h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  _BYTE *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  _BYTE *v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int64 v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]

  v52 = a15;
  v50 = a14;
  v17 = -1LL;
  v48 = a13;
  v46 = a12;
  v44 = a11;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 4LL;
  v18 = *a10;
  v47 = 4LL;
  v45 = 8LL;
  if ( v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &unk_180139BFA;
    v20 = 1;
  }
  v42 = v20;
  v41 = v18;
  v43 = 0;
  v21 = *a9;
  if ( *a9 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &unk_180139BFA;
    v23 = 1;
  }
  v39 = v23;
  v38 = v21;
  v40 = 0;
  v37 = 16LL;
  v36 = *a8;
  v35 = 16LL;
  v33 = 4LL;
  v24 = *a7;
  v32 = a6;
  v34 = v24;
  v25 = *a5;
  if ( *a5 )
  {
    do
      ++v17;
    while ( v25[v17] );
    v26 = v17 + 1;
  }
  else
  {
    v25 = &unk_180139BFA;
    v26 = 1;
  }
  v29 = v25;
  v30 = v26;
  v31 = 0;
  return sub_180002A58(a1, a2, a3, a4, 0xDu, &v28);
}
