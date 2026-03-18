/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C000EE64
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C00018F0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDevicePowerState @ 0x1C0005200 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C00055F0 (UsbhPdoSetD0.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C000F058 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0017C10 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00186F0 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoPower_WaitWake @ 0x1C001EA50 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C0029EC4 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C002A020 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C002A0D8 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A2CC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002A6B4 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002CE50 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoCyclePdoPort @ 0x1C002F9D0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C002FB38 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C002FB9C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C002FC90 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C002FD78 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C002FF70 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003036C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C00303D0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030490 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C00306A0 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x1C0030748 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00307E8 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C00308D8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0030998 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C003C040 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x1C003C230 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0053618 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C00537BC (UsbhDeletePdo.c)
 *     UsbhPdoDeviceControl @ 0x1C0054380 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x1C0056530 (UsbhPdoSuccess.c)
 *     UsbhPdoSystemControl @ 0x1C00565B0 (UsbhPdoSystemControl.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0057B74 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     USBHUB_TriggerCallBacks @ 0x1C00413B4 (USBHUB_TriggerCallBacks.c)
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
