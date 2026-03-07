void __fastcall USBDInternal_QueryUsbVerifierSettings(
        _DEVICE_OBJECT *DeviceObject,
        wchar_t *RelativeServicePath,
        _USBD_INTERFACE_V3 *Interface,
        ULONG PoolTag)
{
  unsigned int *p_UsbVerifierEnabled; // r14
  LOGICAL IsDriverVerifying; // eax
  POOL_TYPE v9; // ecx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  __int64 (__fastcall *SystemRoutineAddress)(__int64, wchar_t *, _QWORD *); // rax
  int v13; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  p_UsbVerifierEnabled = &Interface->UsbVerifierEnabled;
  IsDriverVerifying = MmIsDriverVerifying(DeviceObject->DriverObject);
  v9 = g_NonPagedPoolType;
  *p_UsbVerifierEnabled = IsDriverVerifying;
  PoolWithTag = ExAllocatePoolWithTag(v9, 0x1C0uLL, PoolTag);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1C0uLL);
    v11[3] = p_UsbVerifierEnabled;
    *v11 = USBD_VerifierSettingsCallback;
    v11[2] = L"UsbVerifierEnabled";
    *((_DWORD *)v11 + 8) = 4;
    *((_DWORD *)v11 + 12) = 4;
    v11[5] = p_UsbVerifierEnabled;
    v11[9] = L"UsbVerifierFailRegistration";
    v11[10] = &Interface->UsbVerifierFailRegistration;
    v11[12] = &Interface->UsbVerifierFailRegistration;
    v11[7] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 22) = 4;
    *((_DWORD *)v11 + 26) = 4;
    v11[16] = L"UsbVerifierFailChainedMdlSupport";
    v11[17] = &Interface->UsbVerifierFailChainedMdlSupport;
    v11[19] = &Interface->UsbVerifierFailChainedMdlSupport;
    v11[14] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 36) = 4;
    *((_DWORD *)v11 + 40) = 4;
    v11[23] = L"UsbVerifierFailStaticStreamSupport";
    v11[24] = &Interface->UsbVerifierFailStaticStreamSupport;
    v11[26] = &Interface->UsbVerifierFailStaticStreamSupport;
    v11[21] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 50) = 4;
    *((_DWORD *)v11 + 54) = 4;
    v11[30] = L"UsbVerifierStaticStreamCountOverride";
    v11[31] = &Interface->UsbVerifierStaticStreamCountOverride;
    v11[33] = &Interface->UsbVerifierStaticStreamCountOverride;
    v11[28] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 64) = 4;
    *((_DWORD *)v11 + 68) = 4;
    v11[37] = L"UsbVerifierFailEnableStaticStreams";
    v11[38] = &Interface->UsbVerifierFailEnableStaticStreams;
    v11[40] = &Interface->UsbVerifierFailEnableStaticStreams;
    v11[35] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 78) = 4;
    *((_DWORD *)v11 + 82) = 4;
    v11[44] = L"UsbVerifierFailSecureTransferSupport";
    v11[42] = USBD_VerifierSettingsCallback;
    *((_DWORD *)v11 + 92) = 4;
    *((_DWORD *)v11 + 96) = 4;
    v11[45] = &Interface->UsbVerifierFailSecureTransferSupport;
    v11[47] = &Interface->UsbVerifierFailSecureTransferSupport;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, wchar_t *, _QWORD *))MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = (__int64 (__fastcall *)(__int64, wchar_t *, _QWORD *))RtlQueryRegistryValues;
    v13 = SystemRoutineAddress(1LL, RelativeServicePath, v11);
    if ( v13 < 0 && g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "RtlQueryRegistrySettings failed, ignoring this error0x%x\n", v13);
    ExFreePoolWithTag(v11, PoolTag);
  }
  else if ( g_EnableDbgPrints )
  {
    DbgPrintEx(0x4Du, 0, "ExAllocatePoolWithTag for USBDInternal_QueryUsbVerifierSettings failed\n");
  }
}
