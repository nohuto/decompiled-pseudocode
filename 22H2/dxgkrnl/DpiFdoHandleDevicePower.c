/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C0175FC0
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C0175700 (DpiFdoDispatchPower.c)
 * Callees:
 *     DxgkReportDeviceDirectedPowerDown @ 0x1C003C21C (DxgkReportDeviceDirectedPowerDown.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0051CEC (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C012E4DC (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0175240 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C0175EA0 (DpiFdoStopMiracastSession.c)
 *     DpiRequestIoPowerState @ 0x1C01763B0 (DpiRequestIoPowerState.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C017A1CC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DxgkStartPnPTransition @ 0x1C019489C (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C019BB04 (DxgkCompletePnPTransition.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0221860 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     DpiFdoDetermineAffectedSession @ 0x1C02C86F8 (DpiFdoDetermineAffectedSession.c)
 *     DpiFdoIsDevicePresent @ 0x1C02CB974 (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C02CBF1C (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C02D843C (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C02D85E8 (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C02D8E40 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v3; // r12
  unsigned int *DeviceExtension; // rdi
  __int64 Status; // rbp
  bool v8; // r15
  __int64 LowPart; // rbx
  _QWORD *v10; // rax
  int v11; // eax
  struct _IO_STACK_LOCATION *v12; // rax
  struct _IO_STACK_LOCATION *v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // r12
  POWER_STATE v18; // ebx
  int v19; // eax
  char v20; // cl
  CCHAR v21; // dl
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rax
  int IsDevicePresent; // eax
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  _QWORD *v33; // rax
  char v34; // al
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  void *started; // r15
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // r8
  struct _DEVICE_OBJECT *v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  union _LARGE_INTEGER v50; // [rsp+30h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-60h] BYREF
  bool v52; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v53; // [rsp+A8h] [rbp+10h] BYREF
  int v54; // [rsp+B0h] [rbp+18h]
  struct _IO_STACK_LOCATION *v55; // [rsp+B8h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  v52 = 0;
  LODWORD(Status) = 0;
  v55 = CurrentStackLocation;
  v8 = 0;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
LABEL_17:
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
      *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v12[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v12->Parameters.SetQuota + 6);
      v12[-1].FileObject = v12->FileObject;
      v12[-1].Control = 0;
      v13 = Irp->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
      v13[-1].Context = &Event;
      v13[-1].Control = -32;
      PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v14;
      if ( v14 )
        goto LABEL_20;
      Status = Irp->IoStatus.Status;
      if ( (_DWORD)Status != -1073741810 )
      {
        if ( (int)Status >= 0 )
        {
LABEL_21:
          v17 = v52;
          goto LABEL_22;
        }
LABEL_20:
        v48 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v48 + 24) = Status;
        WdLogEvent5_WdError(v48);
        goto LABEL_21;
      }
      v23 = 0LL;
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v24[3] = DpiFdoHandleDevicePower;
      v24[4] = DeviceObject;
      v24[5] = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v24[6] = -1073741810LL;
      WdLogEvent5_WdError(v24);
      if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
      {
        v23 = (__int64)DeviceExtension;
      }
      else
      {
        v25 = *((_QWORD *)DeviceExtension + 341);
        if ( v25 )
          v23 = *(_QWORD *)(v25 + 64);
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 484) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4080LL));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v53 = 0;
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v53);
      v27 = v53;
      v28 = 0LL;
      if ( IsDevicePresent < 0 )
        v27 = 0;
      v54 = v27;
      v53 = v27;
      if ( !(_BYTE)v27 )
        *((_BYTE *)DeviceExtension + 1160) = 1;
      if ( DeviceExtension[59] == 6 )
      {
        if ( v8 || !*((_QWORD *)DeviceExtension + 61) )
          goto LABEL_95;
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v23, 0, 1);
      }
      else
      {
        if ( v23 )
        {
          if ( !(_BYTE)v27 || (*(_BYTE *)(v23 + 3904) & 0x18) != 0 )
          {
            v29 = *((_QWORD *)DeviceExtension + 5);
            if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
            {
              if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
              {
                v32 = *(_BYTE *)(v23 + 3904);
                if ( (v32 & 0x10) == 0 && ((v32 & 8) == 0 || *(int *)(v23 + 3912) < 0x2000) )
                {
                  v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30);
                  v33[3] = 275LL;
                  v33[4] = 25LL;
                  v33[5] = 2LL - (*((_BYTE *)DeviceExtension + 1152) != 0);
                  v33[6] = DeviceExtension[281];
                  v33[7] = DeviceExtension[282];
                  WdLogEvent5_WdCriticalError(v33);
                }
              }
            }
            if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v29, *((_QWORD *)DeviceExtension + 6), v23, 0LL) >= 0
              || (*(_BYTE *)(v23 + 3904) & 0x10) != 0 )
            {
              v3 = 1;
            }
            v34 = *((_BYTE *)DeviceExtension + 1152);
            if ( v34 || !v3 )
              DpiFdoRebootForSurpriseRemoval(DeviceObject, v34 != 0 ? 1 : 3);
          }
          else
          {
            v3 = 1;
          }
          v35 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
          started = (void *)DxgkStartPnPTransition(0LL, v35);
          if ( !started )
          {
            v41 = WdLogNewEntry5_WdLowResource(v37, v36, v38, v39);
            *(_QWORD *)(v41 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v41);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v23 + 3792), 1u);
          if ( !v3 )
            *((_BYTE *)DeviceExtension + 1161) = 1;
          DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
          v42 = DeviceExtension[59];
          ++DeviceExtension[69];
          DeviceExtension[60] = v42;
          DeviceExtension[59] = 6;
          ExReleaseResourceLite((PERESOURCE)(v23 + 3792));
          KeLeaveCriticalRegion();
          v17 = v52;
          if ( !v52 && *((_QWORD *)DeviceExtension + 61) )
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v23, 0, 1);
          DpiRequestIoPowerState(*(_QWORD *)(v23 + 24), 4LL, v43, 0LL);
          DxgkCompletePnPTransition(started);
          if ( (unsigned int *)v23 != DeviceExtension )
          {
            v44 = *(struct _DEVICE_OBJECT **)(v23 + 152);
            *(_BYTE *)(v23 + 232) = 1;
            IoInvalidateDeviceState(v44);
            DxgCreateLiveDumpWithWdLogs(
              0x193u,
              0x803uLL,
              0xFFFFFFFFC000000EuLL,
              *(int *)(v23 + 236),
              *(int *)(v23 + 240),
              0);
          }
          LOBYTE(v27) = v54;
          CurrentStackLocation = v55;
          goto LABEL_96;
        }
        v45 = DeviceExtension[60];
        v46 = DeviceExtension[69] & 7;
        *((_BYTE *)DeviceExtension + 1161) = 1;
        DeviceExtension[v46 + 61] = v45;
        v47 = DeviceExtension[59];
        ++DeviceExtension[69];
        DeviceExtension[60] = v47;
        DeviceExtension[59] = 6;
      }
      LOBYTE(v27) = v54;
