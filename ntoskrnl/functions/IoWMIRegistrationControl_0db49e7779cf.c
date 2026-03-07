NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  int v2; // ebp
  char v3; // r14
  ULONG v5; // eax
  ULONG v6; // eax
  NTSTATUS v7; // ebx
  ULONG v9; // eax
  ULONG v11; // eax
  ULONG v12; // eax
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  v3 = 0;
  if ( WmipServiceDeviceObject )
  {
    v5 = Action & 0x7FFFFFFF;
    if ( (Action & 0x80000000) == 0 )
      v5 = Action;
    if ( (v5 & 0x10000) != 0 )
    {
      v3 = 1;
      v2 = v5 & 0xF00000;
      v5 &= 0xFF0EFFFF;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = WmipRegisterDevice(DeviceObject);
      if ( v3 )
        WmipSetTraceNotify(DeviceObject, v2);
      return v7;
    }
    v9 = v6 - 1;
    if ( !v9 )
      return WmipDeregisterDevice(DeviceObject);
    v11 = v9 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          return -1073741811;
        RegEntryByDevice = WmipFindRegEntryByDevice((__int64)DeviceObject);
        if ( !RegEntryByDevice )
          return -1073741811;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        _InterlockedOr((volatile signed __int32 *)(RegEntryByDevice + 48), 0x20000000u);
        KeReleaseMutex(&WmipSMMutex, 0);
        WmipUnreferenceRegEntry(RegEntryByDevice);
        return 0;
      }
      return WmipUpdateRegistration((__int64)DeviceObject);
    }
    else
    {
      v7 = WmipDeregisterDevice(DeviceObject);
      if ( v7 < 0 )
        return v7;
      return WmipRegisterDevice(DeviceObject);
    }
  }
  return -1073741823;
}
