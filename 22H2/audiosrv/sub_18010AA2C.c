/*
 * XREFs of sub_18010AA2C @ 0x18010AA2C
 * Callers:
 *     sub_18010AFAC @ 0x18010AFAC (sub_18010AFAC.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010AA2C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const CHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rcx
  const CHAR *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-81h] BYREF
  const CHAR *v17; // [rsp+50h] [rbp-61h]
  int v18; // [rsp+58h] [rbp-59h]
  int v19; // [rsp+5Ch] [rbp-55h]
  __int64 v20; // [rsp+60h] [rbp-51h]
  __int64 v21; // [rsp+68h] [rbp-49h]
  __int64 v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h]
  __int64 v24; // [rsp+80h] [rbp-31h]
  __int64 v25; // [rsp+88h] [rbp-29h]
  __int64 v26; // [rsp+90h] [rbp-21h]
  __int64 v27; // [rsp+98h] [rbp-19h]
  __int64 v28; // [rsp+A0h] [rbp-11h]
  __int64 v29; // [rsp+A8h] [rbp-9h]
  __int64 v30; // [rsp+B0h] [rbp-1h]
  __int64 v31; // [rsp+B8h] [rbp+7h]

  v30 = a11;
  v28 = a10;
  v26 = a9;
  v31 = 8LL;
  v29 = 4LL;
  v27 = 4LL;
  v11 = *a8;
  v22 = a7;
  v20 = a6;
  v24 = v11;
  v25 = 16LL;
  v23 = 8LL;
  v12 = *a5;
  v21 = 4LL;
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = MultiByteStr;
    v14 = 1;
  }
  v18 = v14;
  v17 = v12;
  v19 = 0;
  return sub_180109634((__int64)&CallbackContext, a2, 0LL, 0LL, 9u, &v16);
}
