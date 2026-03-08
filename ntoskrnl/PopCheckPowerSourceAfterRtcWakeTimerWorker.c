/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA3750
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x140302D08 (PopOkayToQueueNextWorkItem.c)
 *     PopCurrentPowerStatePrecise @ 0x140870DD8 (PopCurrentPowerStatePrecise.c)
 *     NtInitiatePowerAction @ 0x140988360 (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x140988ACC (PopQueryPowerSettingUlong.c)
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
        NtInitiatePowerAction((unsigned int)dword_140C3D238, (unsigned int)dword_140C3D23C, 0x80000000, 1);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140C3C228);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
