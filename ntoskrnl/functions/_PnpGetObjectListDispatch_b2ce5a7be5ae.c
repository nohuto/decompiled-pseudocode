__int64 __fastcall PnpGetObjectListDispatch(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int16 a8)
{
  __int64 result; // rax
  unsigned int v11; // edx
  __int64 v12; // r10
  int v13; // r11d
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-50h] BYREF
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
  if ( a8 )
    return 3221225485LL;
  result = PnpCtxGetObjectDispatchCallback(a1, a2, &v14);
  if ( (int)result >= 0 )
  {
    if ( v14 )
    {
      v15[2] = a5;
      v16 = a6;
      v18 = a7;
      v15[0] = a3;
      v15[1] = a4;
      v19 = v13;
      return v14(v12, 0LL, v11, 5LL, v15);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
