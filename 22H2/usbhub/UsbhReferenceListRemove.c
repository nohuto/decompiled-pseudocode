/*
 * XREFs of UsbhReferenceListRemove @ 0x1C001B88C
 * Callers:
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhCancelResetTimeout @ 0x1C0013AE0 (UsbhCancelResetTimeout.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C002E060 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetTimer @ 0x1C002E77C (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C002E828 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhUninitialize @ 0x1C002EB00 (UsbhUninitialize.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C0030500 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C0030670 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0039D70 (UsbhResetPortTimerDpc.c)
 *     UsbhDmDisableTimer @ 0x1C003C348 (UsbhDmDisableTimer.c)
 *     UsbhTimerPnpStop @ 0x1C003C730 (UsbhTimerPnpStop.c)
 *     UsbhReferenceListClose @ 0x1C0042154 (UsbhReferenceListClose.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C004BB00 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  _DWORD *v5; // rax
  _QWORD *v6; // rcx
  _DWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax

  v4 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_1C006C500 = (__int64)&dword_1C006C508;
  v5 = FdoExt(a1);
  v6 = 0LL;
  v7 = v5;
  v8 = v5 + 628;
  if ( *((_DWORD **)v5 + 314) != v5 + 628 )
    v6 = (_QWORD *)*((_QWORD *)v5 + 314);
  v9 = 0LL;
  if ( !v6 )
    goto LABEL_19;
  while ( v6 != v8 )
  {
    v9 = v6 - 3;
    if ( v6 != (_QWORD *)24 && *(_DWORD *)v9 == 1397515890 )
    {
      if ( v9[2] == a2 )
        break;
      v6 = (_QWORD *)*v6;
      if ( v6 )
        continue;
    }
    UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( v9 && v6 != v8 )
  {
    v10 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v11 = (_QWORD *)v6[1], (_QWORD *)*v11 != v6) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
LABEL_19:
    v12 = v5[632];
    if ( v12 )
      v7[632] = v12 - 1;
  }
  if ( (_QWORD *)*v8 == v8 && !v7[632] )
    KeSetEvent((PRKEVENT)(v7 + 622), 0, 0);
  qword_1C006C500 = 0LL;
  KeReleaseSpinLock(&HubG, v4);
}
