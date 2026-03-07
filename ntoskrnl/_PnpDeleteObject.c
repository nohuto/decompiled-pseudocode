__int64 __fastcall PnpDeleteObject(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD, __int64, int, _DWORD *); // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD v14[20]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  memset(v14, 0, sizeof(v14));
  v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD *))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
  if ( v6 )
  {
    v7 = v6(*(_QWORD *)&PiPnpRtlCtx, a2, a3, 4LL, 1, v14);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = PnpDeleteObjectDispatch(v3, a2, a3, v14[4]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v10 = v6(v3, a2, a3, 4LL, 2, v14);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14[0];
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
