__int64 __fastcall PnpSetMappedPropertyDispatch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  unsigned int v14; // r11d
  __int64 (__fastcall *v15[2])(_QWORD, _QWORD, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+5Ch] [rbp-24h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+6Ch] [rbp-14h]
  __int128 v22; // [rsp+70h] [rbp-10h]

  v15[0] = 0LL;
  v18 = 0;
  v22 = 0LL;
  result = PnpCtxGetObjectDispatchCallback(a1, a3, v15);
  if ( (int)result >= 0 )
  {
    if ( v15[0] )
    {
      v16[1] = a5;
      v16[2] = a6;
      v19 = a8;
      v17 = a7;
      v20 = a9;
      v21 = a10;
      v16[0] = a4;
      return v15[0](a1, a2, v14, 9LL, v16);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
