/*
 * XREFs of UsbhFdoDxPoComplete_Action @ 0x1C000B5D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogHubPowerEvent @ 0x1C00096F0 (UsbhEtwLogHubPowerEvent.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhReleasePowerContext @ 0x1C001BA68 (UsbhReleasePowerContext.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhFdoDxPoComplete_Action(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  IRP *v5; // rdi
  __int64 v8; // rsi
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rsi
  KIRQL v13; // al
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  KIRQL v18; // dl
  __int64 v19; // rax
  __int64 CurrentStackLocation; // rbx
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r11

  v5 = (IRP *)Context[7];
  v8 = MinorFunction;
  v10 = FdoExt(DeviceObject);
  Log(DeviceObject, 16, 1685606467, (_DWORD)Context, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
      PowerState.SystemState);
  v11 = Context[9];
  v12 = FdoExt(DeviceObject);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
  v14 = *(_DWORD *)(v12 + 4172);
  *(_BYTE *)(v12 + 5064) = v13;
  *(_DWORD *)(v11 + 40) = v14;
  *(_DWORD *)(v11 + 44) = 108;
  *(_DWORD *)(v11 + 32) = 844055622;
  *(_DWORD *)(v11 + 36) = 1869641828;
  *(_QWORD *)(v11 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v12 + 1344) = v11;
  v5->IoStatus.Status = IoStatus->Status;
  *(_BYTE *)(v10 + 4184) = 1;
  *(POWER_STATE *)(FdoExt(DeviceObject) + 4208) = PowerState;
  v15 = FdoExt(DeviceObject);
  v16 = ((unsigned __int8)*(_DWORD *)(v15 + 828) + 1) & 7;
  *(_DWORD *)(v15 + 828) = v16;
  v16 *= 32LL;
  *(_DWORD *)(v16 + v15 + 284) = 108;
  *(_DWORD *)(v16 + v15 + 288) = *(_DWORD *)(v15 + 4172);
  *(_QWORD *)(v16 + v15 + 292) = 205LL;
  *(_DWORD *)(v15 + 4172) = 205;
  v17 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v11 + 8));
  *(_DWORD *)(v11 + 32) = 1734964085;
  v18 = *(_BYTE *)(v17 + 5064);
  *(_QWORD *)(v17 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 5056), v18);
  UsbhEtwLogHubPowerEvent(DeviceObject, (__int64)v5, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE);
  UsbhReleasePowerContext(DeviceObject, Context);
  v19 = FdoExt(DeviceObject);
  CurrentStackLocation = (__int64)v5->Tail.Overlay.CurrentStackLocation;
  v21 = v19;
  v22 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v22 <= 1 )
  {
    Log(DeviceObject, 16, 1347374641, *(_QWORD *)(v21 + 8 * v22 + 840), (__int64)v5);
    Log(DeviceObject, 16, 1347374642, *(_QWORD *)(v24 + 8 * v23 + 856), CurrentStackLocation);
    *(_QWORD *)(v26 + 8 * v25 + 840) = 0LL;
    *(_QWORD *)(v26 + 8 * v25 + 856) = 0LL;
    *(_DWORD *)(v26 + 4 * v25 + 872) = 1913;
    PoStartNextPowerIrp(v5);
  }
  IofCompleteRequest(v5, 0);
  *(_QWORD *)(v10 + 5080) = MEMORY[0xFFFFF78000000014];
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 1224), v5, 0x20u);
}
