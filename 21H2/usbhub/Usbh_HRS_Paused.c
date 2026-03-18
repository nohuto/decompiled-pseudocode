/*
 * XREFs of Usbh_HRS_Paused @ 0x1C001CBFC
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001C920 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseResetLock @ 0x1C0031400 (UsbhReleaseResetLock.c)
 */

__int64 __fastcall Usbh_HRS_Paused(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // r8
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  struct _KSEMAPHORE *v12; // rax
  unsigned int v13; // ebx
  __int64 Limit; // rcx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920159827, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  v6 = v3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = 6LL;
      v9 = v7 - 1;
      if ( v9 && (v10 = v9 - 6) != 0 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            goto LABEL_10;
          v8 = v5;
        }
      }
      else
      {
        v4[640] |= 0x10u;
      }
    }
    else
    {
      v8 = 1LL;
    }
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
  }
LABEL_10:
  if ( (v4[640] & 0x10) != 0 )
  {
    KeResetEvent((PRKEVENT)(v4 + 712));
    IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), UsbhHardResetWorker, DelayedWorkQueue, 0LL);
    v8 = 3LL;
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v8);
  }
  v12 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8));
  v13 = 2;
  v12[87].Limit = 2;
  *(_DWORD *)(a1 + 68) = 2;
  *(_DWORD *)(a1 + 64) = 1734964085;
  Limit = (unsigned int)v12[28].Limit;
  v12[41].Header.WaitListHead.Flink = 0LL;
  v12[Limit + 29].Header.SignalState = 2;
  KeReleaseSemaphore(v12 + 88, 16, 1, 0);
  return v13;
}
