__int64 __fastcall UmfdHostLifeTimeManager::MmUnmapViewOfSection(void *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v9);
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  if ( *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v6) + 32) + 23536LL) && a2 == *(_QWORD *)(v5 + 23488) )
  {
    v7 = MmUnmapViewOfSection(*(_QWORD *)(v5 + 23496), a1);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
    return v7;
  }
  else
  {
    if ( v9 )
    {
      GreReleasePushLockShared(v9);
      KeLeaveCriticalRegion();
    }
    return 3221225473LL;
  }
}
