/*
 * XREFs of BcdCreateObject @ 0x1408052E0
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140611E00 (WheaPersistBadPageToBcd.c)
 *     BiBindEfiBootManager @ 0x140805090 (BiBindEfiBootManager.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CCB4 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140374368 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x140374424 (BiIsOfflineHandle.c)
 *     BiCreateObject @ 0x14080581C (BiCreateObject.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140806574 (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdCreateObject(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 v8; // rcx
  char v9; // bp
  __int64 result; // rax
  __int64 v11; // rcx
  int Object; // ebx

  LOBYTE(v8) = BiIsOfflineHandle(a1);
  v9 = v8;
  result = BiAcquireBcdSyncMutant(v8);
  if ( (int)result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(*a4, 0LL) )
        BiSetFirmwareModified(a1, 1);
    }
    LOBYTE(v11) = v9;
    BiReleaseBcdSyncMutant(v11);
    return (unsigned int)Object;
  }
  return result;
}
