__int64 __fastcall PnpGetMappedPropertyDispatch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 result; // rax
  unsigned int v15; // r11d
  __int64 (__fastcall *v16[2])(_QWORD, _QWORD, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[5]; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+78h] [rbp-8h]
  int v22; // [rsp+7Ch] [rbp-4h]

  v16[0] = 0LL;
  v19 = 0;
  v22 = 0;
  result = PnpCtxGetObjectDispatchCallback(a1, a3, v16);
  if ( (int)result >= 0 )
  {
    if ( v16[0] )
    {
      v17[1] = a5;
      v17[2] = a6;
      v17[3] = a7;
      v18 = a9;
      v17[4] = a8;
      v20 = a10;
      v21 = a11;
      v17[0] = a4;
      return v16[0](a1, a2, v15, 8LL, v17);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
