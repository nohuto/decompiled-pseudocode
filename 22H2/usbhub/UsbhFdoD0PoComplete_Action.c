/*
 * XREFs of UsbhFdoD0PoComplete_Action @ 0x1C000E620
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0012210 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00176F8 (UsbhAcquireFdoPwrLock.c)
 *     UsbhAllocWorkItem @ 0x1C0017C80 (UsbhAllocWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003CA70 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003D17C (UsbhPoStartNextPowerIrp_Fdo.c)
 */

void __fastcall UsbhFdoD0PoComplete_Action(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v8; // r15
  __int64 v9; // r14
  int Status; // r12d
  char v11; // r13
  __int64 v12; // rsi
  KIRQL v13; // al
  int v14; // ecx
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  KIRQL v19; // dl
  char v20; // si
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rsi
  void (__fastcall *v24)(PDEVICE_OBJECT, __int64, void *, _QWORD, __int64, int); // rax
  int v25; // esi
  int v26; // [rsp+28h] [rbp-50h]
  IRP *Irp; // [rsp+40h] [rbp-38h]
  __int64 v28; // [rsp+98h] [rbp+20h]
  char IoStatusa; // [rsp+A0h] [rbp+28h]

  v8 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1680896111, (_DWORD)Context, IoStatus->Status);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  v9 = Context[9];
  Status = IoStatus->Status;
  Irp = (IRP *)Context[7];
  v11 = 0;
  Log((_DWORD)DeviceObject, 16, 1685090097, (_DWORD)Context, v9);
  v12 = FdoExt(DeviceObject);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
  v14 = *(_DWORD *)(v12 + 4172);
  *(_BYTE *)(v12 + 5064) = v13;
  *(_DWORD *)(v9 + 40) = v14;
  *(_DWORD *)(v9 + 44) = 110;
  *(_DWORD *)(v9 + 32) = 844055622;
  *(_DWORD *)(v9 + 36) = 829436004;
  *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v12 + 1344) = v9;
  *(_QWORD *)(v8 + 5088) = MEMORY[0xFFFFF78000000014];
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
  }
  else
  {
    v15 = *(_DWORD *)(FdoExt(DeviceObject) + 4212);
    v16 = FdoExt(DeviceObject);
    v17 = ((unsigned __int8)*(_DWORD *)(v16 + 828) + 1) & 7;
    *(_DWORD *)(v16 + 828) = v17;
    v17 *= 32LL;
    *(_DWORD *)(v17 + v16 + 284) = 110;
    *(_DWORD *)(v17 + v16 + 288) = *(_DWORD *)(v16 + 4172);
    *(_DWORD *)(v17 + v16 + 292) = 210;
    *(_DWORD *)(v17 + v16 + 296) = v15;
    *(_DWORD *)(v16 + 4172) = 210;
    *(_DWORD *)(FdoExt(DeviceObject) + 4208) = 1;
    v18 = FdoExt(DeviceObject);
    FdoExt(*(_QWORD *)(v9 + 8));
    *(_DWORD *)(v9 + 32) = 1734964085;
    v19 = *(_BYTE *)(v18 + 5064);
    *(_QWORD *)(v18 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 5056), v19);
    Log((_DWORD)DeviceObject, 16, 1935962161, 0, (__int64)Context);
    v20 = *(_BYTE *)(FdoExt(DeviceObject) + 5268);
    IoStatusa = v20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        46,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0);
    Log((_DWORD)DeviceObject, 8, 1632720717, 1769428816, (__int64)Context);
    v22 = UsbhAllocWorkItem((_DWORD)DeviceObject, (unsigned int)UsbhFdoD0Worker_Action, (_DWORD)Context, 0, v21, v20);
    v23 = v22;
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          47,
          (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
          0);
      Log((_DWORD)DeviceObject, 8, 1364479275, 1769428816, v23);
      v28 = *(_QWORD *)(v23 + 40);
      v24 = *(void (__fastcall **)(PDEVICE_OBJECT, __int64, void *, _QWORD, __int64, int))(FdoExt(DeviceObject) + 4784);
      if ( v24 )
      {
        LOBYTE(v26) = IoStatusa;
        v24(DeviceObject, v28, &UsbhHubWorker, 0LL, v23, v26);
        v25 = 0;
      }
      else
      {
        v25 = -1073741822;
      }
    }
    else
    {
      v25 = -1073741670;
    }
    if ( (v25 & 0xC0000000) == 0xC0000000 )
    {
      *(_QWORD *)(v8 + 5096) = MEMORY[0xFFFFF78000000014];
      UsbhAcquireFdoPwrLock(DeviceObject, v9, 132LL, 846213220LL);
      UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
    }
    else
    {
      v11 = 1;
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    0LL,
    Context + 15,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COMPLETE,
    (POWER_STATE)PowerState.SystemState,
    Status);
  if ( dword_1C006C5DC )
  {
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2047LL);
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Irp, 0x20u);
  }
  *(_QWORD *)(v8 + 5080) = MEMORY[0xFFFFF78000000014];
  if ( !v11 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Context, 0x20u);
}