LABEL_95:
      v17 = v52;
LABEL_96:
      if ( (PDEVICE_OBJECT)qword_1C00B2DB8 == DeviceObject )
      {
        if ( (_BYTE)v27 )
        {
          if ( dword_1C00B2E68 == 3 && byte_1C00B2E88 )
          {
            LOBYTE(v28) = 1;
            DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C00B2DC8, v28, 0LL);
            byte_1C00B2E88 = 0;
            dword_1C00B2EB4 = 1;
          }
        }
        else
        {
          qword_1C00B2DB8 = 0LL;
        }
      }
      if ( *((_BYTE *)DeviceExtension + 484) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
LABEL_22:
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 484) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4080LL));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( (int)Status < 0 )
      {
        if ( v17 )
          *((_BYTE *)DeviceExtension + 496) = 0;
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 2 )
        {
LABEL_37:
          if ( *((_BYTE *)DeviceExtension + 484) )
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
          PoStartNextPowerIrp(Irp);
          v21 = 1;
          goto LABEL_40;
        }
        v18.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
        if ( !v17 )
          *((_BYTE *)DeviceExtension + 496) = 0;
        if ( v18.SystemState < (int)DeviceExtension[71] )
        {
          if ( DeviceExtension[126] )
            v19 = DpiLdaPowerUpAdapterInChain(DeviceObject, Irp);
          else
            v19 = DpiFdoSetAdapterPowerState(
                    DeviceObject,
                    v18,
                    (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                    HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                    CurrentStackLocation->Parameters.Create.EaLength);
          LODWORD(Status) = v19;
        }
        v20 = *((_BYTE *)DeviceExtension + 482);
        if ( v20 && !DeviceExtension[126] && v18.SystemState == PowerSystemWorking )
        {
          DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
          v20 = *((_BYTE *)DeviceExtension + 482);
        }
        if ( v20 && v18.SystemState == PowerSystemSleeping3 && *((_BYTE *)DeviceExtension + 4144) )
        {
          v49 = *((_QWORD *)DeviceExtension + 487);
          *((_BYTE *)DeviceExtension + 4144) = 0;
          DxgkReportDeviceDirectedPowerDown(v49);
        }
      }
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        if ( v17 )
        {
          KeClearEvent((PRKEVENT)(DeviceExtension + 310));
          KeClearEvent((PRKEVENT)(DeviceExtension + 316));
        }
        else
        {
          KeSetEvent((PRKEVENT)(DeviceExtension + 316), 0, 0);
        }
      }
      goto LABEL_37;
    }
LABEL_47:
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    return (unsigned int)Status;
  }
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = (int)LowPart > 1;
  v52 = (int)LowPart > 1;
  v10 = (_QWORD *)WdLogNewEntry5_WdPower();
  v10[3] = DeviceObject->DeviceExtension;
  v10[4] = LowPart;
  v10[5] = (int)DeviceExtension[71];
  WdLogEvent5_WdPower(v10);
  if ( (int)LowPart > 1 && !DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
  {
    v50.QuadPart = -300000000LL;
    DpiFdoStopMiracastSession((__int64)DeviceObject, 1, &v50, 0x83u);
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4080LL));
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( (int)LowPart <= (int)DeviceExtension[71]
    || (DeviceExtension[126]
      ? (v11 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp))
      : (v11 = DpiFdoSetAdapterPowerState(
                 DeviceObject,
                 (POWER_STATE)LowPart,
                 (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4,
                 HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                 CurrentStackLocation->Parameters.Create.EaLength)),
        LODWORD(Status) = v11,
        v11 >= 0) )
  {
    if ( (int)LowPart <= 1 )
      KeSetEvent((PRKEVENT)(DeviceExtension + 310), 0, 0);
    else
      *((_BYTE *)DeviceExtension + 496) = 1;
  }
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (_DWORD)Status == -1073741637 )
    goto LABEL_47;
  if ( (int)Status >= 0 )
    goto LABEL_17;
  PoStartNextPowerIrp(Irp);
  v21 = 0;
  Irp->IoStatus.Status = Status;
LABEL_40:
  IofCompleteRequest(Irp, v21);
  return (unsigned int)Status;
}
