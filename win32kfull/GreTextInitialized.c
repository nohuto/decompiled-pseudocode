__int64 __fastcall GreTextInitialized(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx

  v1 = SGDGetSessionState(a1);
  v2 = 0;
  if ( KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)(v1 + 32) + 23568LL))
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    return 1LL;
  }
  LOBYTE(v2) = UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread();
  return v2;
}
