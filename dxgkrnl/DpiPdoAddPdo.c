__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        char a4,
        char a5,
        BOOLEAN a6,
        struct _DXGK_CONNECTION_USB4_INFO *a7,
        bool *a8,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a9)
{
  unsigned int *DeviceExtension; // rdi
  __int64 v10; // r15
  char v13; // r13
  unsigned int *v14; // rdx
  unsigned int *v16; // rax
  unsigned int *v17; // rcx
  int DeviceDescriptor; // eax
  __int64 v19; // rsi
  PVOID v20; // r12
  __int64 v21; // rbx
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v23; // eax
  PDEVICE_OBJECT v24; // rax
  __int64 Pool2; // rax
  NTSTATUS v26; // eax
  PIO_WORKITEM WorkItem; // rax
  unsigned int **v28; // rax
  int v29; // eax
  __int64 v30; // r9
  int PhysicalMonitor; // eax
  __int64 v33; // r8
  const void *v34; // rdx
  unsigned int v35; // eax
  SIZE_T v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rcx
  PVOID *v41; // rax
  struct _IO_WORKITEM *v42; // rcx
  void *v43; // rcx
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  int DefaultSDDLString; // [rsp+30h] [rbp-40h]
  char v46; // [rsp+50h] [rbp-20h]
  char v47; // [rsp+51h] [rbp-1Fh]
  char v48; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h] BYREF

  DeviceObject = 0LL;
  DeviceExtension = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  v47 = 0;
  v13 = 0;
  v48 = 0;
  v46 = 0;
  v14 = *(unsigned int **)(v10 + 3664);
  *(_OWORD *)P = 0LL;
  v16 = v14;
  v17 = *(unsigned int **)v14;
  if ( *(unsigned int **)v14 != v14 )
  {
    v33 = *(unsigned int *)(a2 + 24);
    while ( 1 )
    {
      DeviceExtension = v16;
      if ( v16[126] == (_DWORD)v33 )
        break;
      v16 = v17;
      v17 = *(unsigned int **)v17;
      if ( v17 == v14 )
        goto LABEL_2;
    }
    DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)v16 + 3);
    v47 = 1;
    if ( !a5 )
    {
      LODWORD(v19) = 0x40000000;
      WdLogSingleEntry1(4LL, v33);
      goto LABEL_22;
    }
  }
LABEL_2:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(a1, (int *)a2, a3, a4, a5, a6, DefaultSDDLString, P);
  LODWORD(v19) = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    WdLogSingleEntry1(4LL, *(unsigned int *)(a2 + 24));
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_21;
  }
  else if ( DeviceDescriptor == 259 )
  {
    goto LABEL_29;
  }
  v20 = P[1];
  if ( v47 != 1 )
  {
    v21 = a1;
    goto LABEL_6;
  }
  if ( P[1] == *((PVOID *)DeviceExtension + 116) )
    goto LABEL_46;
  if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
    goto LABEL_42;
  if ( !v20 )
  {
    if ( !v34 )
    {
LABEL_42:
      if ( !v20 )
        goto LABEL_47;
      goto LABEL_43;
    }
LABEL_46:
    LODWORD(v19) = 0x40000000;
    goto LABEL_23;
  }
LABEL_43:
  if ( v34 )
  {
    v35 = DeviceExtension[231];
    if ( HIDWORD(P[0]) == v35 )
    {
      v36 = RtlCompareMemory(v20, v34, v35);
      if ( v36 == HIDWORD(P[0]) )
        goto LABEL_46;
    }
  }
LABEL_47:
  *((_BYTE *)DeviceExtension + 511) = 1;
  WdLogSingleEntry1(4LL, DeviceObject);
  LOBYTE(v37) = 1;
  v21 = a1;
  DpiPdoRemovePdo(a1, a2, v37, a8, a9);
