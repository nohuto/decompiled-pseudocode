LONG __fastcall IopConnectLinkTrackingPort(__int64 a1)
{
  int v1; // ebx
  PVOID Object; // [rsp+50h] [rbp+17h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+1Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+27h] BYREF
  int v7[2]; // [rsp+70h] [rbp+37h] BYREF
  int v8; // [rsp+78h] [rbp+3Fh]

  Handle = 0LL;
  v1 = 0;
  if ( !IopLinkTrackingServiceObject )
  {
    LODWORD(Object) = 0;
    *(_QWORD *)v7 = 0LL;
    v8 = 0;
    DestinationString = 0LL;
    if ( *(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
    {
      v7[1] = 2;
      LOWORD(v8) = 257;
      RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_PORT");
      v1 = NtSecureConnectPort(
             &Handle,
             (unsigned __int64)&DestinationString,
             (unsigned __int64)v7,
             0LL,
             0LL,
             0LL,
             &Object,
             0LL,
             0LL);
      if ( v1 >= 0 )
      {
        if ( (unsigned int)((_DWORD)Object - 128) > 0x80 )
        {
          NtClose(Handle);
          v1 = -1073741811;
        }
        else
        {
          Object = 0LL;
          v1 = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, 0, &Object, 0LL);
          IopLinkTrackingServiceObject = Object;
          NtClose(Handle);
        }
      }
    }
    else
    {
      v1 = -1073741772;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
