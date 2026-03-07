__int64 __fastcall PnpGetMappedPropertyLocalesDispatch(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 result; // rax
  unsigned int v13; // r11d
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+6Ch] [rbp-14h]
  __int64 v21; // [rsp+74h] [rbp-Ch]
  int v22; // [rsp+7Ch] [rbp-4h]

  v14 = 0LL;
  v17 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  result = PnpCtxGetObjectDispatchCallback(a1, a3, &v14);
  if ( (int)result >= 0 )
  {
    if ( v14 )
    {
      v15[1] = a5;
      v16 = a7;
      v15[2] = a6;
      v18 = a8;
      v19 = a9;
      v15[0] = a4;
      return v14(a1, a2, v13, 7LL, v15);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
