/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1C01E1A70
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C01E1A40 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C001A42C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DxgkReportDeviceDirectedPowerDown @ 0x1C0041FE4 (DxgkReportDeviceDirectedPowerDown.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C0180CF0 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01E1E80 (DpiFdoSetAdapterPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C01E2390 (DpiRequestIoPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C01E2B40 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01E7D80 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DxgkStartPnPTransition @ 0x1C020ACBC (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C0214FC4 (DxgkCompletePnPTransition.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02C935C (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiFdoDetermineAffectedSession @ 0x1C0396188 (DpiFdoDetermineAffectedSession.c)
 *     DpiFdoIsDevicePresent @ 0x1C0397F70 (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C0398498 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C03A3D4C (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C03A3ED8 (DpiLdaPowerUpAdapterInChain.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C03A4724 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  char *DeviceExtension; // rsi
  struct _DEVICE_OBJECT *v5; // r12
  __int64 Status; // rbp
  int LowPart; // edi
  __int64 v8; // rdx
  int v9; // eax
  struct _IO_STACK_LOCATION *v10; // rax
  struct _IO_STACK_LOCATION *v11; // rax
  NTSTATUS v12; // eax
  bool v13; // r13
  POWER_STATE v14; // edi
  int v15; // eax
  bool v16; // al
  CCHAR v17; // dl
  __int64 v19; // rdi
  char v20; // r13
  __int64 v21; // rax
  int IsDevicePresent; // eax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // r15
  char v26; // al
  char v27; // al
  unsigned __int64 v28; // rax
  void *started; // r12
  int v30; // eax
  struct _DEVICE_OBJECT *v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  struct _IO_STACK_LOCATION *v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-68h] BYREF
  bool v40; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v41; // [rsp+C0h] [rbp+18h] BYREF
  int v42; // [rsp+C8h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = DeviceObject;
  v40 = 0;
  LODWORD(Status) = 0;
  v36 = CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
LABEL_17:
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v10 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
      *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v10[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v10->Parameters.SetQuota + 6);
      v10[-1].FileObject = v10->FileObject;
      v10[-1].Control = 0;
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
      v11[-1].Context = &Event;
      v11[-1].Control = -32;
      PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      v12 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v12;
      if ( v12 )
        goto LABEL_108;
      Status = Irp->IoStatus.Status;
      if ( (_DWORD)Status != -1073741810 )
      {
        if ( (int)Status >= 0 )
        {
LABEL_20:
          v13 = v40;
LABEL_21:
          KeEnterCriticalRegion();
          if ( DeviceExtension[484] )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL)
                                                            + 4104LL));
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          if ( (int)Status < 0 )
          {
            v16 = v40;
            if ( v40 )
              DeviceExtension[496] = 0;
          }
          else
          {
            if ( CurrentStackLocation->MinorFunction == 2 )
            {
              v14.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
              if ( !v13 )
                DeviceExtension[496] = 0;
              if ( v14.SystemState < *((_DWORD *)DeviceExtension + 71) )
              {
                if ( *((_DWORD *)DeviceExtension + 126) )
                  v15 = DpiLdaPowerUpAdapterInChain(v5, Irp);
                else
                  v15 = DpiFdoSetAdapterPowerState(v5, v14, CurrentStackLocation->Parameters.Create.EaLength);
                LODWORD(Status) = v15;
              }
              if ( DeviceExtension[482] )
              {
                if ( v14.SystemState == PowerSystemWorking && !*((_DWORD *)DeviceExtension + 126) )
                  DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
                if ( v14.SystemState == PowerSystemSleeping3 && DeviceExtension[482] && DeviceExtension[4168] )
                {
                  v35 = *((_QWORD *)DeviceExtension + 489);
                  DeviceExtension[4168] = 0;
                  DxgkReportDeviceDirectedPowerDown(v35);
                }
              }
            }
            v16 = v40;
          }
          if ( CurrentStackLocation->MinorFunction == 2 )
          {
            if ( v16 )
            {
              KeClearEvent((PRKEVENT)(DeviceExtension + 1240));
              KeClearEvent((PRKEVENT)(DeviceExtension + 1264));
            }
            else
            {
              KeSetEvent((PRKEVENT)(DeviceExtension + 1264), 0, 0);
            }
          }
          if ( DeviceExtension[484] )
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
          PoStartNextPowerIrp(Irp);
          v17 = 1;
          goto LABEL_46;
        }
LABEL_108:
        WdLogSingleEntry1(2LL, Status);
        goto LABEL_20;
      }
      v19 = 0LL;
      v20 = 0;
      WdLogSingleEntry4(
        2LL,
        DpiFdoHandleDevicePower,
        v5,
        (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        -1073741810LL);
      if ( !*((_DWORD *)DeviceExtension + 126) || DeviceExtension[508] )
      {
        v19 = (__int64)DeviceExtension;
      }
      else
      {
        v21 = *((_QWORD *)DeviceExtension + 341);
        if ( v21 )
          v19 = *(_QWORD *)(v21 + 64);
      }
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4104LL));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v41 = 0;
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v41);
      v24 = v41;
      if ( IsDevicePresent < 0 )
        v24 = 0;
      v42 = v24;
      v41 = v24;
      if ( !(_BYTE)v24 )
        DeviceExtension[1161] = 1;
      if ( *((_DWORD *)DeviceExtension + 59) == 6 )
      {
        v13 = v40;
        if ( v40 || !*((_QWORD *)DeviceExtension + 61) )
          goto LABEL_95;
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v19, 0, 1);
      }
      else if ( v19 )
      {
        if ( !(_BYTE)v24 || (*(_BYTE *)(v19 + 3920) & 0x18) != 0 )
        {
          v25 = *((_QWORD *)DeviceExtension + 5);
          if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
          {
            if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
            {
              v26 = *(_BYTE *)(v19 + 3920);
              if ( (v26 & 0x10) == 0 && ((v26 & 8) == 0 || *(int *)(v19 + 3928) < 0x2000) )
                WdLogSingleEntry5(
                  0LL,
                  275LL,
                  25LL,
                  2LL - (DeviceExtension[1152] != 0),
                  *((unsigned int *)DeviceExtension + 281),
                  *((unsigned int *)DeviceExtension + 282));
            }
          }
          if ( (int)DpiDxgkDdiNotifySurpriseRemoval(v25, *((_QWORD *)DeviceExtension + 6), v19, 0LL) >= 0
            || (*(_BYTE *)(v19 + 3920) & 0x10) != 0 )
          {
            v20 = 1;
          }
          v27 = DeviceExtension[1152];
          if ( v27 || !v20 )
            DpiFdoRebootForSurpriseRemoval(v5, v27 != 0 ? 1 : 3);
        }
        else
        {
          v20 = 1;
        }
        v28 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
        started = (void *)DxgkStartPnPTransition(0LL, v28);
        if ( !started )
          WdLogSingleEntry1(6LL, -1073741670LL);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v19 + 3808), 1u);
        if ( !v20 )
          DeviceExtension[1162] = 1;
        *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
        v30 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 60) = v30;
        *((_DWORD *)DeviceExtension + 59) = 6;
        ExReleaseResourceLite((PERESOURCE)(v19 + 3808));
        KeLeaveCriticalRegion();
        v13 = v40;
        if ( !v40 && *((_QWORD *)DeviceExtension + 61) )
          DpiSetDevicePowerTransitionStateAtPassiveLevel(v19, 0, 1);
        DpiRequestIoPowerState(*(_QWORD *)(v19 + 24), 4LL);
        DxgkCompletePnPTransition(started);
        if ( (char *)v19 != DeviceExtension )
        {
          v31 = *(struct _DEVICE_OBJECT **)(v19 + 152);
          *(_BYTE *)(v19 + 232) = 1;
          IoInvalidateDeviceState(v31);
          DxgCreateLiveDumpWithWdLogs2(403LL, 2051LL, -1073741810LL, *(int *)(v19 + 236), *(int *)(v19 + 240), 0LL);
        }
        v5 = DeviceObject;
        CurrentStackLocation = v36;
      }
      else
      {
        v32 = *((_DWORD *)DeviceExtension + 60);
        v33 = *((_DWORD *)DeviceExtension + 69) & 7;
        v13 = v40;
        DeviceExtension[1162] = 1;
        *(_DWORD *)&DeviceExtension[4 * v33 + 244] = v32;
        v34 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 60) = v34;
        *((_DWORD *)DeviceExtension + 59) = 6;
      }
      LOBYTE(v24) = v42;
