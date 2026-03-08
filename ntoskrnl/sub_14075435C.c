/*
 * XREFs of sub_14075435C @ 0x14075435C
 * Callers:
 *     sub_1407538E4 @ 0x1407538E4 (sub_1407538E4.c)
 *     sub_140753A9C @ 0x140753A9C (sub_140753A9C.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 *     sub_140A4B164 @ 0x140A4B164 (sub_140A4B164.c)
 *     sub_140A4B34C @ 0x140A4B34C (sub_140A4B34C.c)
 * Callees:
 *     sub_1402C4640 @ 0x1402C4640 (sub_1402C4640.c)
 *     sub_1402C49C0 @ 0x1402C49C0 (sub_1402C49C0.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14075435C(
        int a1,
        char *a2,
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

  v19 = &off_140009660;
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
    sub_1402C4640((__int64)&v19, a2, a3, a4, v18, a6, a9);
  else
    sub_1402C49C0((__int64)&v19, a2, a3, a4, v18, a6, a9);
  return 0LL;
}
