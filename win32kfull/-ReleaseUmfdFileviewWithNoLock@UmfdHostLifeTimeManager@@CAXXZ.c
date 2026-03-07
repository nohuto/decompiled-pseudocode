void __fastcall UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock(__int64 a1)
{
  __int64 v1; // rdi
  PVOID *v2; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(PVOID **)(v1 + 23472);
  if ( v2 )
  {
    ExFreePoolWithTag(v2[6], 0);
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(v1 + 23472) = 0LL;
  }
}
