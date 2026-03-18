/*
 * XREFs of UsbhLatchPdo @ 0x1C0016B5C
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001010 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhBusSuspend_Action @ 0x1C00022A0 (UsbhBusSuspend_Action.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000B870 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhFdoSetD0Cold @ 0x1C000CF10 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000F880 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSS_SignalPdoWake @ 0x1C00183BC (UsbhSS_SignalPdoWake.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C0018B00 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhFdoResetPdoPort @ 0x1C0031320 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C003484C (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Disable @ 0x1C0034EE0 (UsbhPCE_Disable.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0035DA4 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1C0037B3C (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0039760 (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C003ABC8 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoSetD0Warm @ 0x1C003CBD0 (UsbhFdoSetD0Warm.c)
 *     UsbhIoctlCyclePort @ 0x1C003ED54 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003F534 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0040308 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C00407B8 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040AF8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0040E0C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhDriverNotFoundTimer @ 0x1C00431F0 (UsbhDriverNotFoundTimer.c)
 *     UsbhGetHubNodeInfo @ 0x1C0049E58 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0056940 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0058F00 (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhLatchPdo(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rsi
  KIRQL v9; // bp
  __int64 PortData; // rax
  _DWORD *v11; // rbx
  char *PoolWithTag; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx

  v8 = 0LL;
  Log(a1, 256, 1817199695, a2, a4);
  v9 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_1C006C500 = (__int64)&dword_1C006C508;
  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    v8 = *(_QWORD *)(PortData + 392);
    if ( v8 )
    {
      v11 = PdoExt(*(_QWORD *)(PortData + 392));
      PoolWithTag = (char *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x30uLL, 0x42554855u);
      if ( PoolWithTag )
      {
        *(_QWORD *)(PoolWithTag + 4) = 0LL;
        *(_QWORD *)(PoolWithTag + 12) = 0LL;
        *((_DWORD *)PoolWithTag + 5) = 0;
        *((_DWORD *)PoolWithTag + 7) = 0;
        *(_DWORD *)PoolWithTag = 1668571500;
        *((_QWORD *)PoolWithTag + 4) = v8;
        *((_DWORD *)PoolWithTag + 6) = a4;
        *((_QWORD *)PoolWithTag + 5) = a3;
        v13 = PoolWithTag + 8;
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
  qword_1C006C500 = 0LL;
  KeReleaseSpinLock(&HubG, v9);
  return v8;
}
