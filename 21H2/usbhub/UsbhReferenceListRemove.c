/*
 * XREFs of UsbhReferenceListRemove @ 0x1C001DCEC
 * Callers:
 *     UsbhEnableTimerObject @ 0x1C000C0D0 (UsbhEnableTimerObject.c)
 *     UsbhCancelResetTimeout @ 0x1C000DCF0 (UsbhCancelResetTimeout.c)
 *     UsbhResetPort @ 0x1C001AB54 (UsbhResetPort.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C002CC20 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetTimer @ 0x1C002D368 (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C002D414 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhUninitialize @ 0x1C002D6F0 (UsbhUninitialize.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002F130 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002F2A0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0038A80 (UsbhResetPortTimerDpc.c)
 *     UsbhDmDisableTimer @ 0x1C003B01C (UsbhDmDisableTimer.c)
 *     UsbhTimerPnpStop @ 0x1C003B400 (UsbhTimerPnpStop.c)
 *     UsbhReferenceListClose @ 0x1C0040F24 (UsbhReferenceListClose.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C004A720 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = FdoExt(a1);
  v6 = v5;
  v7 = v5 + 628;
  v8 = (_QWORD *)*((_QWORD *)v5 + 314);
  if ( v8 != (_QWORD *)(v5 + 628) && v8 )
  {
    while ( v8 != v7 )
    {
      v9 = v8 - 3;
      if ( v8 == (_QWORD *)24 || *(_DWORD *)v9 != 1397515890 )
LABEL_15:
        UsbhTrapFatal_Dbg(a1, a1);
      if ( v9[2] == a2 )
      {
        v10 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v11 = (_QWORD *)v8[1], (_QWORD *)*v11 != v8) )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        ExFreePoolWithTag(v9, 0);
        goto LABEL_12;
      }
      v8 = (_QWORD *)*v8;
      if ( !v8 )
        goto LABEL_15;
    }
  }
  v12 = v5[632];
  if ( v12 )
    v6[632] = v12 - 1;
LABEL_12:
  if ( (_QWORD *)*v7 == v7 && !v6[632] )
    KeSetEvent((PRKEVENT)(v6 + 622), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v4);
}
