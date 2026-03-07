void __fastcall FxDevicePowerIrpTracker::LogRequestDIrpReason(
        FxDevicePowerIrpTracker *this,
        RequestDIrpReason Reason,
        unsigned __int8 PowerUp)
{
  RequestDIrpReason v4; // esi
  signed __int32 AsLong; // eax
  signed __int32 v7; // ett
  FxPkgPnp *m_PkgPnp; // r8
  unsigned int *v9; // r9
  unsigned __int8 m_HistoryIndex; // dl
  __int64 v11; // r10
  __int64 v12; // rcx
  FxDevicePowerIrpTracker::HistoryEntry v13; // [rsp+20h] [rbp-28h]
  unsigned int BucketArg2[2]; // [rsp+30h] [rbp-18h] BYREF

  v4 = Reason;
  if ( Reason == RequestD0ForOther )
  {
    _m_prefetchw(&this->m_D0IrpReasonHint);
    AsLong = this->m_D0IrpReasonHint.AsLong;
    do
    {
      v7 = AsLong;
      AsLong = _InterlockedCompareExchange((volatile signed __int32 *)&this->m_D0IrpReasonHint, AsLong, AsLong);
    }
    while ( v7 != AsLong );
    v4 = AsLong;
    if ( AsLong == 5 )
    {
      m_PkgPnp = this->m_PkgPnp;
      v9 = BucketArg2;
      *(_QWORD *)BucketArg2 = 0LL;
      m_HistoryIndex = m_PkgPnp->m_PowerPolicyMachine.m_HistoryIndex;
      v11 = 8LL;
      do
      {
        v12 = m_PkgPnp->m_PowerPolicyMachine.m_States.History[m_HistoryIndex];
        LOWORD(v12) = v12 & 0x7FFF;
        if ( (_WORD)v12 )
          LOWORD(v12) = v12 - 1280;
        else
          v12 = 255LL;
        *(_BYTE *)v9 = v12;
        m_HistoryIndex = (m_HistoryIndex + 1) & 7;
        v9 = (unsigned int *)((char *)v9 + 1);
        --v11;
      }
      while ( v11 );
      MicrosoftTelemetryAssertTriggeredArgsKM((const char *)v12, BucketArg2[0], BucketArg2[1]);
    }
  }
  if ( PowerUp )
    _InterlockedExchange((volatile __int32 *)&this->m_D0IrpReasonHint, 5);
  *(_QWORD *)&v13.Reason = (unsigned int)v4;
  v13.Timestamp.QuadPart = MEMORY[0xFFFFF78000000014];
  this->m_History[this->m_HistoryIndex] = v13;
  this->m_HistoryIndex = (this->m_HistoryIndex + 1) & 7;
}
