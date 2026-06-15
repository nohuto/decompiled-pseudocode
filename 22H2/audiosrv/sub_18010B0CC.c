/*
 * XREFs of sub_18010B0CC @ 0x18010B0CC
 * Callers:
 *     sub_18010AE5C @ 0x18010AE5C (sub_18010AE5C.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_18010A4EC @ 0x18010A4EC (sub_18010A4EC.c)
 */

__int64 __fastcall sub_18010B0CC(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v5; // [rsp+30h] [rbp-19h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  __int64 v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]
  unsigned int *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  v5 = 0;
  sub_18010A4EC(*(_QWORD *)(a1 + 8), &v5);
  v2 = v5;
  if ( (unsigned int)CallbackContext > 5 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v16 = 0;
    v13 = 0;
    v10 = 0;
    v6 = v3;
    v14 = &v5;
    v11 = a1 + 16;
    v8 = &v6;
    v15 = 4;
    v12 = 16;
    v9 = 8;
    sub_180109634((__int64)&CallbackContext, (unsigned __int8 *)dword_180169389, 0LL, 0LL, 5u, &v7);
  }
  return v2;
}
