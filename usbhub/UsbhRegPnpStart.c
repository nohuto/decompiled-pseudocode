__int64 __fastcall UsbhRegPnpStart(__int64 a1)
{
  wchar_t **v2; // rbx
  __int64 v3; // rcx
  struct _DEVICE_OBJECT **v4; // rdi
  ULONG v6; // [rsp+30h] [rbp-28h]
  _DWORD v7[6]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v7[0] = 0;
  v8 = 0;
  v9 = 0;
  v2 = &HubInstanceKeyValues;
  v4 = (struct _DEVICE_OBJECT **)FdoExt(a1);
  if ( HubInstanceKeyValues )
  {
    do
    {
      if ( *((_DWORD *)v2 + 2) == 4 )
      {
        LOBYTE(v6) = *((_BYTE *)v2 + 12);
        if ( (int)UsbhGetPdoRegistryParameter(v4[149], *v2, v7, 4u, &v9, &v8, v6) >= 0 && v8 == 4 && v9 == 4 )
          ((void (__fastcall *)(__int64, wchar_t *, _DWORD *, __int64))v2[3])(a1, *v2, v7, 4LL);
      }
      v2 += 4;
    }
    while ( *v2 );
  }
  UsbhGetGlobalUxdSettings(v3, v4 + 647);
  return 0LL;
}
