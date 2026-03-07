__int64 __fastcall CmRemovePanelDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  _QWORD v12[12]; // [rsp+40h] [rbp-88h] BYREF

  memset(v12, 0, 0x58uLL);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  v12[2] = a2;
  v12[3] = a3;
  if ( v6 )
  {
    v7 = v6(a1, a2, 6LL);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return LODWORD(v12[0]);
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmRemovePanelDeviceWorker(a1, a2, v12[3], &v12[4]);
  v9 = v8;
  if ( v6 )
  {
    LODWORD(v12[0]) = v8;
    v10 = v6(a1, a2, 6LL);
    if ( v10 != -1073741822 )
    {
      if ( v10 != -1073741536 )
      {
        if ( !v10 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      return LODWORD(v12[0]);
    }
  }
LABEL_8:
  if ( !LOBYTE(v12[4]) )
    PnpObjectRaiseDevicesChangeEvent(a1, a2, 6LL);
  return v9;
}
