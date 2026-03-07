__int64 __fastcall PnpGetMappedPropertyKeysDispatch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 result; // rax
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF

  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  result = PnpCtxGetObjectDispatchCallback(a1, a3, &v14);
  if ( (int)result >= 0 )
  {
    if ( v14 )
    {
      LODWORD(v15[6]) = 0;
      v15[1] = a5;
      v15[3] = a7;
      LOBYTE(v15[2]) = a6;
      LODWORD(v15[4]) = a8;
      v15[5] = a9;
      v15[0] = a4;
      return v14(a1, a2, a3, 6LL, v15);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
