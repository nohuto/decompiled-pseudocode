/*
 * XREFs of sub_1407E4280 @ 0x1407E4280
 * Callers:
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_140A0F4D4 @ 0x140A0F4D4 (sub_140A0F4D4.c)
 *     sub_140A0F68C @ 0x140A0F68C (sub_140A0F68C.c)
 *     sub_140A102DC @ 0x140A102DC (sub_140A102DC.c)
 *     sub_140A103F4 @ 0x140A103F4 (sub_140A103F4.c)
 * Callees:
 *     sub_140361700 @ 0x140361700 (sub_140361700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406491E0 @ 0x1406491E0 (sub_1406491E0.c)
 */

__int64 __fastcall sub_1407E4280(
        int a1,
        _BYTE *a2,
        char *a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        __int128 *a7,
        __int64 a8,
        _BYTE *a9)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v18; // [rsp+20h] [rbp-E8h]
  _UNKNOWN **v19; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-C0h]
  __int128 v21; // [rsp+58h] [rbp-B0h]
  __int128 v22; // [rsp+68h] [rbp-A0h]
  __int128 v23; // [rsp+78h] [rbp-90h]
  __int128 v24; // [rsp+88h] [rbp-80h]
  __int128 v25; // [rsp+98h] [rbp-70h]
  __int128 v26; // [rsp+A8h] [rbp-60h]
  __int128 v27; // [rsp+B8h] [rbp-50h]
  __int128 v28; // [rsp+C8h] [rbp-40h]
  __int128 v29; // [rsp+D8h] [rbp-30h]

  v19 = &off_140009978;
  v9 = a7[1];
  v20 = *a7;
  v10 = a7[2];
  v21 = v9;
  v11 = a7[3];
  v22 = v10;
  v12 = a7[4];
  v23 = v11;
  v13 = a7[5];
  v24 = v12;
  v14 = a7[6];
  v25 = v13;
  v15 = a7[8];
  v26 = v14;
  v27 = a7[7];
  v16 = a7[9];
  v28 = v15;
  v29 = v16;
  v18 = *a5;
  if ( a1 )
    sub_1406491E0((__int64)&v19, a2, a3, a4, v18, a6, a9);
  else
    sub_140361700((__int64)&v19, a2, a3, a4, v18, a6, a9);
  return 0LL;
}
