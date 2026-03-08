/*
 * XREFs of ACPIDispatchAddDevice @ 0x1C0023F30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     RtlStringCchCopyA @ 0x1C000B07C (RtlStringCchCopyA.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0015638 (WPP_RECORDER_SF_sL.c)
 *     ACPIGetPortRangeInterfaces @ 0x1C00246AC (ACPIGetPortRangeInterfaces.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0024980 (WPP_RECORDER_SF_qq.c)
 *     ACPICreateRootSymbolicLink @ 0x1C0083010 (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C008B2CC (AcpiSetupNativeMethodInterface.c)
 *     ACPIWmiInitLog @ 0x1C00AA8C0 (ACPIWmiInitLog.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  char v2; // bl
  struct _DEVICE_OBJECT *v5; // rbp
  int v6; // edx
  char *Pool2; // r14
  unsigned int v8; // edi
  char *v9; // rax
  int v10; // edx
  char *v11; // r15
  NTSTATUS v12; // eax
  int v13; // edx
  int v14; // edx
  _QWORD *v15; // rax
  int v16; // edx
  _QWORD *v17; // rsi
  const char *v18; // rax
  const char *v19; // rcx
  KIRQL v20; // al
  KIRQL v21; // al
  __int64 v22; // rdx
  PDEVICE_OBJECT SourceDevice; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  SourceDevice = 0LL;
  v5 = 0LL;
  Pool2 = (char *)ExAllocatePool2(64LL, 14LL, 1399874369LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        11,
        (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
        14);
    }
    v8 = -1073741670;
LABEL_24:
    if ( SourceDevice )
      IoDeleteDevice(SourceDevice);
    v18 = (const char *)&unk_1C00A6BB3;
    v19 = (const char *)&unk_1C00A6BB3;
    goto LABEL_30;
  }
  RtlStringCchCopyA(Pool2, 0xEuLL, "ACPI\\PNP0C08");
  v9 = (char *)ExAllocatePool2(64LL, 11LL, 1399874369LL);
  v11 = v9;
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        6,
        12,
        (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
        11);
    }
LABEL_19:
    v8 = -1073741670;
LABEL_20:
    ExFreePoolWithTag(Pool2, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( v5 )
      IoDetachDevice(v5);
    goto LABEL_24;
  }
  RtlStringCchCopyA(v9, 0xBuLL, "0x5F534750");
  v12 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
  v8 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        6,
        13,
        (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
        (__int64)Pool2,
        v12);
    SourceDevice = 0LL;
    goto LABEL_20;
  }
  v5 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        6,
        14,
        (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
        (char)SourceDevice,
        (char)DeviceObject);
    }
    v8 = -1073741810;
    goto LABEL_20;
  }
  v15 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
  v17 = v15;
  if ( !v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        22,
        15,
        (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids);
    }
    goto LABEL_19;
  }
  memset(v15, 0, 0x3F8uLL);
  *((_DWORD *)v17 + 183) = 1;
  _InterlockedIncrement((volatile signed __int32 *)v17 + 182);
  v20 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  SourceDevice->DeviceExtension = v17;
  v17[96] = SourceDevice;
  v17[97] = v5;
  v17[76] = Pool2;
  v17[3] = &AcpiFdoIrpDispatch;
  v17[98] = DeviceObject;
  *((_DWORD *)v17 + 4) = 1599293264;
  v17[77] = v11;
  *((_DWORD *)v17 + 127) = 0;
  *((_DWORD *)v17 + 128) = 1;
  *((_DWORD *)v17 + 129) = 1;
  *((_DWORD *)v17 + 130) = 1;
  *((_DWORD *)v17 + 131) = 1;
  *((_DWORD *)v17 + 132) = 4;
  *(_QWORD *)((char *)v17 + 532) = 4LL;
  *((_DWORD *)v17 + 135) = 0;
  *((_DWORD *)v17 + 137) = 1;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v20);
  _InterlockedOr64(v17 + 1, 0x1E00000200010uLL);
  *((_DWORD *)v17 + 176) = -1;
  v17[101] = v17 + 100;
  v17[100] = v17 + 100;
  v17[103] = v17 + 102;
  v17[102] = v17 + 102;
  v17[105] = v17 + 104;
  v17[104] = v17 + 104;
  v17[107] = v17 + 106;
  v17[106] = v17 + 106;
  v17[74] = v17 + 73;
  v17[73] = v17 + 73;
  v17[90] = v17 + 89;
  v17[89] = v17 + 89;
  *v17 = &gAcpiTriageInfo;
  ::DriverObject = DriverObject;
  v21 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  RootDeviceExtension = (ULONG_PTR)v17;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
  ACPIGetPortRangeInterfaces(DeviceObject);
  ACPIWmiInitLog(SourceDevice);
  AcpiSetupNativeMethodInterface();
  SourceDevice->Flags &= ~0x80u;
  ACPICreateRootSymbolicLink(DeviceObject);
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    1u,
    &GUID_PRM_DEVICE,
    ::DriverObject,
    AcpiPrmNotifyInterfaceChange,
    0LL,
    &NotificationEntry);
  v22 = v17[1];
  v18 = (const char *)&unk_1C00A6BB3;
  v19 = (const char *)&unk_1C00A6BB3;
  v2 = (char)v17;
  if ( (v22 & 0x200000000000LL) != 0 )
  {
    v19 = (const char *)v17[76];
    if ( (v22 & 0x400000000000LL) != 0 )
      v18 = (const char *)v17[77];
  }
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
      v8,
      v2,
      v19,
      v18);
  return v8;
}
