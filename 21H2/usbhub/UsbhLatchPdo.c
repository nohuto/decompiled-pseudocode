/*
 * XREFs of UsbhLatchPdo @ 0x1C000F240
 * Callers:
 *     UsbhBusIf_SuspendChildHub @ 0x1C00014F0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0002DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C0009A20 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C0009FA0 (UsbhFdoSetD0Cold.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C00128D0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSS_SignalPdoWake @ 0x1C001B37C (UsbhSS_SignalPdoWake.c)
 *     UsbhBusSuspend_Action @ 0x1C001ED64 (UsbhBusSuspend_Action.c)
 *     UsbhFdoResetPdoPort @ 0x1C002FF70 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C00334E8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Disable @ 0x1C0033B7C (UsbhPCE_Disable.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0034AE8 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1C003681C (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0038490 (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C00398B8 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 *     UsbhIoctlCyclePort @ 0x1C003DB64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003E348 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F11C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F5CC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003F8F4 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FC08 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhDriverNotFoundTimer @ 0x1C0041F40 (UsbhDriverNotFoundTimer.c)
 *     UsbhGetHubNodeInfo @ 0x1C0048AC8 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C00552A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0057830 (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhLatchPdo(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rsi
  KIRQL v9; // r14
  __int64 PortData; // rax
  _DWORD *v11; // rbx
  __int64 Pool2; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v8 = 0LL;
  Log(a1, 256, 1817199695, a2, a4);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    v8 = *(_QWORD *)(PortData + 392);
    if ( v8 )
    {
      v11 = PdoExt(*(_QWORD *)(PortData + 392));
      Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1668571500;
        *(_QWORD *)(Pool2 + 32) = v8;
        *(_DWORD *)(Pool2 + 24) = a4;
        *(_QWORD *)(Pool2 + 40) = a3;
        v13 = (_QWORD *)(Pool2 + 8);
        v14 = (_QWORD *)*((_QWORD *)v11 + 160);
        if ( (_DWORD *)*v14 != v11 + 318 )
          __fastfail(3u);
        *v13 = v11 + 318;
        v13[1] = v14;
        *v14 = v13;
        *((_QWORD *)v11 + 160) = v13;
      }
      else
      {
        ++v11[322];
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  return v8;
}
