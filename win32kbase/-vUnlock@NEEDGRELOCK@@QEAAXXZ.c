void __fastcall NEEDGRELOCK::vUnlock(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
    if ( *this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*this);
      PsLeavePriorityRegion(v3, v2);
    }
    *this = 0LL;
  }
}
