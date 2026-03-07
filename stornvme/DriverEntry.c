NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // eax
  NTSTATUS v5; // ebx
  _QWORD v7[26]; // [rsp+20h] [rbp-79h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !g_DumpPreInitializeInvoked )
    StorNVMe_wil_init();
  LODWORD(v7[23]) |= 0x1F1B8u;
  v7[1] = NVMeHwInitialize;
  v7[0] = 0x5000000D0LL;
  v7[2] = NVMeHwStartIo;
  LODWORD(v7[11]) = 16843010;
  v7[3] = NVMeHwInterrupt;
  v7[4] = NVMeHwFindAdapter;
  BYTE4(v7[11]) = 1;
  v7[5] = NVMeHwResetBus;
  v7[15] = NVMeHwAdapterControl;
  v7[16] = NVMeHwBuildIo;
  v7[22] = NVMeHwTracingEnabled;
  v7[25] = &NVMeHwUnitControl;
  HIDWORD(v7[23]) = 2;
  LODWORD(v7[8]) = 4528;
  v7[9] = 0x2000020A0LL;
  v4 = ((__int64 (__fastcall *)(_DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD))StorPortInitialize)(
         DriverObject,
         RegistryPath,
         v7,
         0LL);
  v5 = v4;
  if ( !g_DumpPreInitializeInvoked )
  {
    if ( v4 )
      StorNVMe_wil_deinit();
    else
      StorNVMeSetDriverUnload((__int64)DriverObject);
  }
  return v5;
}
