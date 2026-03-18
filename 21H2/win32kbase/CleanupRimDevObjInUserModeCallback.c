/*
 * XREFs of CleanupRimDevObjInUserModeCallback @ 0x1C0141CB4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RIMSignalAllDispositionWaiters @ 0x1C0048900 (RIMSignalAllDispositionWaiters.c)
 */

LONG_PTR __fastcall CleanupRimDevObjInUserModeCallback(_QWORD *Object)
{
  __int64 v1; // rbx

  v1 = Object[53];
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 80) && !*(_BYTE *)(v1 + 81) )
    RIMLockExclusive(v1 + 792);
  *(_BYTE *)(v1 + 82) = 0;
  RIMSignalAllDispositionWaiters(v1);
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v1 + 80) && !*(_BYTE *)(v1 + 81) )
  {
    *(_QWORD *)(v1 + 800) = 0LL;
    ExReleasePushLockExclusiveEx(v1 + 792, 0LL);
    KeLeaveCriticalRegion();
  }
  return ObfDereferenceObject(Object);
}
