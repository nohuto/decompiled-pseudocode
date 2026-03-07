void __fastcall SEMOBJEXORSHARED::~SEMOBJEXORSHARED(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion(v3, v2);
  }
}
