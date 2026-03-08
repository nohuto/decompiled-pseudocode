/*
 * XREFs of PopQueryPowerSettingUlong @ 0x140988ACC
 * Callers:
 *     PopDeferDoze @ 0x140988614 (PopDeferDoze.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA3750 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x14068D434 (PopFindPowerSettingConfiguration.c)
 */

char __fastcall PopQueryPowerSettingUlong(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  __int64 *PowerSettingConfiguration; // rax
  __int64 *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax

  v6 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, -1);
  v8 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v9 = PowerSettingConfiguration[8];
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 4) >= 4u )
      {
        *a2 = *(_DWORD *)(v9 + 12);
        v10 = v8[9];
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 4) >= 4u )
          {
            v6 = 1;
            *a3 = *(_DWORD *)(v10 + 12);
          }
        }
      }
    }
  }
  ExReleaseFastMutex(&PopSettingLock);
  return v6;
}
