/*
 * XREFs of CmpUnfreezeHive @ 0x140730F8C
 * Callers:
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E62C (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406778F0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x14086C1E4 (CmWorkerEngineDequeueWorkItem.c)
 */

void __fastcall CmpUnfreezeHive(_QWORD *P)
{
  __int64 v2; // rcx
  ULONG_PTR v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  CmpInitializeDelayDerefContext(&v4);
  v2 = P[368];
  *((_BYTE *)P + 2936) = 0;
  if ( v2 )
  {
    if ( (unsigned __int8)CmWorkerEngineDequeueWorkItem()
      && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1068, 0xFFFFFFFF) == 1 )
    {
      CmpDeleteHive(P);
    }
    P[368] = 0LL;
  }
  v3 = P[366];
  if ( v3 )
  {
    CmpDereferenceKeyControlBlockWithLock(v3, (__int64)&v4, 0);
    P[366] = 0LL;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v4);
}
