/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C00872A8
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C0037820 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01CFE1C (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01D032C (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01D09D8 (RIMVirtDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceRootPnpEndSyncAsyncWorkItem @ 0x1C01D0D80 (RIMVirtDeviceRootPnpEndSyncAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01D1704 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C0030730 (rimOnPnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C00895B0 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimDoRimDevChange @ 0x1C00BC1AC (rimDoRimDevChange.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 *     rimOnPnpQueryRemove @ 0x1C01C854C (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C01C8770 (rimOnPnpRemoveCancelled.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x1C01C89B8 (rimOnPnpRemoveCompleteInUserCrit.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  int v7; // eax
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1065LL);
  if ( *(_QWORD *)(a1 + 32) != PsGetCurrentProcess(a1, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1066LL);
  v7 = *(_DWORD *)(a2 + 184);
  v8 = 0;
  if ( (v7 & 1) != 0 )
  {
    v8 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v8 >= 0 )
    {
      v9 = 2LL;
      v10 = a2;
      v11 = a1;
      if ( (*(_DWORD *)(a2 + 184) & 0x40) != 0 )
      {
        rimDoRimDevChange(a1, a2, 2LL);
        return (unsigned int)v8;
      }
      goto LABEL_8;
    }
  }
  else
  {
    if ( (v7 & 2) != 0 )
      rimOnPnpQueryRemove(a1, a2);
    if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
    }
    if ( (*(_DWORD *)(a2 + 184) & 8) != 0 )
    {
      v8 = rimOnPnpRemoveComplete(a1, a2, v6);
      if ( v8 >= 0 )
      {
        if ( (*(_DWORD *)(a2 + 184) & 0x40) == 0 )
        {
          Feature_RIMUserCritOpt__private_ReportDeviceUsage();
          v9 = 3LL;
          v10 = a2;
          v11 = a1;
LABEL_8:
          rimQueueRimDevChangeAsyncWorkItem(v11, v10, v9);
          return (unsigned int)v8;
        }
        if ( (unsigned int)rimOnPnpRemoveCompleteInUserCrit(a1, a2) )
        {
          rimDoRimDevChange(a1, a2, 3LL);
          RIMFreeDev(a1, a2);
        }
      }
    }
  }
  return (unsigned int)v8;
}
