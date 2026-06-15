/*
 * XREFs of sub_18010CB7C @ 0x18010CB7C
 * Callers:
 *     sub_18010E270 @ 0x18010E270 (sub_18010E270.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010CB7C(__int64 a1, __int64 a2, int a3, int a4)
{
  ULONG result; // eax
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)CallbackContext > 5 )
  {
    v5 = a4;
    v12 = &v5;
    v6 = a3;
    v10 = &v6;
    v8 = a2;
    v13 = 4LL;
    v11 = 4LL;
    v9 = 16LL;
    return sub_180109634((__int64)&CallbackContext, (unsigned __int8 *)dword_18016985C, 0LL, 0LL, 5u, &v7);
  }
  return result;
}
