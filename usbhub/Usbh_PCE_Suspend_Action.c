/*
 * XREFs of Usbh_PCE_Suspend_Action @ 0x1C000F290
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C00041C0 (UsbhFlushPortChangeQueue.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00068E0 (UsbhWaitEventWithTimeoutEx.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C0011240 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhPCE_Suspend @ 0x1C00190B4 (UsbhPCE_Suspend.c)
 *     UsbhRawWait @ 0x1C0019670 (UsbhRawWait.c)
 *     UsbhLockPcqWithTag @ 0x1C001FF20 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E788 (WPP_RECORDER_SF_dd.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0033EBC (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_ResumeDone @ 0x1C0034A30 (UsbhPCE_ResumeDone.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 *     UsbhSignalSuspendEvent @ 0x1C00353B4 (UsbhSignalSuspendEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0036644 (UsbhiSignalSuspendEvent.c)
 */

int *__fastcall Usbh_PCE_Suspend_Action(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebp
  __int64 v9; // r14
  KSPIN_LOCK *v10; // r12
  KIRQL v11; // al
  KIRQL v12; // r13
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  int v22; // eax
  KIRQL v23; // dl
  __int64 v24; // rcx
  KIRQL v25; // r14
  __int64 v26; // rcx
  PVOID v27; // r9
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  int *result; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r9d
  __int64 v38; // [rsp+40h] [rbp-48h] BYREF
  _DWORD *v39; // [rsp+48h] [rbp-40h]
  KIRQL v40; // [rsp+98h] [rbp+10h] BYREF
  int *v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  v40 = 0;
  v38 = 0LL;
  v4 = 0;
  v39 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 824), 660000, 825258049, 2u, a2);
  v9 = (int)UsbhLockPcqWithTag(a1, a2, 10, (unsigned int)&v40, 0);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) )
  {
    *a4 = -1073741667;
    UsbhiSignalSuspendEvent(a1, a2);
    return (int *)UsbhUnlockPcqWithTag(a1, a2, v40, 0LL);
  }
  else
  {
    *(_QWORD *)(a2 + 736) = KeGetCurrentThread();
    Log(a1, 512, 825258032, v9, *(unsigned __int16 *)(a2 + 4));
    _InterlockedIncrement((volatile signed __int32 *)(a3 + 144));
    v10 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
    v11 = KeAcquireSpinLockRaiseToDpc(v10);
    v12 = v11;
    if ( *(_DWORD *)(a2 + 696) == 2 )
    {
      KeReleaseSpinLock(v10, v11);
    }
    else
    {
      *(_DWORD *)(a2 + 696) = 2;
      KeResetEvent((PRKEVENT)(a2 + 744));
      KeReleaseSpinLock(v10, v12);
      Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1392) = 10;
    }
    switch ( (int)v9 )
    {
      case 1:
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 825258038, v9, *(unsigned __int16 *)(a2 + 4));
        *(_QWORD *)(a2 + 736) = 0LL;
        goto LABEL_35;
      case 2:
        Log(a1, 512, 825258037, v9, *(unsigned __int16 *)(a2 + 4));
        v20 = *(unsigned __int16 *)(a2 + 4);
        LODWORD(v38) = 0x40000;
        *(_QWORD *)(a2 + 736) = 0LL;
        v4 = UsbhInsertQueuePortChangeObject(a1, v20, (unsigned int)&v38, 0, 0LL);
        if ( v4 < 0 )
        {
          Log(a1, 8, 1902727218, a2, *(unsigned __int16 *)(a2 + 4));
          UsbhiSignalSuspendEvent(a1, a2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              v28,
              1,
              18,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              *(_WORD *)(a2 + 4),
              v4);
          }
LABEL_35:
          UsbhUnlockPcqWithTag(a1, a2, v40, 0LL);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              17,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              *(_WORD *)(a2 + 4));
          }
          Log(a1, 8, 1902727217, a2, *(unsigned __int16 *)(a2 + 4));
          v21 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 9;
          *(_DWORD *)(v21 + a2 + 1384) = 9;
          Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
          v22 = *(_DWORD *)(a2 + 12);
          v23 = v40;
          v24 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 448) = 0;
          *(_DWORD *)(v24 + a2 + 1384) = v22;
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v23);
          v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
          if ( *(_DWORD *)(a2 + 2412) != 1 )
          {
            v26 = *(_QWORD *)(a2 + 16);
            *(_DWORD *)(a2 + 2412) = 1;
            Log(v26, 512, 1364214615, a2, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
            IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, v27);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v25);
        }
