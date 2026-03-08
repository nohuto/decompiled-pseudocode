/*
 * XREFs of Usbh_HRS_WaitReady @ 0x1C001F060
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseResetLock @ 0x1C0031DCC (UsbhReleaseResetLock.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C0044104 (UsbhResetNotifyDownstreamHub.c)
 */

__int64 __fastcall Usbh_HRS_WaitReady(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // r8
  int v7; // edi
  int v8; // edi
  unsigned int v9; // esi
  int v10; // edi
  __int64 v11; // rcx
  struct _KSEMAPHORE *v12; // rax
  __int64 Limit; // rcx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1651722574, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  v6 = 2LL;
  v7 = v3 - 2;
  if ( !v7 )
  {
    v6 = 1LL;
    goto LABEL_11;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    KeResetEvent((PRKEVENT)(v4 + 712));
    UsbhResetNotifyDownstreamHub(*(_QWORD *)(a1 + 8));
    IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), UsbhHardResetWorker, DelayedWorkQueue, 0LL);
    v6 = 3LL;
    goto LABEL_11;
  }
  v9 = 6;
  v10 = v8 - 6;
  if ( !v10 )
  {
LABEL_11:
    v11 = *(_QWORD *)(a1 + 8);
    return (unsigned int)UsbhReleaseResetLock(v11, a1, v6);
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v10 != 1 )
  {
    v6 = v5;
    return (unsigned int)UsbhReleaseResetLock(v11, a1, v6);
  }
  v12 = (struct _KSEMAPHORE *)FdoExt(v11);
  v12[87].Limit = 6;
  *(_DWORD *)(a1 + 68) = 6;
  *(_DWORD *)(a1 + 64) = 1734964085;
  Limit = (unsigned int)v12[28].Limit;
  v12[41].Header.WaitListHead.Flink = 0LL;
  v12[Limit + 29].Header.SignalState = 6;
  KeReleaseSemaphore(v12 + 88, 16, 1, 0);
  return v9;
}
