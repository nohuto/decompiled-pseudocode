/*
 * XREFs of UsbhReferenceListAdd @ 0x1C0001AE8
 * Callers:
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 *     UsbhGetTopOfBusStack @ 0x1C002D770 (UsbhGetTopOfBusStack.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C002E4CC (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSetTimer @ 0x1C002E77C (UsbhSetTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C002E828 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C0030500 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C0030670 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x1C0039D70 (UsbhResetPortTimerDpc.c)
 *     UsbhTimerPnpStart @ 0x1C003C5C0 (UsbhTimerPnpStart.c)
 *     UsbhReferenceListOpen @ 0x1C004223C (UsbhReferenceListOpen.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // di
  __int64 v7; // rbx
  char *PoolWithTag; // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 **v11; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_1C006C500 = (__int64)&dword_1C006C508;
  v7 = FdoExt(a1);
  if ( *(_BYTE *)(v7 + 2480) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x30uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 1) = 0;
      v9 = v7 + 2512;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_DWORD *)PoolWithTag + 11) = 0;
      *(_DWORD *)PoolWithTag = 1397515890;
      *((_DWORD *)PoolWithTag + 10) = a3;
      *((_QWORD *)PoolWithTag + 2) = a2;
      *((_QWORD *)PoolWithTag + 1) = a1;
      v10 = (__int64 *)(PoolWithTag + 24);
      v11 = *(__int64 ***)(v9 + 8);
      if ( *v11 != (__int64 *)v9 )
        __fastfail(3u);
      *v10 = v9;
      v10[1] = (__int64)v11;
      *v11 = v10;
      *(_QWORD *)(v9 + 8) = v10;
    }
    else
    {
      ++*(_DWORD *)(v7 + 2528);
    }
    qword_1C006C500 = 0LL;
    KeReleaseSpinLock(&HubG, v6);
    return 0LL;
  }
  else
  {
    qword_1C006C500 = 0LL;
    KeReleaseSpinLock(&HubG, v6);
    return 3221225473LL;
  }
}
