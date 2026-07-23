/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B2650
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032B274 (PopOkayToQueueNextWorkItem.c)
 *     NtInitiatePowerAction @ 0x140775A10 (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x140779A64 (PopQueryPowerSettingUlong.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E344 (PopCurrentPowerStatePrecise.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise(&v1, 0LL);
    if ( !(_BYTE)v1 )
    {
      v2 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v3, &v2);
      if ( !v2 )
        NtInitiatePowerAction(SystemAction, LightestSystemState, 0x80000000, 1u);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140C21208);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
