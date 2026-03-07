__int64 __fastcall ACPIInternalSetDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, GUID *InterfaceClassGuid)
{
  _QWORD *DeviceExtension; // rbx
  NTSTATUS v5; // eax
  char v6; // di
  NTSTATUS v7; // esi
  const char *v8; // rcx
  const char *v9; // r8
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-18h] BYREF

  SymbolicLinkName = 0LL;
  if ( InterfaceClassGuid == &GUID_ACPI_ROOT_DEVICE_UUID )
    DeviceExtension = (_QWORD *)RootDeviceExtension;
  else
    DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, 0LL, &SymbolicLinkName);
  v6 = 0;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = IoSetDeviceInterfaceState(&SymbolicLinkName, 1u);
    if ( v7 < 0 )
    {
      v8 = (const char *)&unk_1C00622D0;
      v9 = (const char *)&unk_1C00622D0;
      if ( DeviceExtension )
      {
        v12 = DeviceExtension[1];
        v6 = (char)DeviceExtension;
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v8 = (const char *)DeviceExtension[76];
          if ( (v12 & 0x400000000000LL) != 0 )
            v9 = (const char *)DeviceExtension[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 14;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v8 = (const char *)&unk_1C00622D0;
    v9 = (const char *)&unk_1C00622D0;
    if ( DeviceExtension )
    {
      v10 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)DeviceExtension[76];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 13;
LABEL_18:
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        v11,
        (__int64)&WPP_95d701b52be23d9498d45ac18e77591e_Traceguids,
        v7,
        v6,
        v8,
        v9);
    }
  }
  return (unsigned int)v7;
}
