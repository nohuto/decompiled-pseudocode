/*
 * XREFs of ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00D229C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00EE6B4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?GetPowerWatchdogTimeoutMsec@@YAKW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0159D18 (-GetPowerWatchdogTimeoutMsec@@YAKW4_POWER_WATCHDOG_TYPE@@@Z.c)
 */

void __fastcall ArmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD InputBuffer[12]; // [rsp+30h] [rbp-9h] BYREF

  if ( a1 )
  {
    v2 = a2;
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[2]) = GetPowerWatchdogTimeoutMsec((unsigned int)v2);
    v8 = (_DWORD *)SGDGetUserSessionState(v5, v4, v6, v7);
    v12 = (unsigned int)*v8;
    HIDWORD(InputBuffer[2]) = *v8;
    LODWORD(InputBuffer[3]) = 412;
    InputBuffer[4] = v2;
    if ( (_DWORD)v2 == 16 )
    {
      v13 = SGDGetUserSessionState(v12, v9, v10, v11);
      BYTE1(InputBuffer[8]) = 1;
      InputBuffer[5] = v13 + 720;
      InputBuffer[6] = *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 8) != 0LL;
      v21 = SGDGetUserSessionState(InputBuffer[6], v18, v19, v20);
      BYTE3(InputBuffer[8]) = 1;
      InputBuffer[7] = v21 + 672;
    }
    else
    {
      InputBuffer[6] = 0LL;
      InputBuffer[7] = 0LL;
      InputBuffer[5] = KeGetCurrentThread();
    }
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v22, &StartPowerWatchdog, v23, a1, v2);
  }
}
