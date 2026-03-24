/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C00B39F8
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0052EC0 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00539C0 (RIMOnPnpNotification.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016CA24 (RIMVirtDeviceClassNotify.c)
 *     RIMDiscoverSpecificDevice @ 0x1C017305C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     rimOnPnpRemoveComplete @ 0x1C0051D38 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 *     rimOnPnpArrived @ 0x1C0055904 (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 *     RIMEndAllActiveContacts @ 0x1C015D0D0 (RIMEndAllActiveContacts.c)
 *     rimOnPnpQueryRemove @ 0x1C016DC78 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C016DDD0 (rimOnPnpRemoveCancelled.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  int v5; // esi
  int v6; // ebp
  int v7; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 805LL);
  if ( a1[4] != PsGetCurrentProcess(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 806LL);
  v4 = *(_DWORD *)(a2 + 184);
  v5 = 1;
  v6 = 0;
  if ( (v4 & 1) != 0 )
  {
    v7 = rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
    if ( v7 >= 0 )
      rimDoRimDevChange((__int64)a1, a2, 2u);
    return (unsigned int)v7;
  }
  else
  {
    if ( (v4 & 2) != 0 )
    {
      rimOnPnpQueryRemove(a1, a2);
      v4 = *(_DWORD *)(a2 + 184);
    }
    if ( (v4 & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
      v4 = *(_DWORD *)(a2 + 184);
    }
    if ( (v4 & 8) != 0 )
    {
      v6 = rimOnPnpRemoveComplete((char)a1, a2);
      if ( v6 >= 0 )
      {
        RIMLockExclusive((__int64)(a1 + 71));
        if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 480), 0LL);
        v10 = *(_DWORD *)(a2 + 184);
        if ( (v10 & 0x2000) == 0 && (v10 & 0x20) == 0 && *(_BYTE *)(a2 + 48) != 3 )
        {
          if ( v10 < 0 || *(_QWORD *)(a2 + 192) || (v11 = *(_DWORD *)(a2 + 188), (v11 & 1) != 0) || (v11 & 2) != 0 )
          {
            *(_DWORD *)(a2 + 200) |= 1u;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = 4;
              WPP_RECORDER_SF_q(
                (_DWORD)gRimLog,
                v9,
                1,
                38,
                (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                a2);
            }
            v5 = 0;
          }
        }
        a1[72] = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 71, 0LL);
        KeLeaveCriticalRegion();
        if ( v5 )
        {
          rimDoRimDevChange((__int64)a1, a2, 3u);
          RIMFreeDev(a1, a2);
        }
      }
    }
    return (unsigned int)v6;
  }
}
