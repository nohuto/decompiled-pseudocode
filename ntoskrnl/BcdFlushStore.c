/*
 * XREFs of BcdFlushStore @ 0x140A595E4
 * Callers:
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x14082B2FC (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1402FDDE8 (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x1403903FC (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x140414110 (ZwFlushKey.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14082EDB8 (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdFlushStore(__int64 a1)
{
  char IsOfflineHandle; // di
  NTSTATUS v3; // eax
  unsigned int v4; // r8d
  void *v6; // rax
  unsigned int v7; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 >= 0 )
  {
    v6 = (void *)BiSanitizeHandle(a1);
    v7 = ZwFlushKey(v6);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v7;
  }
  else
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
