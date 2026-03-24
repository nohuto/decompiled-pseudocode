/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C004E0B4
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004DFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C006E10C (-Broadcast@InputConfig@@SAXXZ.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  char v5; // bl
  int v6; // edx
  int v8; // edx
  int v9; // edx
  CInputThread *v11; // rdi
  int v12; // ebx

  v2 = a2;
  if ( a2 >= 19 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 432LL);
  v4 = 5 * v2;
  if ( !*(_QWORD *)(a1 + 40 * v2 + 32) )
    return 0;
  v5 = 1;
  if ( !*(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 438LL);
  v6 = *(_DWORD *)(a1 + 8 * v4 + 40);
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
        return isRootPartition();
      if ( v9 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 459LL);
        return v5;
      }
      return isChildPartition();
    }
    else
    {
      v11 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v11, 0LL);
      v12 = *((_DWORD *)v11 + 4);
      ExReleasePushLockSharedEx(v11, 0LL);
      KeLeaveCriticalRegion();
      return v12 == 2;
    }
  }
  return v5;
}
