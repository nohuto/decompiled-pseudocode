void __fastcall FxPowerIdleMachine::_PowerTimeoutDpcRoutine(
        _KDPC *Dpc,
        FxPowerIdleMachine *Context,
        void *SystemArgument1,
        void *SystemArgument2)
{
  void (__fastcall *v5)(int (__fastcall **)(WDFDRIVER__ *, WDFDEVICE_INIT *), __int64, __int64, __int64, char); // rax
  char v6; // [rsp+20h] [rbp-18h]
  int (__fastcall *pDriverDeviceAdd)(WDFDRIVER__ *, WDFDEVICE_INIT *); // [rsp+48h] [rbp+10h] BYREF

  KeAcquireSpinLockAtDpcLevel(&Context->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(Context, PowerIdleEventTimerExpired);
  pDriverDeviceAdd = (int (__fastcall *)(WDFDRIVER__ *, WDFDEVICE_INIT *))Context[2].m_TagTracker->m_OwningObject->m_ChildEntry.Blink[11].Flink;
  v5 = *(void (__fastcall **)(int (__fastcall **)(WDFDRIVER__ *, WDFDEVICE_INIT *), __int64, __int64, __int64, char))(qword_1C009FF30 + 8LL);
  if ( v5 )
  {
    v6 = 2;
    v5(&pDriverDeviceAdd, 8LL, 2164260864LL, 3938LL, v6);
  }
  KeReleaseSpinLockFromDpcLevel(&Context->m_Lock.m_Lock);
}
