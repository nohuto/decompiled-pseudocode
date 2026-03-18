/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C003B78C
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C009F464 (-Broadcast@InputConfig@@SAXXZ.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  char v6; // bl
  int v7; // ecx
  int v9; // ecx
  __int64 v10; // rcx
  CInputThreadBase *v12; // rdi
  char *v13; // rbx

  v3 = (int)a2;
  if ( (int)a2 >= 22 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = 5 * v3;
  if ( !*(_QWORD *)(a1 + 40 * v3 + 32) )
    return 0;
  v6 = 1;
  if ( !*(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *(_DWORD *)(a1 + 8 * v5 + 40);
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( !(_DWORD)v10 )
        return isRootPartition();
      if ( (_DWORD)v10 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
        return v6;
      }
      return isChildPartition();
    }
    else
    {
      v12 = gpInputThread;
      v13 = (char *)gpInputThread + 8;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v13, 0LL);
      LODWORD(v12) = *((_DWORD *)v12 + 6);
      ExReleasePushLockSharedEx(v13, 0LL);
      KeLeaveCriticalRegion();
      return (_DWORD)v12 == 2;
    }
  }
  return v6;
}
