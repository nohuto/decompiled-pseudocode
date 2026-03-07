void __fastcall FxDevicePowerIrpTracker::StartTrackingDevicePowerIrp(
        FxDevicePowerIrpTracker *this,
        RequestDIrpReason Reason)
{
  bool v4; // zf
  __int64 v5; // rcx

  v4 = this->m_DIrpRequestedForSIrp == RequestDIrpReasonInvalid;
  v5 = *(_QWORD *)(*(_QWORD *)&this[-1].m_History[1].Reason + 96LL);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((const char *)v5, *(_DWORD *)(v5 + 208), *(_DWORD *)(v5 + 204));
  if ( Reason == RequestD0ForS0 || Reason == RequestDxForSx )
    this->m_DIrpRequestedForSIrp = Reason;
}
