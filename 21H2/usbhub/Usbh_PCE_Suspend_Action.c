/*
 * XREFs of Usbh_PCE_Suspend_Action @ 0x1C0008CC0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhPCE_Suspend @ 0x1C000F8DC (UsbhPCE_Suspend.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0011440 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C00128D0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhRawWait @ 0x1C001A650 (UsbhRawWait.c)
 *     UsbhLockPcqWithTag @ 0x1C001D1A0 (UsbhLockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D610 (UsbhFlushPortChangeQueue.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002DDB8 (WPP_RECORDER_SF_dd.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C00334E8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_ResumeDone @ 0x1C003405C (UsbhPCE_ResumeDone.c)
 *     UsbhSetPcqEventStatus @ 0x1C00348C0 (UsbhSetPcqEventStatus.c)
 *     UsbhSignalSuspendEvent @ 0x1C00349E0 (UsbhSignalSuspendEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0034A70 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0035C0C (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall Usbh_PCE_Suspend_Action(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebp
  _DWORD *v9; // r14
  int v10; // r15d
  KSPIN_LOCK *v11; // r12
  KIRQL v12; // al
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  KIRQL v16; // dl
  __int64 v17; // rcx
  KIRQL v18; // r12
  __int64 v19; // rcx
  PVOID v20; // r9
  __int64 result; // rax
  unsigned int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // edx
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // edx
  KIRQL v37; // [rsp+40h] [rbp-48h]
  _QWORD v38[2]; // [rsp+50h] [rbp-38h] BYREF
  KIRQL v39; // [rsp+98h] [rbp+10h] BYREF

  v39 = 0;
  v38[0] = 0LL;
  v4 = 0;
  v9 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhWaitEventWithTimeoutEx(a1, a2 + 824, 660000LL, 825258049LL, 2, a2);
  v10 = UsbhLockPcqWithTag(a1, a2, 10, (unsigned int)&v39, 0);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) )
  {
    *a4 = -1073741667;
    UsbhiSignalSuspendEvent(a1, a2);
    return UsbhUnlockPcqWithTag(a1, a2, v39, 0LL);
  }
  else
  {
    *(_QWORD *)(a2 + 736) = KeGetCurrentThread();
    Log(a1, 512, 825258032, v10, *(unsigned __int16 *)(a2 + 4));
    _InterlockedIncrement((volatile signed __int32 *)(a3 + 144));
    v11 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
    v12 = KeAcquireSpinLockRaiseToDpc(v11);
    v37 = v12;
    if ( *(_DWORD *)(a2 + 696) == 2 )
    {
      KeReleaseSpinLock(v11, v12);
    }
    else
    {
      *(_DWORD *)(a2 + 696) = 2;
      KeResetEvent((PRKEVENT)(a2 + 744));
      KeReleaseSpinLock(v11, v37);
      Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 16) = 10;
    }
    if ( v10 == 2 )
    {
      Log(a1, 512, 825258037, 2, *(unsigned __int16 *)(a2 + 4));
      v13 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v38[0]) = 0x40000;
      *(_QWORD *)(a2 + 736) = 0LL;
      v4 = UsbhInsertQueuePortChangeObject(a1, v13, (unsigned int)v38, 0, 0LL);
      if ( v4 < 0 )
      {
        Log(a1, 8, 1902727218, a2, *(unsigned __int16 *)(a2 + 4));
        UsbhiSignalSuspendEvent(a1, a2);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            v36,
            1,
            18,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            v4);
LABEL_41:
        UsbhUnlockPcqWithTag(a1, a2, v39, 0LL);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            17,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4));
        Log(a1, 8, 1902727217, a2, *(unsigned __int16 *)(a2 + 4));
        v14 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(v14 + a2 + 1384) = 9;
        Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v15 = *(_DWORD *)(a2 + 12);
        v16 = v39;
        v17 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v17 + a2 + 1384) = v15;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v16);
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
        if ( *(_DWORD *)(a2 + 2412) != 1 )
        {
          v19 = *(_QWORD *)(a2 + 16);
          *(_DWORD *)(a2 + 2412) = 1;
          Log(v19, 512, 1364214615, a2, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
          IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, v20);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v18);
      }
    }
    else
    {
      switch ( v10 )
      {
        case 1:
          UsbhiSignalSuspendEvent(a1, a2);
          Log(a1, 512, 825258038, v10, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          goto LABEL_41;
        case 3:
        case 14:
          Log(a1, 512, 825258035, v10, *(unsigned __int16 *)(a2 + 4));
          v26 = *(unsigned __int16 *)(a2 + 4);
          LODWORD(v38[0]) = 0x40000;
          *(_QWORD *)(a2 + 736) = 0LL;
          v4 = UsbhInsertQueuePortChangeObject(a1, v26, (unsigned int)v38, 0, 0LL);
          if ( v4 < 0 )
            goto LABEL_25;
          v27 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 10;
          *(_DWORD *)(v27 + a2 + 1384) = 10;
          goto LABEL_41;
        case 4:
          Log(a1, 512, 825258036, v10, *(unsigned __int16 *)(a2 + 4));
          v28 = *(unsigned __int16 *)(a2 + 4);
          LODWORD(v38[0]) = 0x40000;
          v4 = UsbhInsertQueuePortChangeObject(a1, v28, (unsigned int)v38, 0, 0LL);
          if ( v4 < 0 )
            goto LABEL_25;
          v29 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 9;
          *(_DWORD *)(v29 + a2 + 1384) = 9;
          goto LABEL_41;
        case 5:
        case 12:
        case 13:
        case 16:
        case 17:
          Log(a1, 512, 825258041, v10, *(unsigned __int16 *)(a2 + 4));
          v32 = v39;
          v33 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_QWORD *)(a2 + 736) = 0LL;
          *(_DWORD *)(a2 + 12) = v10;
          *(_DWORD *)(v33 + a2 + 1384) = v10;
          UsbhUnlockPcqWithTag(a1, a2, v32, 0LL);
          UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 825258041LL, 4, a2);
          result = UsbhPCE_Suspend(a1, a3, *(unsigned __int16 *)(a2 + 4));
          _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
          return result;
        case 6:
          Log(a1, 512, 825258034, v10, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhFlushPortChangeQueue(a1, a2);
          v23 = v39;
          v24 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 11;
          *(_DWORD *)(v24 + a2 + 1384) = 11;
          UsbhUnlockPcqWithTag(a1, a2, v23, 0LL);
          *(_DWORD *)(a2 + 400) = UsbhHubSyncSuspendPortEvent(a1, v25, a2);
          UsbhSignalSuspendEvent(a1, a2);
          break;
        case 7:
        case 11:
          Log(a1, 512, 825258033, v10, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
LABEL_25:
          UsbhiSignalSuspendEvent(a1, a2);
          goto LABEL_41;
        case 8:
        case 9:
        case 10:
          Log(a1, 512, 825258040, v10, *(unsigned __int16 *)(a2 + 4));
          v31 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_QWORD *)(a2 + 736) = 0LL;
          *(_DWORD *)(a2 + 12) = v10;
          *(_DWORD *)(v31 + a2 + 1384) = v10;
          goto LABEL_37;
        case 15:
          Log(a1, 512, 825258081, v10, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhFlushPortChangeQueue(a1, a2);
          v34 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 15;
          *(_DWORD *)(v34 + a2 + 1384) = 15;
          goto LABEL_35;
        case 18:
          Log(a1, 512, 825258039, v10, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 1LL);
          UsbhUnlockPcqWithTag(a1, a2, v39, 0LL);
          UsbhWaitEventWithTimeoutEx(a1, a2 + 712, 660000LL, 825258039LL, 3, a2);
          v30 = *(unsigned __int16 *)(a2 + 4);
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhPCE_ResumeDone(a1, a2 + 24, v30);
          break;
        case 20:
LABEL_35:
          UsbhUnlockPcqWithTag(a1, a2, v39, 0LL);
          UsbhSignalSuspendEvent(a1, a2);
          break;
        default:
          Log(a1, 512, 825258072, v10, *(unsigned __int16 *)(a2 + 4));
          v35 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_QWORD *)(a2 + 736) = 0LL;
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v35 + a2 + 1384) = 19;
LABEL_37:
          UsbhUnlockPcqWithTag(a1, a2, v39, 0LL);
          break;
      }
    }
    UsbhWaitEventWithTimeoutEx(a1, a2 + 744, 660000LL, 825258104LL, 5, a2);
    result = (unsigned int)v9[640];
    if ( (result & 1) != 0 && *((_BYTE *)v9 + 5235) == 32 )
    {
      Log(a1, 8, 2002872692, 10, 0LL);
      result = UsbhRawWait(v22);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
    *a4 = v4;
  }
  return result;
}
