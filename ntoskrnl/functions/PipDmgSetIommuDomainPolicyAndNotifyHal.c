__int64 __fastcall PipDmgSetIommuDomainPolicyAndNotifyHal(__int64 *a1, int a2, char a3)
{
  int v4; // edi
  int v5; // ecx
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2;
  Handle = 0LL;
  v4 = 0;
  v5 = *(_DWORD *)(a1[90] + 20);
  if ( a2 != v5 && (a3 || v5) )
  {
    v4 = PnpDeviceObjectToDeviceInstance(a1[4], (__int64)&Handle, 983103);
    if ( v4 >= 0 )
    {
      v4 = PnpSetObjectProperty(
             *(__int64 *)&PiPnpRtlCtx,
             a1[6],
             1u,
             (__int64)Handle,
             0LL,
             (__int64)&DEVPKEY_Device_IommuDomainPolicy,
             7,
             (__int64)&v8,
             4u,
             0);
      if ( v4 >= 0 )
      {
        *(_DWORD *)(a1[90] + 20) = v8;
        if ( !v8 )
          ((void (__fastcall *)(__int64))off_140C01E68[0])(a1[4]);
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)v4;
}
