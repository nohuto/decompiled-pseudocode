__int64 __fastcall IopQueryDeviceState(int a1, _DWORD *a2)
{
  __int64 result; // rax
  _WORD v5[36]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  v5[0] = 5147;
  result = IopSynchronousCall(a1, (unsigned int)v5, -1073741637, 0, (__int64)&v6);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}
