void __fastcall ACPIProcessorStartDeviceWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rsi
  __int64 DeviceExtension; // rax
  __int64 v4; // rdi
  IRP *v5; // r14
  NTSTATUS InitialApicId; // ebx
  unsigned int v7; // eax
  int v8; // r8d
  unsigned int v9; // eax
  int v10; // r8d
  __int64 v11; // rax
  const char *v12; // rbx
  const char *v13; // rdx
  const char *v14; // rcx
  USHORT v15; // ax
  int started; // eax
  __int64 v17; // rdx
  const char *v18; // rcx
  int v19; // r8d
  __int64 v20; // rcx
  USHORT NodeNumber; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int Data; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+58h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Data = 0;
  NodeNumber = 0;
  v23 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v4 = DeviceExtension;
  v5 = *(IRP **)(a1 + 40);
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_43;
    *(_DWORD *)(v4 + 192) = Data;
    ExAcquireFastMutex(&AcpiProcessorStartupLock);
    if ( !AcpiBootProcessorApicIds && (InitialApicId = ACPIProcessorBuildBootApicIds(), InitialApicId < 0)
      || !AcpiHiddenProcessorApicIds && (InitialApicId = ACPIProcessorBuildHiddenApicIds(), InitialApicId < 0) )
    {
      ExReleaseFastMutex(&AcpiProcessorStartupLock);
      goto LABEL_43;
    }
    ExReleaseFastMutex(&AcpiProcessorStartupLock);
    if ( AcpiBootProcessorCount )
    {
      v7 = 0;
      v8 = 0;
      while ( *(_DWORD *)(AcpiBootProcessorApicIds + 4LL * v7) != Data )
      {
        v7 = v8 + 1;
        v23 = v7;
        ++v8;
        if ( v7 >= AcpiBootProcessorCount )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v23 = 0;
      if ( AcpiHiddenProcessorCount )
      {
        v9 = 0;
        v10 = 0;
        while ( *(_DWORD *)(AcpiHiddenProcessorApicIds + 4LL * v9) != Data )
        {
          v9 = v10 + 1;
          v23 = v9;
          ++v10;
          if ( v9 >= AcpiHiddenProcessorCount )
            goto LABEL_17;
        }
      }
      else
      {
LABEL_17:
        v11 = *(_QWORD *)(v4 + 8);
        if ( (v11 & 0x4000) == 0 )
        {
          v12 = (const char *)&unk_1C00622D0;
          v13 = (const char *)&unk_1C00622D0;
          v14 = (const char *)&unk_1C00622D0;
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v13 = *(const char **)(v4 + 608);
            if ( (v11 & 0x400000000000LL) != 0 )
              v14 = *(const char **)(v4 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              1u,
              0xDu,
              (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids,
              *(_DWORD *)(v4 + 196),
              Data,
              v4,
              v13,
              v14);
          if ( IoGetDeviceNumaNode(v1, &NodeNumber) )
          {
            v15 = -1;
            NodeNumber = -1;
          }
          else
          {
            v15 = NodeNumber;
          }
          started = KeStartDynamicProcessor(*(unsigned int *)(v4 + 196), Data, v15, &v23);
          if ( started >= 0 )
          {
            v19 = 0;
          }
          else
          {
            v17 = *(_QWORD *)(v4 + 8);
            v18 = (const char *)&unk_1C00622D0;
            if ( (v17 & 0x200000000000LL) != 0 )
            {
              v12 = *(const char **)(v4 + 608);
              if ( (v17 & 0x400000000000LL) != 0 )
                v18 = *(const char **)(v4 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0xEu,
                (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids,
                started,
                v4,
                v12,
                v18);
            v19 = 163;
          }
          ACPIInternalEvaluateOST((_QWORD *)v4, 0, v19);
        }
      }
    }
  }
  else
  {
    Data = -1;
  }
  ACPIThermalAcquireCoolingInterfaces(v4);
  if ( (*(_DWORD *)(v4 + 8) & 0x4000LL) == 0 )
  {
    InitialApicId = ACPIInternalSetDeviceInterface(v1, &GUID_DEVICE_PROCESSOR);
    if ( InitialApicId < 0 )
      goto LABEL_43;
    goto LABEL_39;
  }
  InitialApicId = IoSetDevicePropertyData(v1, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 7u, 4u, &Data);
  if ( InitialApicId >= 0 )
LABEL_39:
    *(_DWORD *)(v4 + 368) = 2;
  v20 = *(_QWORD *)(v4 + 792);
  if ( _bittest64((const signed __int64 *)(v20 + 8), 0x25u) )
    ACPICheckModuleStarted(v20, InitialApicId);
  ACPIProcessorContainerLinkChildProcessor(v4);
LABEL_43:
  v5->IoStatus.Status = InitialApicId;
  IofCompleteRequest(v5, 0);
}
