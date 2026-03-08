/*
 * XREFs of Usbh_HRS_ResetStop @ 0x1C003DC84
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseResetLock @ 0x1C0031DCC (UsbhReleaseResetLock.c)
 */

__int64 __fastcall Usbh_HRS_ResetStop(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbp
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1651722574, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  v6 = v3 - 1;
  if ( !v6 )
    goto LABEL_9;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_9;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_9;
  v9 = v8 - 6;
  if ( !v9 )
  {
    KeResetEvent((PRKEVENT)(v4 + 712));
    IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), (PIO_WORKITEM_ROUTINE)UsbhHardResetWorker, DelayedWorkQueue, 0LL);
    v5 = 3;
    return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
  if ( (unsigned int)(v9 - 1) <= 1 )
LABEL_9:
    v5 = 4;
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
}
