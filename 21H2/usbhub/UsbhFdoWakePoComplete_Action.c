/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x1C00074C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0002868 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhFdoWakePoComplete_Action(
        __int64 DeviceObject,
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
  int Status; // r14d
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax

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
  if ( IoStatus->Status < 0 )
  {
    KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
    FdoExt(*(_QWORD *)(v8 + 8));
    v13 = *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172);
    v14 = FdoExt(DeviceObject);
    v18 = ((unsigned __int8)*(_DWORD *)(v14 + 828) + 1) & 7;
    *(_DWORD *)(v14 + 828) = v18;
    v16 = 32 * v18;
    *(_DWORD *)(v16 + v14 + 284) = 125;
  }
  else
  {
    Log(DeviceObject, 16, 1750548811, 0, 0LL);
    *(_DWORD *)(v6 + 2560) |= 0x20000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        14,
        (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
    FdoExt(*(_QWORD *)(v8 + 8));
    if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172) == 201 )
    {
      v19 = FdoExt(DeviceObject);
      Status = UsbhQueueWorkItemEx(DeviceObject, 1u, (int)UsbhSShResumeWorker, v19 + 1912, 0, 2001228627, 0LL);
    }
    KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
    FdoExt(*(_QWORD *)(v8 + 8));
    v13 = *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172);
    v14 = FdoExt(DeviceObject);
    v15 = ((unsigned __int8)*(_DWORD *)(v14 + 828) + 1) & 7;
    *(_DWORD *)(v14 + 828) = v15;
    v16 = 32 * v15;
    *(_DWORD *)(v16 + v14 + 284) = 122;
  }
  *(_DWORD *)(v16 + v14 + 288) = *(_DWORD *)(v14 + 4172);
  *(_DWORD *)(v16 + v14 + 292) = v13;
  *(_DWORD *)(v16 + v14 + 296) = Status;
  *(_DWORD *)(v14 + 4172) = v13;
  v17 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v8 + 8));
  *(_DWORD *)(v8 + 32) = 1734964085;
  *(_QWORD *)(v17 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 5056), *(_BYTE *)(v17 + 5064));
}
