/*
 * XREFs of BcdCreateObject @ 0x14082C4D8
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14060F9E0 (WheaPersistBadPageToBcd.c)
 *     BiBindEfiBootManager @ 0x14082C288 (BiBindEfiBootManager.c)
 *     PopBcdRegenerateResumeObject @ 0x140999C24 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140390340 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x1403903FC (BiIsOfflineHandle.c)
 *     BiCreateObject @ 0x14082CA14 (BiCreateObject.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14082D76C (BiIsLinkedToFirmwareVariable.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14082EDB8 (BiReleaseBcdSyncMutant.c)
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
