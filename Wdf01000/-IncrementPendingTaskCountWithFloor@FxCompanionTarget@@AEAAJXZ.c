__int64 __fastcall FxCompanionTarget::IncrementPendingTaskCountWithFloor(FxCompanionTarget *this)
{
  signed __int32 m_PendingTaskCount; // eax
  signed __int32 v2; // edx
  signed __int32 v3; // r8d

  m_PendingTaskCount = this->m_PendingTaskCount;
  while ( m_PendingTaskCount > 0 )
  {
    v2 = m_PendingTaskCount;
    v3 = m_PendingTaskCount + 1;
    m_PendingTaskCount = _InterlockedCompareExchange(
                           &this->m_PendingTaskCount,
                           m_PendingTaskCount + 1,
                           m_PendingTaskCount);
    if ( v2 == m_PendingTaskCount )
      return v3 == 0 ? 0xC0000056 : 0;
  }
  v3 = m_PendingTaskCount;
  return v3 == 0 ? 0xC0000056 : 0;
}
