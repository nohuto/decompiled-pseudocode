/*
 * XREFs of ACPIFilterIrpFilterResourceRequirements @ 0x1C0085A90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalInterruptPolarityCacheStorePolarity @ 0x1C002EAA0 (ACPIInternalInterruptPolarityCacheStorePolarity.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C008FBC8 (PnpBiosUpdateResourceListWithSidebandResources.c)
 */

__int64 __fastcall ACPIFilterIrpFilterResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v6; // rax
  unsigned int Status; // r14d
  __int64 v8; // rcx
  const char *v9; // rbp
  char *v10; // rax
  const char *v11; // r8
  const char *v12; // r10
  __int64 v13; // r11
  void *Information; // r12
  int updated; // eax
  int v16; // r13d
  char *IrpText; // rax
  const char *v18; // r8
  const char *v19; // r10
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r15
  char *v23; // rax
  const char *v24; // r8
  __int64 v25; // r11
  __int64 v27; // rax
  const char *v28; // rdx
  const char *v29; // rcx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  P = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v8 = 0x80000000LL;
  v9 = byte_1C00622D0;
  if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
  {
    Information = (void *)a2->IoStatus.Information;
    if ( !Information )
      Information = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    updated = PnpBiosUpdateResourceListWithSidebandResources(a1, Information, &P, DeviceExtension + 112);
    v16 = updated;
    if ( updated != -1073741772 )
    {
      if ( updated >= 0 )
      {
        v20 = *(_QWORD *)(DeviceExtension + 112);
        v21 = v20 + 8;
        v22 = v20 + 8 + 32LL * *(unsigned int *)(v20 + 4);
        while ( 1 )
        {
          if ( v21 >= v22 )
          {
            if ( Information )
              ExFreePoolWithTag(Information, 0);
            Status = v16;
            a2->IoStatus.Information = (unsigned __int64)P;
            goto LABEL_22;
          }
          if ( *(_BYTE *)(v21 + 1) == 2 )
          {
            v16 = ACPIInternalInterruptPolarityCacheStorePolarity(
                    DeviceExtension,
                    *(_DWORD *)(v21 + 12),
                    *(_DWORD *)(v21 + 16));
            if ( v16 < 0 )
              break;
          }
          v21 += 32LL;
        }
        v27 = *(_QWORD *)(DeviceExtension + 8);
        v28 = byte_1C00622D0;
        v29 = byte_1C00622D0;
        if ( (v27 & 0x200000000000LL) != 0 )
        {
          v28 = *(const char **)(DeviceExtension + 608);
          if ( (v27 & 0x400000000000LL) != 0 )
            v29 = *(const char **)(DeviceExtension + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x12u,
            (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
            (char)a2,
            v16,
            DeviceExtension,
            v28,
            v29);
        ExFreePoolWithTag(P, 0);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(v8, 0xDu);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x11u,
          (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
          (char)a2,
          (__int64)IrpText,
          v16,
          DeviceExtension,
          v19,
          v18);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = ACPIDebugGetIrpText(0x80000000LL, 0xDu);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x10u,
      v13,
      (char)a2,
      (__int64)v10,
      Status,
      DeviceExtension,
      v12,
      v11);
  }
LABEL_22:
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v9 = *(const char **)(DeviceExtension + 608);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = ACPIDebugGetIrpText(v8, 0xDu);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x13u,
      v25,
      (char)a2,
      (__int64)v23,
      Status,
      DeviceExtension,
      v9,
      v24);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
