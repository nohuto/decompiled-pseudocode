LONG_PTR __fastcall CleanupRimDevObjInUserModeCallback(_QWORD *Object)
{
  __int64 v1; // rbx

  v1 = Object[51];
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 80) && !*(_BYTE *)(v1 + 81) )
    RIMLockExclusive(v1 + 760);
  *(_BYTE *)(v1 + 82) = 0;
  RIMSignalAllDispositionWaiters(v1);
  if ( *(_BYTE *)(v1 + 80) && !*(_BYTE *)(v1 + 81) )
  {
    *(_QWORD *)(v1 + 768) = 0LL;
    ExReleasePushLockExclusiveEx(v1 + 760, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  return ObfDereferenceObject(Object);
}
