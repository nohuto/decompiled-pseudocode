/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x1C000CA20
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x1C0017B0C (UsbhQueueWorkItemEx.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0018364 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C001CE0C (UsbhSetFdoPowerState.c)
 *     GET_FDO_POWER_STATE @ 0x1C001CE84 (GET_FDO_POWER_STATE.c)
 *     WPP_RECORDER_SF_ @ 0x1C002EEF4 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhFdoWakePoComplete_Action(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  KIRQL v10; // al
  int v11; // ecx
  unsigned int Status; // r14d
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  KIRQL v17; // dl
  unsigned int v18; // eax
  int v19; // eax

  v6 = FdoExt(DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  v7 = FdoExt(DeviceObject);
  *(_QWORD *)(v6 + 4888) = 0LL;
  *(_DWORD *)(v6 + 4884) = 1;
  v8 = v7 + 1384;
  v9 = FdoExt(DeviceObject);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 5056));
  v11 = *(_DWORD *)(v9 + 4172);
  *(_BYTE *)(v9 + 5064) = v10;
  *(_DWORD *)(v8 + 40) = v11;
  *(_DWORD *)(v8 + 44) = 122;
  *(_DWORD *)(v8 + 32) = 844055622;
  *(_DWORD *)(v8 + 36) = 829120887;
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v9 + 1344) = v8;
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    Log((_DWORD)DeviceObject, 16, 1750548811, 0, 0LL);
    *(_DWORD *)(v6 + 2560) |= 0x20000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        14,
        (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
    if ( (unsigned int)GET_FDO_POWER_STATE(v8) == 201 )
    {
      v19 = FdoExt(DeviceObject);
      Status = UsbhQueueWorkItemEx(
                 (_DWORD)DeviceObject,
                 1,
                 (unsigned int)UsbhSShResumeWorker,
                 v19 + 1912,
                 0,
                 2001228627,
                 0LL);
    }
    KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
    v18 = GET_FDO_POWER_STATE(v8);
    UsbhSetFdoPowerState(DeviceObject, Status, v18, 122LL);
    UsbhReleaseFdoPwrLock(DeviceObject, v8);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
    FdoExt(*(_QWORD *)(v8 + 8));
    v13 = *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172);
    v14 = FdoExt(DeviceObject);
    v15 = ((unsigned __int8)*(_DWORD *)(v14 + 828) + 1) & 7;
    *(_DWORD *)(v14 + 828) = v15;
    v15 *= 32LL;
    *(_DWORD *)(v15 + v14 + 284) = 125;
    *(_DWORD *)(v15 + v14 + 288) = *(_DWORD *)(v14 + 4172);
    *(_DWORD *)(v15 + v14 + 292) = v13;
    *(_DWORD *)(v15 + v14 + 296) = Status;
    *(_DWORD *)(v14 + 4172) = v13;
    v16 = FdoExt(DeviceObject);
    FdoExt(*(_QWORD *)(v8 + 8));
    *(_DWORD *)(v8 + 32) = 1734964085;
    v17 = *(_BYTE *)(v16 + 5064);
    *(_QWORD *)(v16 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 5056), v17);
  }
}
