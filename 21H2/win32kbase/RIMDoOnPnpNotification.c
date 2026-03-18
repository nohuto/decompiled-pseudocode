/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C00A1E80
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00454B0 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01A82F4 (RIMDiscoverSpecificDevice.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01AA314 (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01AAA30 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01AAF0C (RIMVirtDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceRootPnpEndSyncAsyncWorkItem @ 0x1C01AB2B0 (RIMVirtDeviceRootPnpEndSyncAsyncWorkItem.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C004A6A4 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     rimOnPnpQueryRemove @ 0x1C01A1AA4 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C01A1C78 (rimOnPnpRemoveCancelled.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  int v10; // ebp
  int v11; // esi
  int v12; // esi
  int v14; // edx
  int v15; // r8d
  int v16; // eax
  int v17; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a1 + 32) != PsGetCurrentProcess(a1, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = *(_DWORD *)(a2 + 184);
  v10 = 0;
  v11 = 1;
  if ( (v9 & 1) != 0 )
  {
    v12 = rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
    if ( v12 >= 0 )
      rimDoRimDevChange(a1, a2, 2LL);
    return (unsigned int)v12;
  }
  else
  {
    if ( (v9 & 2) != 0 )
    {
      rimOnPnpQueryRemove(a1, a2);
      v9 = *(_DWORD *)(a2 + 184);
    }
    if ( (v9 & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
      v9 = *(_DWORD *)(a2 + 184);
    }
    if ( (v9 & 8) != 0 )
    {
      v10 = rimOnPnpRemoveComplete(a1, a2, v8);
      if ( v10 >= 0 )
      {
        RIMLockExclusive(a1 + 792);
        if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 472), 0LL);
        v16 = *(_DWORD *)(a2 + 184);
        if ( (v16 & 0x2000) == 0 && (v16 & 0x20) == 0 && *(_BYTE *)(a2 + 48) != 3 )
        {
          v17 = *(_DWORD *)(a2 + 188);
          if ( (v17 & 4) != 0 || *(_QWORD *)(a2 + 192) || (v17 & 8) != 0 )
          {
            *(_DWORD *)(a2 + 200) |= 1u;
            LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v14,
                v15,
                (_DWORD)gRimLog,
                4,
                1,
                38,
                (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
                a2);
            }
            v11 = 0;
          }
        }
        *(_QWORD *)(a1 + 800) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 792, 0LL);
        KeLeaveCriticalRegion();
        if ( v11 )
        {
          rimDoRimDevChange(a1, a2, 3LL);
          RIMFreeDev(a1, a2);
        }
      }
    }
    return (unsigned int)v10;
  }
}
