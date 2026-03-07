void __fastcall CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition(CMouseProcessor::RootCursorAsync *this)
{
  CPushLock::AcquireLockExclusive(this);
  if ( *((_BYTE *)this + 24) )
  {
    gptCursorAsync = (struct tagPOINT)*((_QWORD *)this + 2);
    *((_BYTE *)this + 24) = 0;
  }
  CPushLock::ReleaseLock(this);
}
