/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0159EA0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     ?PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DD1E8 (-PowerDisplayBurst@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v1 = a1;
  v14[1] = 0;
  if ( (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() )
    InputTraceLogging::Power::PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v1);
  switch ( (_DWORD)v1 )
  {
    case 6:
      v4 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v5 = (v4 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      *(_QWORD *)(SGDGetUserSessionState(v4, v5, v2, v3) + 3048) = v5;
      break;
    case 5:
    case 0x10:
      v12 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v13 = (v12 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      *(_QWORD *)(SGDGetUserSessionState(v12, v13, v2, v3) + 3056) = v13;
      break;
    case 0x19:
      v10 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v11 = (v10 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      *(_QWORD *)(SGDGetUserSessionState(v10, v11, v2, v3) + 3064) = v11;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1439);
      break;
  }
  if ( !*(_DWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 2956) )
  {
    v14[0] = 4;
    v15 = v1;
    QueuePowerRequest(v14, 0);
  }
}
