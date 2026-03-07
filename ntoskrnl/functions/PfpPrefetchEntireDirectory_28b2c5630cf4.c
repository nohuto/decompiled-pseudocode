__int64 PfpPrefetchEntireDirectory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rsi
  int v12; // edi
  _QWORD *v13; // rdi
  __int64 v15; // [rsp+68h] [rbp-9h] BYREF
  __int64 v16[2]; // [rsp+70h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+Fh] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+27h]
  va_list va; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va, a5);
  v15 = 0LL;
  v8 = *(_QWORD *)(a5 + 8);
  v9 = *(_QWORD *)(a5 + 16);
  Handle = 0LL;
  v19 = 0x200000000LL;
  *(_OWORD *)v16 = 0LL;
  *(_OWORD *)Object = 0LL;
  v10 = PfpOpenHandleCreate((__int64)&Handle, a1, v9, v8, 1048577, 0x4021u, 0, a2);
  v11 = v19;
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a4 )
    {
      v13 = Object[0];
      if ( (int)IopQueryXxxInformation(Object[0], (__int64)&v15, (__int64)va, 1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = v15;
        *(_QWORD *)a4 = v13[3];
        *(_DWORD *)(a4 + 8) = v11;
      }
    }
    v12 = IopXxxControlFile(Handle, (__int64)v16, 590112, a3, 8 * *(_DWORD *)(a3 + 4) + 16, 0LL, 0, 0);
    if ( v12 >= 0 )
      v12 = 0;
  }
  if ( (v11 & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&Handle, a1);
  return (unsigned int)v12;
}
