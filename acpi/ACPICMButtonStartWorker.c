void __fastcall ACPICMButtonStartWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  char v2; // si
  const char **DeviceExtension; // rax
  IRP *v5; // r13
  const char *v6; // r14
  const char **v7; // rdi
  int Status; // ebx
  unsigned int MinorFunction; // r12d
  KIRQL v10; // al
  POWER_STATE v11; // ebx
  GUID *v12; // rbx
  char *Pool2; // rax
  const char *v14; // rcx
  const char *v15; // rdx
  const char *v16; // rax
  int v17; // eax
  char v18; // r8
  NTSTATUS v19; // eax
  char v20; // r8
  NTSTATUS v21; // eax
  const char *v22; // rcx
  const char *v23; // r8
  const char *v24; // rdx
  NTSTATUS v25; // eax
  const char *v26; // rcx
  const char *v27; // r8
  const char *v28; // rdx
  const char *v29; // rax
  const char *v30; // rdx
  const char *v31; // rcx
  const char *v32; // rax
  const char *v33; // rdx
  const char *v34; // rcx
  const char *v35; // rax
  const char *v36; // rdx
  const char *v37; // rcx
  const char *v38; // rcx
  const char *v39; // rax
  __int64 v40; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  signed __int32 v42; // [rsp+C0h] [rbp+48h] BYREF
  ULONG DataSize; // [rsp+C8h] [rbp+50h] BYREF
  void *DeviceRegKey; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Data; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v2 = 0;
  DeviceRegKey = 0LL;
  Data = 0LL;
  DataSize = 0;
  DestinationString = 0LL;
  v42 = 0;
  DeviceExtension = (const char **)ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v5 = *(IRP **)(a1 + 40);
  v6 = (const char *)&unk_1C00622D0;
  v7 = DeviceExtension;
  Status = v5->IoStatus.Status;
  MinorFunction = v5->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    if ( ((_DWORD)DeviceExtension[25] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(DeviceExtension, ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack(v7, 0LL, 0LL);
      ACPISetDeviceWorker(v7, 1LL);
    }
    else
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v11.SystemState = (int)v7[67];
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      PoRequestPowerIrp(v1, 0, v11, ACPIInternalWaitWakeLoop, 0LL, 0LL);
    }
    if ( ((_DWORD)v7[1] & 0x2000LL) != 0 )
    {
      v12 = &GUID_DEVICE_APPLICATIONLAUNCH_BUTTON;
      if ( !v7[77] )
      {
        v42 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        Pool2 = (char *)ExAllocatePool2(64LL, 9LL, 1399874369LL);
        v7[77] = Pool2;
        if ( Pool2 )
        {
          RtlStringCchPrintfA(Pool2, 9uLL, "%d", v42);
        }
        else
        {
          v14 = v7[1];
          v15 = (const char *)&unk_1C00622D0;
          v16 = (const char *)&unk_1C00622D0;
          if ( ((unsigned __int64)v14 & 0x200000000000LL) != 0 )
          {
            v15 = v7[76];
            if ( ((unsigned __int64)v14 & 0x400000000000LL) != 0 )
              v16 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0xEu,
              (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
              (char)v7,
              v15,
              v16);
        }
      }
      v17 = ACPIGet((_DWORD)v7, 1145653319, 268501000, 0, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize);
      v18 = v17;
      if ( v17 < 0 )
      {
        v32 = v7[1];
        v33 = (const char *)&unk_1C00622D0;
        v34 = (const char *)&unk_1C00622D0;
        if ( ((unsigned __int64)v32 & 0x200000000000LL) != 0 )
        {
          v33 = v7[76];
          if ( ((unsigned __int64)v32 & 0x400000000000LL) != 0 )
            v34 = v7[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            5u,
            0x12u,
            (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
            v18,
            (char)v7,
            v33,
            v34);
      }
      else
      {
        v19 = IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey);
        v20 = v19;
        if ( v19 < 0 )
        {
          v29 = v7[1];
          v30 = (const char *)&unk_1C00622D0;
          v31 = (const char *)&unk_1C00622D0;
          if ( ((unsigned __int64)v29 & 0x200000000000LL) != 0 )
          {
            v30 = v7[76];
            if ( ((unsigned __int64)v29 & 0x400000000000LL) != 0 )
              v31 = v7[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0x11u,
              (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
              v20,
              (char)v7,
              v30,
              v31);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
          v21 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
          if ( v21 < 0 )
          {
            v22 = v7[1];
            v23 = (const char *)&unk_1C00622D0;
            v24 = (const char *)&unk_1C00622D0;
            if ( ((unsigned __int64)v22 & 0x200000000000LL) != 0 )
            {
              v23 = v7[76];
              if ( ((unsigned __int64)v22 & 0x400000000000LL) != 0 )
                v24 = v7[77];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                5u,
                0xFu,
                (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
                v21,
                (char)v7,
                v23,
                v24);
          }
          RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
          v42 = _strtoui64(v7[77], 0LL, 10);
          v25 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v42, 4u);
          if ( v25 < 0 )
          {
            v26 = v7[1];
            v27 = (const char *)&unk_1C00622D0;
            v28 = (const char *)&unk_1C00622D0;
            if ( ((unsigned __int64)v26 & 0x200000000000LL) != 0 )
            {
              v27 = v7[76];
              if ( ((unsigned __int64)v26 & 0x400000000000LL) != 0 )
                v28 = v7[77];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                5u,
                0x10u,
                (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
                v25,
                (char)v7,
                v27,
                v28);
          }
          ZwClose(DeviceRegKey);
        }
      }
    }
    else
    {
      v12 = &GUID_DEVICE_SYS_BUTTON;
      ACPIRegisterForDeviceNotifications(v1, ACPICMButtonNotifyByDeviceObject, v1);
    }
    Status = ACPIInternalSetDeviceInterface(v1, v12);
    if ( Status < 0 )
    {
      v35 = v7[1];
      v36 = (const char *)&unk_1C00622D0;
      v37 = (const char *)&unk_1C00622D0;
      if ( ((unsigned __int64)v35 & 0x200000000000LL) != 0 )
      {
        v36 = v7[76];
        if ( ((unsigned __int64)v35 & 0x400000000000LL) != 0 )
          v37 = v7[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x13u,
          (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
          Status,
          (char)v7,
          v36,
          v37);
    }
  }
  v5->IoStatus.Status = Status;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  v38 = (const char *)&unk_1C00622D0;
  if ( v7 )
  {
    v39 = v7[1];
    v2 = (char)v7;
    if ( ((unsigned __int64)v39 & 0x200000000000LL) != 0 )
    {
      v6 = v7[76];
      if ( ((unsigned __int64)v39 & 0x400000000000LL) != 0 )
        v38 = v7[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v40 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v40 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
      (char)v5,
      (__int64)(&ACPIDispatchPnpTableNames)[v40],
      Status,
      v2,
      v6,
      v38);
  }
}
