void __fastcall UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(void **)(v1 + 23496);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *(_QWORD *)(v1 + 23496) = 0LL;
  }
}
