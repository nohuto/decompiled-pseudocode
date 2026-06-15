/*
 * XREFs of sub_1801098D0 @ 0x1801098D0
 * Callers:
 *     sub_180107980 @ 0x180107980 (sub_180107980.c)
 *     sub_18010DE28 @ 0x18010DE28 (sub_18010DE28.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_1801098D0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  _WORD *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &unk_18015C744;
    v9 = 2;
  }
  v14 = v7;
  v12 = a5;
  v15 = v9;
  v13 = 4LL;
  v16 = 0;
  return sub_180109634((__int64)&CallbackContext, a2, 0LL, 0LL, 4u, &v11);
}
