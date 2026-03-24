/*
 * XREFs of DpiInitializeGlobalState @ 0x1C0307788
 * Callers:
 *     DriverEntry @ 0x1C03072C8 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     DpiIsXboxOne @ 0x1C019E84C (DpiIsXboxOne.c)
 *     DpiKsrRestore @ 0x1C02D32DC (DpiKsrRestore.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // r14
  char v1; // si
  int v2; // eax
  int v3; // eax
  int v4; // eax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  NTSTATUS v13; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  PPHYSICAL_MEMORY_RANGE v18; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v20; // r9d
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v23; // rdx
  struct _KMUTANT *PoolWithTag; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // rax
  struct _KMUTANT *v33; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  int v45; // [rsp+58h] [rbp-B0h] BYREF
  int Data; // [rsp+5Ch] [rbp-ACh] BYREF
  _QWORD DestinationString[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v48; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-40h] BYREF
  int v52; // [rsp+D0h] [rbp-38h]
  const wchar_t *v53; // [rsp+D8h] [rbp-30h]
  int *v54; // [rsp+E0h] [rbp-28h]
  int v55; // [rsp+E8h] [rbp-20h]
  int *v56; // [rsp+F0h] [rbp-18h]
  int v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  int v59; // [rsp+108h] [rbp+0h]
  __int128 v60; // [rsp+110h] [rbp+8h]
  __int128 v61; // [rsp+120h] [rbp+18h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  __int64 v63; // [rsp+138h] [rbp+30h]
  int v64; // [rsp+140h] [rbp+38h]
  __int128 v65; // [rsp+148h] [rbp+40h]
  __int128 v66; // [rsp+158h] [rbp+50h]
  __int64 v67; // [rsp+168h] [rbp+60h]
  __int64 v68; // [rsp+170h] [rbp+68h]
  int v69; // [rsp+178h] [rbp+70h]
  __int128 v70; // [rsp+180h] [rbp+78h]
  __int128 v71; // [rsp+190h] [rbp+88h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]

  *(&ObjectAttributes.Length + 1) = 0;
  UnicodeString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v0 = 0;
  KeyHandle = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  Data = 0;
  v1 = 0;
  LODWORD(DestinationString[0]) = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C00B2B10 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C00B2B11 = 1;
  if ( (unsigned __int8)ExIsSoftBoot() )
    DpiKsrRestore();
  dword_1C00B2F3C = 7236;
  v43 = 500000LL;
  v51 = 0LL;
  v52 = 288;
  v53 = L"MiracastDefaultRtspPort";
  v55 = 67108868;
  v54 = &dword_1C00B2F3C;
  v56 = &dword_1C00B2F3C;
  v57 = 4;
  *(_QWORD *)&v60 = L"PlatformSupportMiracast";
  v58 = 0LL;
  *((_QWORD *)&v60 + 1) = (char *)&v43 + 4;
  *((_QWORD *)&v61 + 1) = (char *)&v43 + 4;
  *(_QWORD *)&v65 = L"SuspendAdapterTimerPeriod";
  *((_QWORD *)&v65 + 1) = &v43;
  *((_QWORD *)&v66 + 1) = &v43;
  v72 = 0LL;
  v59 = 288;
  LODWORD(v61) = 67108868;
  LODWORD(v62) = 4;
  v63 = 0LL;
  v64 = 288;
  LODWORD(v66) = 67108868;
  LODWORD(v67) = 4;
  v68 = 0LL;
  v69 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v51, 0LL, 0LL);
  if ( v2 < 0 || !dword_1C00B2F3C )
    dword_1C00B2F3C = 7236;
  if ( v2 < 0 || (byte_1C00B2B17 = 1, !HIDWORD(v43)) )
    byte_1C00B2B17 = 0;
  v3 = -(int)v43;
  LODWORD(v43) = 0;
  DueTime.QuadPart = v3;
  v51 = 0LL;
  v53 = L"SupportMultipleIntegratedDisplays";
  v52 = 288;
  v54 = (int *)&v43;
  v56 = (int *)&v43;
  v55 = 67108868;
  v57 = 4;
  v58 = 0LL;
  v59 = 0;
  v60 = 0LL;
  v62 = 0LL;
  v61 = 0LL;
  byte_1C00B2B19 = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v51, 0LL, 0LL) >= 0 && (_DWORD)v43 != 0;
  v43 = 0x100000000LL;
  v53 = L"HwSchMode";
  v51 = 0LL;
  v54 = (int *)&v43;
  v52 = 288;
  v56 = (int *)&v43;
  v55 = 67108868;
  *(_QWORD *)&v60 = L"HwSchOverrideBlockList";
  *((_QWORD *)&v60 + 1) = (char *)&v43 + 4;
  *((_QWORD *)&v61 + 1) = (char *)&v43 + 4;
  v57 = 4;
  v58 = 0LL;
  v59 = 288;
  LODWORD(v61) = 67108868;
  LODWORD(v62) = 4;
  v63 = 0LL;
  v64 = 0;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v4 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v51, 0LL, 0LL);
  if ( v4 < 0 || (dword_1C00B2B30 = v43, (unsigned int)v43 >= 3) )
    dword_1C00B2B30 = 0;
  if ( v4 < 0 || (byte_1C00B2B34 = 0, HIDWORD(v43)) )
    byte_1C00B2B34 = 1;
  v55 = 67108868;
  v43 = -1LL;
  LODWORD(v61) = 67108868;
  v53 = L"EnableBasicDisplayFallback";
  LODWORD(v66) = 67108868;
  v54 = (int *)&v43;
  v45 = 0;
  v56 = (int *)&v43;
  *(_QWORD *)&v60 = L"DisableBasicDisplayFallback";
  *((_QWORD *)&v60 + 1) = (char *)&v43 + 4;
  *((_QWORD *)&v61 + 1) = (char *)&v43 + 4;
  *(_QWORD *)&v65 = L"ForcePreserveBootDisplay";
  *((_QWORD *)&v65 + 1) = &v45;
  *((_QWORD *)&v66 + 1) = &v45;
  v51 = 0LL;
  v52 = 288;
  v57 = 4;
  v58 = 0LL;
  v59 = 288;
  LODWORD(v62) = 4;
  v63 = 0LL;
  v64 = 288;
  LODWORD(v67) = 4;
  v68 = 0LL;
  v69 = 0;
  v70 = 0LL;
  v72 = 0LL;
  v71 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v51, 0LL, 0LL) >= 0 )
  {
    if ( (_DWORD)v43 != 1 && HIDWORD(v43) == 1 )
      byte_1C00B2B12 = 1;
    byte_1C00B2B13 = v45 == 1;
  }
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v8 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741771 )
    {
      v38 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v38 + 24) = v8;
      WdLogEvent5_WdError(v38);
    }
  }
  else
  {
    ZwClose(KeyHandle);
  }
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v12 = v9;
  if ( v9 < 0 )
    goto LABEL_52;
  Data = 49156;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DxgKrnlVersion");
  v13 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&DestinationString[1], 0, 4u, &Data, 4u);
  v12 = v13;
  if ( v13 < 0 )
  {
    ZwClose(KeyHandle);
    goto LABEL_52;
  }
  LODWORD(DestinationString[0]) = 20499;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MinDxgKrnlVersion");
  v12 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&DestinationString[1], 0, 4u, DestinationString, 4u);
  ZwClose(KeyHandle);
  if ( (int)v12 < 0 )
  {
LABEL_52:
    v39 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v39 + 24) = v12;
    WdLogEvent5_WdError(v39);
    goto LABEL_39;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v18 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
    v20 = 0;
    QuadPart = p_NumberOfBytes->QuadPart;
    if ( p_NumberOfBytes->QuadPart )
    {
      p_BaseAddress = &v18->BaseAddress;
      do
      {
        DpGlobals += QuadPart;
        v23 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
        if ( v23 > *(&DpGlobals + 1) )
          *(&DpGlobals + 1) = v23;
        p_BaseAddress = &v18[++v20].BaseAddress;
        p_NumberOfBytes = p_BaseAddress + 1;
        QuadPart = p_BaseAddress[1].QuadPart;
      }
      while ( QuadPart );
    }
    ExFreePoolWithTag(v18, 0);
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    Mutex = PoolWithTag;
    if ( PoolWithTag )
    {
      KeInitializeMutex(PoolWithTag, 0);
      qword_1C00B2B48 = (__int64)&qword_1C00B2B40;
      qword_1C00B2B40 = (__int64)&qword_1C00B2B40;
      RtlInitUnicodeString(
        (PUNICODE_STRING)&DestinationString[1],
        L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
      {
        v41 = WdLogNewEntry5_WdEvent(v30, v29);
        *(_QWORD *)(v41 + 24) = 0LL;
        WdLogEvent5_WdEvent(v41);
        v32 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v31 = WdLogNewEntry5_WdEvent(v30, v29);
        *(_QWORD *)(v31 + 24) = 0LL;
        WdLogEvent5_WdEvent(v31);
        ZwClose(KeyHandle);
        v32 = KeyHandle;
      }
      byte_1C00B2B59 = 0;
      byte_1C00B2B58 = v32 == 0LL;
      KeInitializeEvent(&stru_1C00B2B60, NotificationEvent, 0);
      byte_1C00B2B5A = 0;
      ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x80uLL, 0x74727044u, 0);
      v0 = 1;
      v33 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      P = v33;
      if ( v33 )
      {
        KeInitializeMutex(v33, 0);
        dword_1C00B2D98 = 0;
        qword_1C00B2DA8 = (__int64)&Entry;
        Entry = &Entry;
        KeInitializeTimerEx(&stru_1C00B2D10, SynchronizationTimer);
        KeInitializeDpc(&stru_1C00B2D50, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
        qword_1C00B2D90 = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
        if ( qword_1C00B2D90 )
        {
          ExInitializeNPagedLookasideList(&stru_1C00B2C00, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
          byte_1C00B2EB8 = 0;
          KeInitializeMutex(&stru_1C00B2EC0, 0);
          HIDWORD(DestinationString[0]) = 2;
          qword_1C00B2F00 = (__int64)&qword_1C00B2EF8;
          qword_1C00B2EF8 = (__int64)&qword_1C00B2EF8;
          v48 = 4;
          if ( ((int (__fastcall *)(__int64, __int64, char *, int *))HalDispatchTable->HalQuerySystemInformation)(
                 9LL,
                 4LL,
                 (char *)DestinationString + 4,
                 &v48) < 0
            || (byte_1C00B2B16 = 1, HIDWORD(DestinationString[0]) == 2) )
          {
            byte_1C00B2B16 = 0;
          }
          dword_1C00B2E6C = -1;
          byte_1C00B2B15 = 0;
          KeInitializeSpinLock(&SpinLock);
          qword_1C00B2F20 = (__int64)&qword_1C00B2F18;
          qword_1C00B2F18 = (__int64)&qword_1C00B2F18;
          dword_1C00B2F38 = 0;
          qword_1C00B2F30 = (__int64)&qword_1C00B2F28;
          qword_1C00B2F28 = (__int64)&qword_1C00B2F28;
          v34 = IoRegisterPlugPlayNotification(
                  EventCategoryDeviceInterfaceChange,
                  1u,
                  &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                  g_pDriverObject,
                  (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                  0LL,
                  &qword_1C00B2F08);
          v12 = v34;
          if ( v34 < 0 )
          {
            v42 = WdLogNewEntry5_WdError(v36, v35);
            *(_QWORD *)(v42 + 24) = v12;
            WdLogEvent5_WdError(v42);
            qword_1C00B2F08 = 0LL;
          }
          else
          {
            IoWorkItem = 0LL;
            qword_1C00B2CE8 = (__int64)&qword_1C00B2CE0;
            qword_1C00B2CE0 = (__int64)&qword_1C00B2CE0;
            dword_1C00B2CF0 = 0;
            qword_1C00B2CD8 = 0LL;
            dword_1C00B2CA0 = 1;
            qword_1C00B2CA8 = 0LL;
            dword_1C00B2CB0 = 0;
            KeInitializeEvent(&stru_1C00B2CB8, SynchronizationEvent, 0);
            KeInitializeEvent(&Event, NotificationEvent, 1u);
            byte_1C00B3090 = 0;
            KeInitializeMutex(&stru_1C00B3098, 0);
            byte_1C00B2B1C = 0;
            qword_1C00B30D8 = (__int64)&qword_1C00B30D0;
            qword_1C00B30D0 = &qword_1C00B30D0;
            qword_1C00B3000 = 1LL;
            dword_1C00B2EB4 = 0;
            byte_1C00B2B1F = DpiIsXboxOne();
          }
LABEL_39:
          v1 = v0;
          if ( (int)v12 >= 0 )
            goto LABEL_40;
          goto LABEL_56;
        }
      }
    }
    LODWORD(v12) = -1073741801;
    v40 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    *(_QWORD *)(v40 + 24) = -1073741801LL;
  }
  else
  {
    LODWORD(v12) = -1073741670;
    v40 = WdLogNewEntry5_WdLowResource(v16, v15, 0LL, v17);
    *(_QWORD *)(v40 + 24) = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v40);
LABEL_56:
  if ( qword_1C00B2D90 )
    IoFreeWorkItem(qword_1C00B2D90);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C00B2C00);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( v0 == 1 )
    ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
LABEL_40:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v12;
}