LABEL_95:
      if ( (struct _DEVICE_OBJECT *)qword_1C013B740 == v5 )
      {
        if ( (_BYTE)v24 )
        {
          if ( dword_1C013B7F0 == 3 && byte_1C013B810 )
          {
            LOBYTE(v23) = 1;
            DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C013B750, v23, 0LL);
            byte_1C013B810 = 0;
            dword_1C013B83C = 1;
          }
        }
        else
        {
          qword_1C013B740 = 0LL;
        }
      }
      if ( DeviceExtension[484] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_21;
    }
LABEL_53:
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    LODWORD(Status) = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    return (unsigned int)Status;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v40 = LowPart > 1;
  WdLogSingleEntry3(9LL, DeviceExtension, LowPart, *((int *)DeviceExtension + 71));
  if ( LowPart > 1 && !DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
  {
    v37 = -300000000LL;
    LOBYTE(v8) = 1;
    DpiFdoStopMiracastSession(v5, v8, &v37, 131LL);
  }
  KeEnterCriticalRegion();
  if ( DeviceExtension[484] )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4104LL), 1u);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( LowPart <= *((_DWORD *)DeviceExtension + 71)
    || (*((_DWORD *)DeviceExtension + 126)
      ? (v9 = DpiLdaPowerDownAllAdaptersInChain(v5, Irp))
      : (v9 = DpiFdoSetAdapterPowerState(v5, (POWER_STATE)LowPart, CurrentStackLocation->Parameters.Create.EaLength)),
        LODWORD(Status) = v9,
        v9 >= 0) )
  {
    if ( LowPart <= 1 )
      KeSetEvent((PRKEVENT)(DeviceExtension + 1240), 0, 0);
    else
      DeviceExtension[496] = 1;
  }
  if ( DeviceExtension[484] )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (_DWORD)Status == -1073741637 )
    goto LABEL_53;
  if ( (int)Status >= 0 )
    goto LABEL_17;
  PoStartNextPowerIrp(Irp);
  v17 = 0;
  Irp->IoStatus.Status = Status;
LABEL_46:
  IofCompleteRequest(Irp, v17);
  return (unsigned int)Status;
}