LABEL_36:
        UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 744), 660000, 825258104, 5u, a2);
        if ( (v39[640] & 1) != 0 && *((_BYTE *)v39 + 5235) == 32 )
        {
          Log(a1, 8, 2002872692, 10LL, 0LL);
          UsbhRawWait(v37);
        }
        result = v41;
        _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
        *result = v4;
        break;
      case 3:
      case 14:
        Log(a1, 512, 825258035, v9, *(unsigned __int16 *)(a2 + 4));
        v16 = *(unsigned __int16 *)(a2 + 4);
        LODWORD(v38) = 0x40000;
        *(_QWORD *)(a2 + 736) = 0LL;
        v4 = UsbhInsertQueuePortChangeObject(a1, v16, (unsigned int)&v38, 0, 0LL);
        if ( v4 < 0 )
          goto LABEL_11;
        v17 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v17 + a2 + 1384) = 10;
        goto LABEL_35;
      case 4:
        Log(a1, 512, 825258036, v9, *(unsigned __int16 *)(a2 + 4));
        v18 = *(unsigned __int16 *)(a2 + 4);
        LODWORD(v38) = 0x40000;
        v4 = UsbhInsertQueuePortChangeObject(a1, v18, (unsigned int)&v38, 0, 0LL);
        if ( v4 < 0 )
          goto LABEL_11;
        v19 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(v19 + a2 + 1384) = 9;
        goto LABEL_35;
      case 5:
      case 12:
      case 13:
      case 16:
      case 17:
        Log(a1, 512, 825258041, v9, *(unsigned __int16 *)(a2 + 4));
        v31 = v40;
        v32 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_QWORD *)(a2 + 736) = 0LL;
        *(_DWORD *)(a2 + 12) = v9;
        *(_DWORD *)(v32 + a2 + 1384) = v9;
        UsbhUnlockPcqWithTag(a1, a2, v31, 0LL);
        UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 472), 660000, 825258041, 4u, a2);
        result = (int *)UsbhPCE_Suspend(a1, a3, *(unsigned __int16 *)(a2 + 4));
        _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
        return result;
      case 6:
        Log(a1, 512, 825258034, v9, *(unsigned __int16 *)(a2 + 4));
        *(_QWORD *)(a2 + 736) = 0LL;
        UsbhFlushPortChangeQueue(a1, a2);
        v13 = v40;
        v14 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 11;
        *(_DWORD *)(v14 + a2 + 1384) = 11;
        UsbhUnlockPcqWithTag(a1, a2, v13, 0LL);
        *(_DWORD *)(a2 + 400) = UsbhHubSyncSuspendPortEvent(a1, v15, a2);
        UsbhSignalSuspendEvent(a1, a2);
        goto LABEL_36;
      case 7:
      case 11:
        Log(a1, 512, 825258033, v9, *(unsigned __int16 *)(a2 + 4));
        *(_QWORD *)(a2 + 736) = 0LL;
LABEL_11:
        UsbhiSignalSuspendEvent(a1, a2);
        goto LABEL_35;
      case 8:
      case 9:
      case 10:
        Log(a1, 512, 825258040, v9, *(unsigned __int16 *)(a2 + 4));
        v30 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_QWORD *)(a2 + 736) = 0LL;
        *(_DWORD *)(a2 + 12) = v9;
        *(_DWORD *)(v30 + a2 + 1384) = v9;
        goto LABEL_35;
      case 15:
        Log(a1, 512, 825258081, v9, *(unsigned __int16 *)(a2 + 4));
        *(_QWORD *)(a2 + 736) = 0LL;
        UsbhFlushPortChangeQueue(a1, a2);
        v34 = v40;
        v35 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 15;
        *(_DWORD *)(v35 + a2 + 1384) = 15;
        UsbhUnlockPcqWithTag(a1, a2, v34, 0LL);
        UsbhSignalSuspendEvent(a1, a2);
        goto LABEL_36;
      case 18:
        Log(a1, 512, 825258039, v9, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 1LL);
        UsbhUnlockPcqWithTag(a1, a2, v40, 0LL);
        UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 712), 660000, 825258039, 3u, a2);
        v29 = *(unsigned __int16 *)(a2 + 4);
        *(_QWORD *)(a2 + 736) = 0LL;
        UsbhPCE_ResumeDone(a1, a2 + 24, v29);
        goto LABEL_36;
      case 20:
        UsbhUnlockPcqWithTag(a1, a2, v40, 0LL);
        UsbhSignalSuspendEvent(a1, a2);
        goto LABEL_36;
      default:
        Log(a1, 512, 825258072, v9, *(unsigned __int16 *)(a2 + 4));
        v36 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_QWORD *)(a2 + 736) = 0LL;
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v36 + a2 + 1384) = 19;
        goto LABEL_35;
    }
  }
  return result;
}
