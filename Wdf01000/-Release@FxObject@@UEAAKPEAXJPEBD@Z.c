__int64 __fastcall FxObject::Release(FxObject *this, void *Tag, int Line, const char *File)
{
  unsigned __int32 v5; // edi
  FxTagTracker *m_Lock; // rcx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(m_Lock, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v5 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v5 )
  {
    if ( FxObject::ShouldDeferDisposeLocked(this, 0LL) )
    {
      FxObject::SetObjectStateLocked(this, 0xBu);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      FxObject::ProcessDestroy(this);
    }
  }
  return v5;
}
