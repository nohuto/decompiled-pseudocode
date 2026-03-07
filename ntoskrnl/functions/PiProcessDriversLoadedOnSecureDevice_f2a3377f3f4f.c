__int64 __fastcall PiProcessDriversLoadedOnSecureDevice(__int64 a1)
{
  _QWORD *v2; // rcx
  int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-48h] BYREF
  __int128 v6; // [rsp+40h] [rbp-38h]
  __int128 v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-18h]

  v5 = 0LL;
  v2 = *(_QWORD **)(a1 + 32);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (int)PnpQueryInterface(v2, (ULONG_PTR)&GUID_SECURE_DRIVER_INTERFACE, 1u, 0x38u, 0LL, (USHORT *)&v5) < 0 )
  {
    v3 = PipUnprotectDevice(a1);
    if ( v3 < 0 )
    {
      PnpRequestDeviceRemoval(a1, 0, 48, -1073741790);
      v3 = -1073741106;
    }
  }
  else
  {
    (*((void (__fastcall **)(_QWORD))&v6 + 1))(*((_QWORD *)&v5 + 1));
    v3 = 0;
  }
  PnpTraceSecureDeviceEnumeration();
  return (unsigned int)v3;
}
