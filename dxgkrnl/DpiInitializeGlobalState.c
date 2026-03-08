/*
 * XREFs of DpiInitializeGlobalState @ 0x1C03D91E8
 * Callers:
 *     DriverEntry @ 0x1C03D9E6C (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiKsrRestore @ 0x1C03A19E0 (DpiKsrRestore.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // di
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  PPHYSICAL_MEMORY_RANGE v12; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v14; // r9d
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v17; // rdx
  struct _KMUTANT *Pool2; // rax
  struct _KMUTANT *v19; // rax
  NTSTATUS v20; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+40h] [rbp-1B8h] BYREF
  int v25; // [rsp+44h] [rbp-1B4h] BYREF
  int v26; // [rsp+48h] [rbp-1B0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-1A8h] BYREF
  int v28; // [rsp+58h] [rbp-1A0h] BYREF
  int v29; // [rsp+5Ch] [rbp-19Ch] BYREF
  int Data; // [rsp+60h] [rbp-198h] BYREF
  int v31; // [rsp+64h] [rbp-194h] BYREF
  int v32; // [rsp+68h] [rbp-190h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-188h] BYREF
  int v34; // [rsp+80h] [rbp-178h] BYREF
  _QWORD v35[2]; // [rsp+88h] [rbp-170h] BYREF
  _QWORD v36[2]; // [rsp+98h] [rbp-160h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-150h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-120h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-108h] BYREF
  int v40; // [rsp+F8h] [rbp-100h]
  const wchar_t *v41; // [rsp+100h] [rbp-F8h]
  int *v42; // [rsp+108h] [rbp-F0h]
  int v43; // [rsp+110h] [rbp-E8h]
  int *v44; // [rsp+118h] [rbp-E0h]
  int v45; // [rsp+120h] [rbp-D8h]
  __int64 v46; // [rsp+128h] [rbp-D0h]
  int v47; // [rsp+130h] [rbp-C8h]
  __int128 v48; // [rsp+138h] [rbp-C0h]
  __int128 v49; // [rsp+148h] [rbp-B0h]
  __int64 v50; // [rsp+158h] [rbp-A0h]
  __int64 v51; // [rsp+160h] [rbp-98h]
  int v52; // [rsp+168h] [rbp-90h]
  const wchar_t *v53; // [rsp+170h] [rbp-88h]
  unsigned int *v54; // [rsp+178h] [rbp-80h]
  int v55; // [rsp+180h] [rbp-78h]
  unsigned int *v56; // [rsp+188h] [rbp-70h]
  int v57; // [rsp+190h] [rbp-68h]
  __int64 v58; // [rsp+198h] [rbp-60h]
  int v59; // [rsp+1A0h] [rbp-58h]
  __int128 v60; // [rsp+1A8h] [rbp-50h]
  __int128 v61; // [rsp+1B8h] [rbp-40h]
  __int64 v62; // [rsp+1C8h] [rbp-30h]

  v35[0] = 3932218LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v35[1] = L"Kernel-OneCore-DeviceFamilyID";
  KeyHandle = 0LL;
  Data = 0;
  v31 = 0;
  v29 = 0;
  v28 = 0;
  UnicodeString = 0LL;
  v0 = 0;
  v1 = 0;
  DestinationString = 0LL;
  v2 = ZwQueryLicenseValue(v35, &v29, &dword_1C013BA00, 4LL, &v28);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL, v2);
    dword_1C013BA00 = 3;
  }
  v36[0] = 2490404LL;
  v36[1] = L"Kernel-ProductInfo";
  v3 = ZwQueryLicenseValue(v36, &v29, &dword_1C013BA04, 4LL, &v28);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    dword_1C013BA04 = 0;
  }
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C013B490 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C013B491 = 1;
  if ( (unsigned __int8)ExIsSoftBoot() )
    DpiKsrRestore();
  dword_1C013B8C4 = 7236;
  v43 = 67108868;
  LODWORD(v49) = 67108868;
  v55 = 67108868;
  v41 = L"MiracastDefaultRtspPort";
  v25 = 0;
  v42 = &dword_1C013B8C4;
  v44 = &dword_1C013B8C4;
  v24 = 500000;
  *(_QWORD *)&v48 = L"PlatformSupportMiracast";
  v39 = 0LL;
  *((_QWORD *)&v48 + 1) = &v25;
  *((_QWORD *)&v49 + 1) = &v25;
  v53 = L"SuspendAdapterTimerPeriod";
  v54 = &v24;
  v56 = &v24;
  v62 = 0LL;
  v40 = 288;
  v45 = 4;
  v46 = 0LL;
  v47 = 288;
  LODWORD(v50) = 4;
  v51 = 0LL;
  v52 = 288;
  v57 = 4;
  v58 = 0LL;
  v59 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v4 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v39, 0LL, 0LL);
  if ( (v4 < 0 || !dword_1C013B8C4) && (dword_1C013B8C4 = 7236, v4 < 0) || (byte_1C013B496 = 1, !v25) )
    byte_1C013B496 = 0;
  v5 = -v24;
  v24 = 0;
  DueTime.QuadPart = v5;
  v39 = 0LL;
  v41 = L"SupportMultipleIntegratedDisplays";
  v40 = 288;
  v42 = (int *)&v24;
  v43 = 67108868;
  v44 = (int *)&v24;
  v50 = 0LL;
  v45 = 4;
  v46 = 0LL;
  v47 = 0;
  v48 = 0LL;
  v49 = 0LL;
  byte_1C013B498 = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v39, 0LL, 0LL) >= 0 && v24 != 0;
  v24 = 0;
  v43 = 67108868;
  LODWORD(v49) = 67108868;
  v41 = L"HwSchMode";
  v55 = 67108868;
  v42 = (int *)&v24;
  v26 = 1;
  v44 = (int *)&v24;
  v25 = 0;
  *(_QWORD *)&v48 = L"HwSchOverrideBlockList";
  v39 = 0LL;
  *((_QWORD *)&v48 + 1) = &v26;
  *((_QWORD *)&v49 + 1) = &v26;
  v53 = L"HwSchTreatExperimentalAsStable";
  v54 = (unsigned int *)&v25;
  v56 = (unsigned int *)&v25;
  v62 = 0LL;
  v40 = 288;
  v45 = 4;
  v46 = 0LL;
  v47 = 288;
  LODWORD(v50) = 4;
  v51 = 0LL;
  v52 = 288;
  v57 = 4;
  v58 = 0LL;
  v59 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v6 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v39, 0LL, 0LL);
  if ( v6 >= 0 && v24 < 3 )
  {
    dword_1C013B4B8 = v24;
    goto LABEL_19;
  }
  dword_1C013B4B8 = 0;
  if ( v6 >= 0 )
  {
LABEL_19:
    byte_1C013B4BC = 0;
    byte_1C013B4BD = v25 != 0;
    if ( !v26 )
      goto LABEL_21;
  }
  byte_1C013B4BC = 1;
LABEL_21:
  v25 = 0;
  v26 = -1;
  v24 = -1;
  v39 = 0LL;
  v43 = 67108868;
  LODWORD(v49) = 67108868;
  v41 = L"EnableBasicDisplayFallback";
  v55 = 67108868;
  v42 = &v26;
  v40 = 288;
  v44 = &v26;
  *(_QWORD *)&v48 = L"DisableBasicDisplayFallback";
  *((_QWORD *)&v48 + 1) = &v24;
  *((_QWORD *)&v49 + 1) = &v24;
  v53 = L"ForcePreserveBootDisplay";
  v54 = (unsigned int *)&v25;
  v56 = (unsigned int *)&v25;
  v62 = 0LL;
  v45 = 4;
  v46 = 0LL;
  v47 = 288;
  LODWORD(v50) = 4;
  v51 = 0LL;
  v52 = 288;
  v57 = 4;
  v58 = 0LL;
  v59 = 0;
  v60 = 0LL;
  v61 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v39, 0LL, 0LL) >= 0 )
  {
    if ( v24 == 1 && v26 != 1 )
      byte_1C013B492 = 1;
    byte_1C013B493 = v25 == 1;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v7 < 0 )
  {
    if ( v7 != -1073741771 )
      WdLogSingleEntry1(2LL, v7);
  }
  else
  {
    ZwClose(KeyHandle);
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_54;
  Data = 65540;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  v9 = v10;
  if ( v10 < 0 )
  {
    ZwClose(KeyHandle);
    goto LABEL_54;
  }
  v31 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v31, 4u);
  ZwClose(KeyHandle);
  if ( (int)v9 < 0 )
  {
LABEL_54:
    v22 = v9;
    v23 = 2LL;
LABEL_58:
    WdLogSingleEntry1(v23, v22);
    goto LABEL_61;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v12 = PhysicalMemoryRanges;
  if ( !PhysicalMemoryRanges )
  {
    LODWORD(v9) = -1073741670;
    v22 = -1073741670LL;
LABEL_57:
    v23 = 6LL;
    goto LABEL_58;
  }
  p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
  v14 = 0;
  QuadPart = p_NumberOfBytes->QuadPart;
  if ( p_NumberOfBytes->QuadPart )
  {
    p_BaseAddress = &v12->BaseAddress;
    do
    {
      DpGlobals += QuadPart;
      v17 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
      if ( v17 > *(&DpGlobals + 1) )
        *(&DpGlobals + 1) = v17;
      p_BaseAddress = &v12[++v14].BaseAddress;
      p_NumberOfBytes = p_BaseAddress + 1;
      QuadPart = p_BaseAddress[1].QuadPart;
    }
    while ( QuadPart );
  }
  ExFreePoolWithTag(v12, 0);
  Pool2 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL);
  Mutex = Pool2;
  if ( !Pool2 )
    goto LABEL_56;
  KeInitializeMutex(Pool2, 0);
  word_1C013B4E0 = 0;
  qword_1C013B4D0 = (__int64)&qword_1C013B4C8;
  qword_1C013B4C8 = (__int64)&qword_1C013B4C8;
  KeInitializeEvent(&stru_1C013B4E8, NotificationEvent, 0);
  byte_1C013B4E2 = 0;
  ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x90uLL, 0x74727044u, 0);
  v0 = 1;
  v19 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL);
  Object = v19;
  if ( !v19
    || (KeInitializeMutex(v19, 0),
        dword_1C013B720 = 0,
        qword_1C013B730 = (__int64)&qword_1C013B728,
        qword_1C013B728 = (__int64)&qword_1C013B728,
        KeInitializeTimerEx(&stru_1C013B698, SynchronizationTimer),
        KeInitializeDpc(&stru_1C013B6D8, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL),
        (qword_1C013B718 = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject)) == 0LL) )
  {
LABEL_56:
    v22 = -1073741801LL;
    LODWORD(v9) = -1073741801;
    goto LABEL_57;
  }
  ExInitializeNPagedLookasideList(&stru_1C013B580, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
  byte_1C013B840 = 0;
  KeInitializeMutex(&stru_1C013B848, 0);
  v32 = 2;
  qword_1C013B888 = (__int64)&qword_1C013B880;
  qword_1C013B880 = (__int64)&qword_1C013B880;
  v34 = 4;
  if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
         9LL,
         4LL,
         &v32,
         &v34) < 0
    || (byte_1C013B495 = 1, v32 == 2) )
  {
    byte_1C013B495 = 0;
  }
  dword_1C013B7F4 = -1;
  byte_1C013B494 = 0;
  KeInitializeSpinLock(&SpinLock);
  qword_1C013B8A8 = (__int64)&qword_1C013B8A0;
  qword_1C013B8A0 = (__int64)&qword_1C013B8A0;
  dword_1C013B8C0 = 0;
  qword_1C013B8B8 = (__int64)&qword_1C013B8B0;
  qword_1C013B8B0 = (__int64)&qword_1C013B8B0;
  v20 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
          g_pDriverObject,
          (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
          0LL,
          &qword_1C013B890);
  LODWORD(v9) = v20;
  if ( v20 >= 0 )
  {
    IoWorkItem = 0LL;
    qword_1C013B668 = (__int64)&qword_1C013B660;
    qword_1C013B660 = (__int64)&qword_1C013B660;
    dword_1C013B670 = 0;
    qword_1C013B658 = 0LL;
    dword_1C013B620 = 1;
    qword_1C013B628 = 0LL;
    dword_1C013B630 = 0;
    KeInitializeEvent(&stru_1C013B638, SynchronizationEvent, 0);
    KeInitializeEvent(&Event, NotificationEvent, 1u);
    byte_1C013B9B0 = 0;
    KeInitializeMutex(&stru_1C013B9B8, 0);
    byte_1C013B49B = 0;
    qword_1C013B9F8 = (__int64)&qword_1C013B9F0;
    qword_1C013B9F0 = &qword_1C013B9F0;
    qword_1C013B988 = 1LL;
    dword_1C013B83C = 0;
    goto LABEL_42;
  }
  WdLogSingleEntry1(2LL, v20);
  qword_1C013B890 = 0LL;
  v1 = 1;
LABEL_61:
  if ( qword_1C013B718 )
    IoFreeWorkItem(qword_1C013B718);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C013B580);
  if ( Object )
  {
    ExFreePoolWithTag(Object, 0);
    Object = 0LL;
  }
  if ( v0 == 1 )
    ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
LABEL_42:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v9;
}
