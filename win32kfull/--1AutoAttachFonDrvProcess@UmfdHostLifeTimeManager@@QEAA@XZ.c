void __fastcall UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess(
        UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *this)
{
  ULONG v2; // ecx

  if ( *((_BYTE *)this + 56) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 8));
    v2 = *((_DWORD *)this + 15);
    if ( v2 )
      EngSetLastError(v2);
  }
  if ( *(_QWORD *)this )
  {
    GreReleasePushLockShared(*(_QWORD *)this);
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
  }
}
