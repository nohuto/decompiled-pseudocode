__int64 *PopInitializePowerSettings()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  __int64 *result; // rax

  v0 = &PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    v0[1] = v0;
    *v0 = v0;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  PopPendingPowerSettingUpdateLock = 0LL;
  PopSettingLock.Event.Header.WaitListHead.Blink = &PopSettingLock.Event.Header.WaitListHead;
  PopSettingLock.Event.Header.WaitListHead.Flink = &PopSettingLock.Event.Header.WaitListHead;
  qword_140C3C6B8 = (__int64)&PopRegisteredPowerSettingCallbacks;
  PopRegisteredPowerSettingCallbacks = (__int64)&PopRegisteredPowerSettingCallbacks;
  qword_140C3C668 = (__int64)&PopPowerSettings;
  PopPowerSettings = &PopPowerSettings;
  result = &WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  PopPrimaryDisplayVisibleStateErratum = (__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  PopSettingLock.Count = 1;
  PopSettingLock.Owner = 0LL;
  PopSettingLock.Contention = 0;
  LOWORD(PopSettingLock.Event.Header.Lock) = 1;
  PopSettingLock.Event.Header.Size = 6;
  PopSettingLock.Event.Header.SignalState = 0;
  xmmword_140C3E428 = 0LL;
  qword_140C3E438 = 0LL;
  return result;
}
