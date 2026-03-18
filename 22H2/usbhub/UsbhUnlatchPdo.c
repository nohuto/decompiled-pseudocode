/*
 * XREFs of UsbhUnlatchPdo @ 0x1C00171A0
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001010 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0001D70 (UsbhCompletePdoWakeIrps.c)
 *     UsbhBusSuspend_Action @ 0x1C00022A0 (UsbhBusSuspend_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0002648 (UsbhFreePortChangeQueueObject.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C00071D0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000B870 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x1C000CF10 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000F880 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0016F40 (UsbhSS_PdoWakeWorker.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C0018B00 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhFdoResetPdoPort @ 0x1C0031320 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C003484C (UsbhHubSyncSuspendPortEvent.c)
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
 *     UsbhDriverNotFoundWorker @ 0x1C00432A0 (UsbhDriverNotFoundWorker.c)
 *     UsbhGetHubNodeInfo @ 0x1C0049E58 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0056940 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoIdleCC_Worker @ 0x1C0059530 (UsbhPdoIdleCC_Worker.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v8; // r9
  __int64 v9; // rcx
  KIRQL v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 *v14; // rsi
  __int64 *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 **v19; // rdx
  int v20; // eax

  v4 = a4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1329877109;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v4;
      }
    }
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_1C006C500 = (__int64)&dword_1C006C508;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 1348891236;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v4;
      }
    }
  }
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v13 = *(_QWORD *)(a2 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v13 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v14 = (__int64 *)(v13 + 1272);
  v15 = *(__int64 **)(v13 + 1272);
  if ( v15 == (__int64 *)(v13 + 1272) )
  {
LABEL_30:
    v20 = *(_DWORD *)(v13 + 1288);
    if ( v20 )
      *(_DWORD *)(v13 + 1288) = v20 - 1;
  }
  else
  {
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v16 = *(_QWORD *)(a1 + 64);
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v17 = 1064591724;
            *(_QWORD *)(v17 + 8) = 0LL;
            *(_QWORD *)(v17 + 16) = v13;
            *(_QWORD *)(v17 + 24) = v4;
          }
        }
      }
      if ( *((_DWORD *)v15 + 4) == (_DWORD)v4 && v15[4] == a3 )
        break;
      v15 = (__int64 *)*v15;
      if ( v15 == v14 )
        goto LABEL_30;
    }
    v18 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 || (v19 = (__int64 **)v15[1], *v19 != v15) )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = (__int64)v19;
    ExFreePoolWithTag(v15 - 1, 0);
  }
  if ( (__int64 *)*v14 == v14 && !*(_DWORD *)(v13 + 1288) )
    KeSetEvent((PRKEVENT)(v13 + 1296), 0, 0);
  qword_1C006C500 = 0LL;
  KeReleaseSpinLock(&HubG, v10);
}
