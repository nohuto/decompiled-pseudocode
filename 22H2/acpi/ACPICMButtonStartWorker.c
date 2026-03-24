/*
 * XREFs of ACPICMButtonStartWorker @ 0x1C000CC70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     RtlStringCchPrintfA @ 0x1C000C948 (RtlStringCchPrintfA.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C000CA70 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000D230 (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C000DFE0 (ACPIRegisterForDeviceNotifications.c)
 *     ACPISetDeviceWorker @ 0x1C0013470 (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001DAB8 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004EE50 (ACPICMLidPowerStateCallBack.c)
 */

void __fastcall ACPICMButtonStartWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  char v2; // si
  _DWORD *DeviceExtension; // rax
  IRP *v5; // r13
  const char *v6; // r14
  _DWORD *v7; // rdi
  int Status; // ebx
  unsigned int MinorFunction; // r12d
  KIRQL v10; // al
  POWER_STATE v11; // ebx
  GUID *v12; // rbx
  const char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v17; // rcx
  void *v18; // rdx
  void *v19; // rax
  int v20; // eax
  char v21; // r8
  NTSTATUS v22; // eax
  char v23; // r8
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  void *v26; // r8
  void *v27; // rdx
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  void *v30; // r8
  void *v31; // rdx
  __int64 v32; // rax
  void *v33; // rdx
  void *v34; // rcx
  __int64 v35; // rax
  void *v36; // rdx
  void *v37; // rcx
  __int64 v38; // rax
  void *v39; // rdx
  void *v40; // rcx
  __int64 v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+38h] [rbp-40h]
  __int64 v43; // [rsp+38h] [rbp-40h]
  __int64 v44; // [rsp+38h] [rbp-40h]
  __int64 v45; // [rsp+40h] [rbp-38h]
  __int64 v46; // [rsp+40h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  signed __int32 v48; // [rsp+C0h] [rbp+48h] BYREF
  ULONG DataSize; // [rsp+C8h] [rbp+50h] BYREF
  void *DeviceRegKey; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Data; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v2 = 0;
  DeviceRegKey = 0LL;
  Data = 0LL;
  DataSize = 0;
  DestinationString = 0LL;
  v48 = 0;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v5 = *(IRP **)(a1 + 40);
  v6 = (const char *)&unk_1C00701BA;
  v7 = DeviceExtension;
  Status = v5->IoStatus.Status;
  MinorFunction = v5->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    if ( (DeviceExtension[50] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(DeviceExtension, ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack(v7, 0LL, 0LL);
      ACPISetDeviceWorker(v7, 1LL);
    }
    else
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v11.SystemState = v7[124];
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      PoRequestPowerIrp(v1, 0, v11, ACPIInternalWaitWakeLoop, 0LL, 0LL);
    }
    if ( (v7[2] & 0x2000LL) != 0 )
    {
      v12 = &GUID_DEVICE_APPLICATIONLAUNCH_BUTTON;
      if ( !*((_QWORD *)v7 + 72) )
      {
        v48 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 9uLL, 0x53706341u);
        *((_QWORD *)v7 + 72) = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = 0LL;
          PoolWithTag[8] = 0;
          RtlStringCchPrintfA(*((NTSTRSAFE_PSTR *)v7 + 72), 9uLL, "%d", v48);
        }
        else
        {
          v17 = *((_QWORD *)v7 + 1);
          v18 = &unk_1C00701BA;
          v19 = &unk_1C00701BA;
          if ( (v17 & 0x200000000000LL) != 0 )
          {
            v18 = (void *)*((_QWORD *)v7 + 71);
            if ( (v17 & 0x400000000000LL) != 0 )
              v19 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v41 = (__int64)v18;
            LOBYTE(v18) = 2;
            WPP_RECORDER_SF_qss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v18,
              5,
              14,
              (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
              (char)v7,
              v41,
              (__int64)v19);
          }
        }
      }
      v20 = ACPIGet((__int64 *)v7, 1145653319, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize);
      v21 = v20;
      if ( v20 < 0 )
      {
        v35 = *((_QWORD *)v7 + 1);
        v36 = &unk_1C00701BA;
        v37 = &unk_1C00701BA;
        if ( (v35 & 0x200000000000LL) != 0 )
        {
          v36 = (void *)*((_QWORD *)v7 + 71);
          if ( (v35 & 0x400000000000LL) != 0 )
            v37 = (void *)*((_QWORD *)v7 + 72);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = (__int64)v36;
          LOBYTE(v36) = 4;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v36,
            5,
            18,
            (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
            v21,
            (char)v7,
            v43,
            (__int64)v37);
        }
      }
      else
      {
        v22 = IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey);
        v23 = v22;
        if ( v22 < 0 )
        {
          v32 = *((_QWORD *)v7 + 1);
          v33 = &unk_1C00701BA;
          v34 = &unk_1C00701BA;
          if ( (v32 & 0x200000000000LL) != 0 )
          {
            v33 = (void *)*((_QWORD *)v7 + 71);
            if ( (v32 & 0x400000000000LL) != 0 )
              v34 = (void *)*((_QWORD *)v7 + 72);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v42 = (__int64)v33;
            LOBYTE(v33) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v33,
              5,
              17,
              (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
              v23,
              (char)v7,
              v42,
              (__int64)v34);
          }
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
          v24 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
          if ( v24 < 0 )
          {
            v25 = *((_QWORD *)v7 + 1);
            v26 = &unk_1C00701BA;
            v27 = &unk_1C00701BA;
            if ( (v25 & 0x200000000000LL) != 0 )
            {
              v26 = (void *)*((_QWORD *)v7 + 71);
              if ( (v25 & 0x400000000000LL) != 0 )
                v27 = (void *)*((_QWORD *)v7 + 72);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v45 = (__int64)v27;
              LOBYTE(v27) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v27,
                5,
                15,
                (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
                v24,
                (char)v7,
                (__int64)v26,
                v45);
            }
          }
          RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
          v48 = _strtoui64(*((const char **)v7 + 72), 0LL, 10);
          v28 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v48, 4u);
          if ( v28 < 0 )
          {
            v29 = *((_QWORD *)v7 + 1);
            v30 = &unk_1C00701BA;
            v31 = &unk_1C00701BA;
            if ( (v29 & 0x200000000000LL) != 0 )
            {
              v30 = (void *)*((_QWORD *)v7 + 71);
              if ( (v29 & 0x400000000000LL) != 0 )
                v31 = (void *)*((_QWORD *)v7 + 72);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v46 = (__int64)v31;
              LOBYTE(v31) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v31,
                5,
                16,
                (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
                v28,
                (char)v7,
                (__int64)v30,
                v46);
            }
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
      v38 = *((_QWORD *)v7 + 1);
      v39 = &unk_1C00701BA;
      v40 = &unk_1C00701BA;
      if ( (v38 & 0x200000000000LL) != 0 )
      {
        v39 = (void *)*((_QWORD *)v7 + 71);
        if ( (v38 & 0x400000000000LL) != 0 )
          v40 = (void *)*((_QWORD *)v7 + 72);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = (__int64)v39;
        LOBYTE(v39) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v39,
          5,
          19,
          (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
          Status,
          (char)v7,
          v44,
          (__int64)v40);
      }
    }
  }
  v5->IoStatus.Status = Status;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  v13 = (const char *)&unk_1C00701BA;
  if ( v7 )
  {
    v14 = *((_QWORD *)v7 + 1);
    v2 = (char)v7;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)*((_QWORD *)v7 + 71);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = (const char *)*((_QWORD *)v7 + 72);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v15 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_2bc47f5d635e376f4e7295df6662785e_Traceguids,
      (char)v5,
      ACPIDispatchPnpTableNames[v15],
      Status,
      v2,
      v6,
      v13);
  }
}
