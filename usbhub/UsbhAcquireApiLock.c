__int64 __fastcall UsbhAcquireApiLock(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rax
  int v7; // esi
  _DWORD *v8; // rax
  int v9; // eax
  __int64 v10; // r10

  v3 = a2;
  Log(a1, 32, 1095774507, 0LL, a2);
  v6 = FdoExt(a1);
  v7 = 0;
  KeWaitForSingleObject(v6 + 1230, Executive, 0, 0, 0LL);
  v8 = FdoExt(a1);
  v9 = UsbhAcquireFdoPnpLock(a1, (__int64)(v8 + 434), 11, v3, 1);
  v10 = v9;
  *a3 = 1;
  if ( v9 != 5 )
  {
    if ( v9 == 6 )
      Log(a1, 32, 1095774563, 0LL, v3);
    v7 = -1073741810;
  }
  Log(a1, 32, 1095774497, v7, v10);
  return (unsigned int)v7;
}