LABEL_6:
  DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
  if ( *(_DWORD *)a2 != 1 )
    DeviceClassGuid = &GUID_SD_PDO;
  v23 = WdmlibIoCreateDeviceSecure(
          *(PDRIVER_OBJECT *)(*(_QWORD *)(v10 + 40) + 32LL),
          0x408u,
          0LL,
          0x1Cu,
          0x180u,
          Exclusive,
          &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
          DeviceClassGuid,
          &DeviceObject);
  v19 = v23;
  if ( v23 >= 0 )
  {
    v48 = 1;
    DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
    DeviceExtension[4] = 1953656900;
    DeviceExtension[5] = 5;
    v24 = DeviceObject;
    *((_QWORD *)DeviceExtension + 4) = v21;
    *((_QWORD *)DeviceExtension + 3) = v24;
    *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v10 + 40);
    *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v10 + 48);
    *((_BYTE *)DeviceExtension + 56) = 1;
    DeviceExtension[70] = 1;
    LODWORD(v24) = *(_DWORD *)(a2 + 68);
    DeviceExtension[71] = (unsigned int)v24;
    KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v24 != 1);
    KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, DeviceExtension[71] == 1);
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
    Pool2 = ExAllocatePool2(64LL, 112LL, 1953656900LL);
    *((_QWORD *)DeviceExtension + 21) = Pool2;
    if ( !Pool2 )
      goto LABEL_49;
    *(_DWORD *)(Pool2 + 104) = 1;
    v26 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v19 = v26;
    if ( v26 >= 0 )
    {
      v46 = 1;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *((_QWORD *)DeviceExtension + 119) = WorkItem;
      if ( WorkItem )
      {
        *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
        *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
        *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
        *((_QWORD *)DeviceExtension + 15) = DpiPdoDispatchIoctl;
        *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStartDevice;
        *((_QWORD *)DeviceExtension + 40) = DpiPdoHandleStopDevice;
        *((_QWORD *)DeviceExtension + 45) = DpiPdoHandleQueryCapabilities;
        *((_QWORD *)DeviceExtension + 55) = DpiPdoHandleQueryId;
        *((_QWORD *)DeviceExtension + 43) = DpiPdoHandleQueryDeviceRelations;
        *((_QWORD *)DeviceExtension + 48) = DpiPdoHandleQueryDeviceText;
        *((_QWORD *)DeviceExtension + 57) = DpiPdoHandleQueryBusInformation;
        v13 = 1;
        *((_QWORD *)DeviceExtension + 117) = a2;
        DeviceExtension[124] = *(_DWORD *)a2;
        DeviceExtension[125] = *(_DWORD *)(a2 + 20);
        DeviceExtension[126] = *(_DWORD *)(a2 + 24);
        *((_WORD *)DeviceExtension + 254) = 1;
        *((_BYTE *)DeviceExtension + 511) = 0;
        if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
          DeviceExtension[244] = a3;
        DeviceExtension[245] = 0;
        KeWaitForSingleObject((PVOID)(v10 + 3424), Executive, 0, 0, 0LL);
        *(_QWORD *)(a2 + 48) = DeviceObject;
        KeReleaseMutex((PRKMUTEX)(v10 + 3424), 0);
        v28 = *(unsigned int ***)(v10 + 3672);
        if ( *v28 != (unsigned int *)(v10 + 3664) )
          goto LABEL_69;
        *(_QWORD *)DeviceExtension = v10 + 3664;
        *((_QWORD *)DeviceExtension + 1) = v28;
        *v28 = DeviceExtension;
        *(_QWORD *)(v10 + 3672) = DeviceExtension;
        ++*(_DWORD *)(v10 + 3680);
        if ( DeviceExtension[124] != 1
          || (++*(_DWORD *)(v10 + 3684), DeviceExtension[124] != 1)
          || (v29 = DmmSetTemporaryVideoOutputTechnology(
                      *(DXGADAPTER **)(v10 + 3912),
                      DeviceExtension[126],
                      a3,
                      (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)(a7 != 0LL
                                                            ? D3DKMDT_VOT_RF|D3DKMDT_VOT_INDIRECT_WIRED
                                                            : D3DKMDT_VOT_UNINITIALIZED)),
              v19 = v29,
              v29 >= 0)
          && (LOBYTE(v30) = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)),
              PhysicalMonitor = MonitorCreatePhysicalMonitor(
                                  *(char **)(v10 + 3912),
                                  DeviceExtension[126],
                                  DeviceObject,
                                  v30,
                                  1,
                                  a7,
                                  a8,
                                  a9),
              v19 = PhysicalMonitor,
              PhysicalMonitor >= 0) )
        {
          LODWORD(v19) = DpiPdoGetDeviceIdFromDescriptor((__int64)DeviceObject, (__int64)P);
          if ( (int)v19 < 0 )
          {
            if ( DeviceExtension[124] != 1 )
              goto LABEL_22;
            LODWORD(v19) = 0;
          }
          DpiPdoGetDeviceContainerIdFromDescriptor((__int64)DeviceObject);
          _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
          DeviceObject->Flags |= 4u;
          DeviceObject->Flags |= 0x2000u;
          DeviceObject->Flags &= ~0x4000u;
          DeviceObject->Flags &= ~0x80u;
          WdLogSingleEntry1(4LL, DeviceObject);
LABEL_21:
          v13 = v46;
          if ( (_DWORD)v19 != 259 )
          {
LABEL_22:
            v20 = P[1];
            goto LABEL_23;
          }
LABEL_29:
          v20 = P[1];
          goto LABEL_25;
        }
        goto LABEL_48;
      }
LABEL_49:
      v38 = -1073741801LL;
      LODWORD(v19) = -1073741801;
      v39 = 6LL;
      goto LABEL_50;
    }
  }
LABEL_48:
  v38 = v19;
  v39 = 2LL;
LABEL_50:
  WdLogSingleEntry1(v39, v38);
LABEL_23:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 3424), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, a2);
    KeReleaseMutex((PRKMUTEX)(v10 + 3424), 0);
  }
LABEL_25:
  if ( (int)v19 >= 0 || v48 != 1 )
    goto LABEL_26;
  if ( v13 == 1 )
  {
    v40 = *(_QWORD **)DeviceExtension;
    if ( *(unsigned int **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v41 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v41 == DeviceExtension )
      {
        *v41 = v40;
        v40[1] = v41;
        --*(_DWORD *)(v10 + 3680);
        if ( DeviceExtension[124] == 1 )
          --*(_DWORD *)(v10 + 3684);
        goto LABEL_59;
      }
    }
LABEL_69:
    __fastfail(3u);
  }
LABEL_59:
  KeWaitForSingleObject((PVOID)(v10 + 3424), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v10 + 3424), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v46 == 1 )
    ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v42 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
  if ( v42 )
    IoFreeWorkItem(v42);
  v43 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  if ( DeviceObject )
  {
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
LABEL_26:
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  return (unsigned int)v19;
}
