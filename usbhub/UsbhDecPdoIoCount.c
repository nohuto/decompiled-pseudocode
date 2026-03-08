/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C001BC4C
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C000A4C0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0015DF0 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C001A910 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C001BB3C (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoPower_WaitWake @ 0x1C0020D30 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C002A894 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C002A9F0 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C002AAA8 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002AC9C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002B084 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002D820 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoCyclePdoPort @ 0x1C00303A4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003050C (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C0030570 (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C0030664 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003074C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0030944 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C0030D44 (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0030DA8 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030E68 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0031078 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x1C0031120 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00311C0 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C00312B0 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003136C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C003C9B0 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x1C003CAC0 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0053EF8 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 *     UsbhPdoDeviceControl @ 0x1C0054C70 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x1C0056DF0 (UsbhPdoSuccess.c)
 *     UsbhPdoSystemControl @ 0x1C0056E70 (UsbhPdoSystemControl.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0058434 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     USBHUB_TriggerCallBacks @ 0x1C0041C74 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  _DWORD *v4; // rbx
  KSPIN_LOCK *v5; // rbp
  _QWORD *v6; // rsi
  KIRQL v7; // r15
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  int v11; // eax

  v4 = PdoExt(BugCheckParameter3);
  v5 = (KSPIN_LOCK *)(v4 + 304);
  v6 = v4 + 306;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 152);
  v8 = (_QWORD *)*((_QWORD *)v4 + 153);
  if ( v8 == (_QWORD *)(v4 + 306) || !v8 )
  {
LABEL_12:
    v11 = v4[316];
    if ( !v11 )
    {
      if ( BugCheckParameter3 )
        USBHUB_TriggerCallBacks(BugCheckParameter3);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    }
    v4[316] = v11 - 1;
  }
  else
  {
    while ( 1 )
    {
      v9 = (_QWORD *)*v8;
      if ( v8[2] == BugCheckParameter4 )
        break;
      v8 = (_QWORD *)*v8;
      if ( v9 == v6 )
        goto LABEL_12;
    }
    if ( (_QWORD *)v9[1] != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    ExFreePoolWithTag(v8 - 1, 0);
  }
  if ( (_QWORD *)*v6 != v6 || v4[316] )
  {
    KeReleaseSpinLock(v5, v7);
  }
  else
  {
    KeReleaseSpinLock(v5, v7);
    KeSetEvent((PRKEVENT)(v4 + 310), 0, 0);
  }
}
