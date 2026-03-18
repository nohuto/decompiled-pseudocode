/*
 * XREFs of Usbh_HRS_ResetStop @ 0x1C003E5D0
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001A550 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseResetLock @ 0x1C0032678 (UsbhReleaseResetLock.c)
 */

__int64 __fastcall Usbh_HRS_ResetStop(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  unsigned int v5; // r14d
  unsigned int v6; // ebx

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
  if ( (int)v3 > 0 )
  {
    if ( (int)v3 <= 2 )
      goto LABEL_13;
    v6 = 3;
    if ( (_DWORD)v3 == 3 )
      goto LABEL_13;
    if ( (_DWORD)v3 == 9 )
    {
      KeResetEvent((PRKEVENT)(v4 + 712));
      IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), (PIO_WORKITEM_ROUTINE)UsbhHardResetWorker, DelayedWorkQueue, 0LL);
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v6);
    }
    if ( (int)v3 > 9 && (int)v3 <= 11 )
    {
LABEL_13:
      v6 = 4;
      return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v6);
    }
  }
  v6 = v5;
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v6);
}
