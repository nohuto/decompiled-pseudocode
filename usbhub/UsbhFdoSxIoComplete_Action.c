/*
 * XREFs of UsbhFdoSxIoComplete_Action @ 0x1C000C140
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogHubPowerEvent @ 0x1C00096F0 (UsbhEtwLogHubPowerEvent.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C001AB8C (UsbhAcquireFdoPwrLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003C0B8 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003C7C0 (UsbhPoStartNextPowerIrp_Fdo.c)
 */

__int64 __fastcall UsbhFdoSxIoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v7; // rax
  int LowPart; // ebp
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbx
  KIRQL v12; // al
  int v13; // ecx
  POWER_STATE v14; // ebx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  KIRQL v19; // dl
  NTSTATUS v20; // eax
  int v21; // edi
  int v23; // [rsp+68h] [rbp+10h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = FdoExt(DeviceObject);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v9 = v7;
  if ( LowPart != ((CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) )
    LowPart = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  Log((_DWORD)DeviceObject, 16, 1937262915, (_DWORD)Context, (__int64)Irp);
  v10 = Context[9];
  v11 = FdoExt(DeviceObject);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 5056));
  v13 = *(_DWORD *)(v11 + 4172);
  *(_BYTE *)(v11 + 5064) = v12;
  *(_DWORD *)(v10 + 40) = v13;
  *(_DWORD *)(v10 + 44) = 112;
  *(_DWORD *)(v10 + 32) = 844055622;
  *(_DWORD *)(v10 + 36) = 829977449;
  *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v11 + 1344) = v10;
  *(_DWORD *)(v9 + 4216) = 0;
  if ( *(_DWORD *)(FdoExt(DeviceObject) + 4LL * LowPart + 5008) == 3 )
  {
    v14.SystemState = PowerSystemSleeping2;
    v15 = 1;
  }
  else
  {
    v14.SystemState = PowerSystemSleeping3;
    v15 = 0;
  }
  *(_DWORD *)(v9 + 4216) = v15;
  if ( v15 == 1 && LowPart > 4 )
    *(_DWORD *)(v9 + 4216) = 2;
  v16 = FdoExt(DeviceObject);
  v17 = ((unsigned __int8)*(_DWORD *)(v16 + 828) + 1) & 7;
  *(_DWORD *)(v16 + 828) = v17;
  v17 *= 32LL;
  *(_DWORD *)(v17 + v16 + 284) = 112;
  *(_DWORD *)(v17 + v16 + 288) = *(_DWORD *)(v16 + 4172);
  *(_QWORD *)(v17 + v16 + 292) = 203LL;
  *(_DWORD *)(v16 + 4172) = 203;
  *((_DWORD *)Context + 22) = *(_DWORD *)(v9 + 4216);
  *((POWER_STATE *)Context + 7) = v14;
  v23 = *(_DWORD *)(FdoExt(DeviceObject) + 4212);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = LowPart;
  v18 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v10 + 8));
  *(_DWORD *)(v10 + 32) = 1734964085;
  v19 = *(_BYTE *)(v18 + 5064);
  *(_QWORD *)(v18 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 5056), v19);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))Log)(
    (_DWORD)DeviceObject,
    16,
    1937265233,
    (POWER_STATE)v14.SystemState,
    (__int64)Irp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
      LowPart);
  UsbhEtwLogHubPowerEvent((__int64)DeviceObject, (__int64)Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_START);
  v20 = PoRequestPowerIrp(DeviceObject, 2u, v14, (PREQUEST_POWER_COMPLETE)UsbhFdoDxPoComplete_Action, Context, 0LL);
  v21 = v20;
  if ( v20 == 259 )
    return 3221225494LL;
  Log((_DWORD)DeviceObject, 16, 1937261906, v20, (__int64)Irp);
  Irp->IoStatus.Status = v21;
  UsbhAcquireFdoPwrLock(DeviceObject, v10, 117LL, 846754665LL);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = v23;
  UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2519LL);
  UsbhEtwLogHubPowerEvent((__int64)DeviceObject, (__int64)Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 1224), Irp, 0x20u);
  return 0LL;
}
