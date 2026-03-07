__int64 __fastcall PiDcHandleInterfaceEvent(__int64 a1)
{
  int v1; // eax
  int ObjectProperty; // edx
  int v4; // [rsp+60h] [rbp-88h] BYREF
  int v5; // [rsp+64h] [rbp-84h] BYREF
  int v6[6]; // [rsp+68h] [rbp-80h] BYREF
  wchar_t Str2[40]; // [rsp+80h] [rbp-68h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  ObjectProperty = 0;
  v5 = 0;
  v4 = 0;
  *(_OWORD *)v6 = 0LL;
  if ( (v1 & 1) != 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
                       3LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v4,
                       (__int64)v6,
                       16,
                       (__int64)&v5,
                       0);
    if ( ObjectProperty >= 0 && v4 == 13 && v5 == 16 )
    {
      ObjectProperty = PnpStringFromGuid(v6, Str2);
      if ( ObjectProperty >= 0 )
        return (unsigned int)PiDcContainerRequiresConfiguration(Str2);
    }
  }
  return (unsigned int)ObjectProperty;
}
