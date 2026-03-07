char __fastcall ACPIInitialize(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  _QWORD *v6; // rax
  int v7; // eax
  int v8; // edx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edx
  ULONG_PTR BugCheckParameter4; // rbx
  int InterruptModel; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  ULONG_PTR v17; // rbx
  __int64 DeviceExtension; // rax
  __int64 v20; // [rsp+28h] [rbp-20h]
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+60h] [rbp+18h] BYREF

  v21 = 0;
  v22 = 0;
  v2 = EmProviderRegister(AcpiDriverObject, &EntryReg, 3LL, &CallbackReg, 3, &AcpiEmProviderHandle);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v2;
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      1,
      31,
      (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
      v20);
  }
  v4 = ACPIInitializeAMLI();
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v4;
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        1,
        32,
        (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
        v20);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 0LL, 0LL, 0LL);
  }
  AcpiIrqLibInitializeGlobalState(BugCheckParameter3);
  KeInitializeSpinLock(&GpeTableLock);
  KeInitializeSpinLock(&NotifyHandlerLock);
  qword_1C0070128 = (__int64)&AcpiDynamicDataBlockTableList;
  AcpiDynamicDataBlockTableList = (__int64)&AcpiDynamicDataBlockTableList;
  KeInitializeSpinLock((PKSPIN_LOCK)AcpiInformation + 8);
  v6 = (_QWORD *)((char *)AcpiInformation + 48);
  *((_QWORD *)AcpiInformation + 7) = (char *)AcpiInformation + 48;
  *v6 = v6;
  *((_QWORD *)AcpiInformation + 9) = 0LL;
  *((_DWORD *)AcpiInformation + 20) = 0;
  v7 = ACPILoadProcessRSDT();
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v7;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        1,
        33,
        (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
        v20);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 3uLL, 0LL, 0LL);
  }
  gAcpiHonorBiosPolarities = ACPIInternalInterruptHonorBiosPolarities();
  if ( (int)ACPIGetTableVersion(1346584902, &v21) >= 0 && v21 >= 5 )
    AcpiRetainDebugDeviceInD0 = 1;
  ACPIKsrSupportInitialize();
  ACPIEnableInitializeACPI(0LL, v9);
  v10 = ACPIInitializeDDBs();
  BugCheckParameter4 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v10;
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        1,
        34,
        (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
        v20);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 4uLL, 0LL, BugCheckParameter4);
  }
  InterruptModel = NotifyHalWithMachineStatesAndRetrieveInterruptModel((int *)&v22);
  if ( InterruptModel < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 5uLL, 0LL, InterruptModel);
  v14 = AcpiIrqLibConfigureLibrary(v22, *((_QWORD *)AcpiInformation + 4));
  if ( v14 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 6uLL, 0LL, v14);
  v15 = ACPIInterruptInitialize(BugCheckParameter3);
  v17 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        22,
        35,
        (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, 0LL, v17);
  }
  ACPIInitializeKernelTableHandler(1, *(_QWORD *)(BugCheckParameter3 + 8));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( DeviceExtension )
    ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  return 1;
}
