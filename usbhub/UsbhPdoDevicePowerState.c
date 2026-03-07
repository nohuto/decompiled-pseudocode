__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, struct _DEVICE_OBJECT *a2, IRP *a3)
{
  _DWORD *v6; // r14
  _DWORD *v7; // rdi
  POWER_STATE v8; // r12d
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rax
  KIRQL v17; // al
  bool v18; // zf
  KIRQL v19; // dl
  unsigned int v20; // ebx
  __int64 v21; // rbx
  KIRQL v22; // al
  int v23; // ecx
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  int v31; // ebx
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rbx
  KIRQL v35; // dl
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  BOOLEAN v42; // r9
  _DWORD *v43; // rax
  const EVENT_DESCRIPTOR *v44; // r8
  int Timeout; // [rsp+20h] [rbp-48h]
  int Timeouta; // [rsp+20h] [rbp-48h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+80h] [rbp+18h]

  v6 = PdoExt((__int64)a2);
  FdoExt(a1);
  v7 = PdoExt((__int64)a2) + 236;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v8.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  Log(a1, 16, 1885622372, (_DWORD)a2, (__int64)a3);
  v9 = UsbhIncPdoIoCount(a2, a3, 1884311383LL, 0LL);
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    if ( *((_BYTE *)v6 + 2740) )
    {
      UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1986356304LL);
      if ( v8.SystemState == PowerSystemWorking )
      {
        UsbhSetPdoPowerState((__int64)v7, (__int64)a2, v10, 1, 2);
        UsbhReleaseFdoPwrLock(a1, v7, v13, v14);
        UsbhClearPdoIdleReady(a1, (__int64)a2, (__int64)a3);
      }
      else
      {
        UsbhSetPdoPowerState((__int64)v7, (__int64)a2, v10, 4, 4);
        UsbhReleaseFdoPwrLock(a1, v7, v11, v12);
        UsbhSetPdoIdleReady(a1, (__int64)a2, (__int64)a3);
      }
      UsbhSet_Pdo_Dx(a2, v8);
    }
    Log(a1, 16, 1886545441, v9, (__int64)a3);
    *((_QWORD *)v6 + 320) = MEMORY[0xFFFFF78000000014];
    v15 = PdoExt((__int64)a2);
    UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v15 + 148), a2, a3, 1910LL, Timeouta);
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 0);
    return 0LL;
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v7[34] = 1;
  *((_BYTE *)v7 + 132) = v17;
  v7[22] = 2018460752;
  v7[23] = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v7;
  *((_QWORD *)v7 + 3) = KeGetCurrentThread();
  v18 = PdoExt((__int64)a2)[281] == 3;
  v7[34] = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v7[22] = 1734964085;
  v19 = *((_BYTE *)v7 + 132);
  if ( v18 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
    v21 = FdoExt(a1);
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 5056));
    v23 = *(_DWORD *)(v21 + 4172);
    *(_BYTE *)(v21 + 5064) = v22;
    v7[10] = v23;
    v7[11] = 126;
    v7[8] = 844055622;
    v7[9] = 1986356304;
    *((_QWORD *)v7 + 3) = KeGetCurrentThread();
    *(_QWORD *)(v21 + 1344) = v7;
    v24 = PdoExt((__int64)a2)[282];
    if ( v8.SystemState == PowerSystemWorking )
    {
      UsbhEtwLogDevicePowerEvent((__int64)v6, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH);
      *((_QWORD *)v6 + 319) = MEMORY[0xFFFFF78000000014];
      v31 = v24 - 1;
      if ( v31 )
      {
        if ( v31 != 6 )
        {
          FdoExt(*((_QWORD *)v7 + 1));
          switch ( *(_DWORD *)(FdoExt(*((_QWORD *)v7 + 1)) + 4172) )
          {
            case 0xC9:
            case 0xCE:
            case 0xD1:
            case 0xD2:
            case 0xD3:
              if ( (int)UsbhSet_D0_wQueued_Action(a1, v7, a2, a3, 0) < 0 )
                goto LABEL_31;
              KeResetEvent((PRKEVENT)(v6 + 590));
              UsbhSetPdoPowerState((__int64)v7, (__int64)a2, v33, 2, 6);
              v34 = FdoExt(a1);
              FdoExt(*((_QWORD *)v7 + 1));
              v7[8] = 1734964085;
              v35 = *(_BYTE *)(v34 + 5064);
              *(_QWORD *)(v34 + 1344) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 5056), v35);
              return 259LL;
            case 0xD4:
            case 0xD5:
LABEL_31:
              UsbhSetPdoPowerState((__int64)v7, (__int64)a2, v32, 6, 3);
              v20 = 0;
              if ( (unsigned int)GET_FDO_POWER_STATE(v7) == 213 )
                v20 = -1073741810;
              UsbhReleaseFdoPwrLock(a1, v7, v36, v37);
              goto LABEL_34;
            default:
              UsbhSetPdoPowerState((__int64)v7, (__int64)a2, v32, 6, 3);
              goto LABEL_40;
          }
        }
        UsbhSetPdoPowerState((__int64)v7, (__int64)a2, v30, 7, 13);
        UsbhReleaseFdoPwrLock(a1, v7, v40, v41);
        Log(a1, 16, 2003059760, 0, *((unsigned __int16 *)v6 + 714));
        KeWaitForSingleObject(v6 + 590, Executive, 0, v42, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState((__int64)v7, (__int64)a2, v30, 1, 2);
LABEL_40:
        UsbhReleaseFdoPwrLock(a1, v7, v38, v39);
      }
      v20 = 0;
      goto LABEL_42;
    }
    if ( v8.SystemState != PowerSystemSleeping1 && (unsigned int)(v8.SystemState - 3) >= 2 )
    {
      v20 = -1073741811;
      UsbhReleaseFdoPwrLock(a1, v7, v25, v26);
      goto LABEL_42;
    }
    Timeout = 0;
    UsbhEtwLogDevicePowerEvent((__int64)v6, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH);
    if ( PdoExt((__int64)a2)[197] == v8.SystemState )
    {
      v20 = 0;
      UsbhReleaseFdoPwrLock(a1, v7, v28, v29);
      goto LABEL_42;
    }
    if ( v6[288] != 2 )
    {
      v20 = -1073741130;
      UsbhReleaseFdoPwrLock(a1, v7, v28, v29);
      goto LABEL_42;
    }
    if ( !CurrentStackLocation->Parameters.Create.EaLength )
    {
      if ( !*((_BYTE *)v6 + 2733) )
      {
        *((_BYTE *)v6 + 2733) = 1;
        UsbhQueueWorkItemEx(a1, 1, (unsigned int)&UsbhSetPdoSelectiveSuspendedKey, (_DWORD)a2, 0, 2001228627, 0LL);
      }
      if ( v8.SystemState == PowerSystemSleeping3
        && (PdoExt((__int64)a2)[295] & 0x10) != 0
        && (v6[355] & 0xC00000) == 0xC00000 )
      {
        KeSetEvent((PRKEVENT)(v6 + 730), 0, 0);
        v6[355] = v6[355] & 0xFAFFFFFF | 0x4000000;
      }
    }
    v20 = UsbhPdoSetDx(v7, a2, a3);
LABEL_34:
    if ( v20 != -1073741810 && v20 != -1073741667 )
      goto LABEL_42;
  }
  else
  {
    v20 = -1073741810;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v19);
  }
  UsbhPCE_BusDisconnect(a1, v7, *((unsigned __int16 *)v6 + 714));
LABEL_42:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v27,
      1,
      22,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *((_WORD *)v6 + 714),
      v8.SystemState);
  UsbhSet_Pdo_Dx(a2, CurrentStackLocation->Parameters.Power.State);
  *((_QWORD *)v6 + 320) = MEMORY[0xFFFFF78000000014];
  v43 = PdoExt((__int64)a2);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v43 + 148), a2, a3, 2101LL, Timeout);
  v44 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
  if ( v8.SystemState != PowerSystemWorking )
    v44 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
  UsbhEtwLogDevicePowerEvent((__int64)v6, (__int64)a3, v44);
  a3->IoStatus.Status = v20;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a3);
  return v20;
}
