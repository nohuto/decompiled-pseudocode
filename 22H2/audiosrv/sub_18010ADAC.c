/*
 * XREFs of sub_18010ADAC @ 0x18010ADAC
 * Callers:
 *     sub_18010B7C4 @ 0x18010B7C4 (sub_18010B7C4.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010ADAC(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rcx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-51h] BYREF
  __int64 v12; // [rsp+50h] [rbp-31h]
  __int64 v13; // [rsp+58h] [rbp-29h]
  __int64 v14; // [rsp+60h] [rbp-21h]
  __int64 v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  __int64 v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  __int64 v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  __int64 v21; // [rsp+98h] [rbp+17h]

  v20 = a9;
  v18 = a8;
  v16 = a7;
  v21 = 1LL;
  v19 = 4LL;
  v17 = 4LL;
  v9 = *a6;
  v12 = a5;
  v14 = v9;
  v15 = 16LL;
  v13 = 8LL;
  return sub_180109634((__int64)&CallbackContext, a2, 0LL, 0LL, 7u, &v11);
}
