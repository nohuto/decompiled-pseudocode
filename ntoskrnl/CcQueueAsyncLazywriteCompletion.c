/*
 * XREFs of CcQueueAsyncLazywriteCompletion @ 0x1405392F4
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1405387F4 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcWriteBehindReleaseFile @ 0x140219638 (CcWriteBehindReleaseFile.c)
 *     CcFlushCachePostProcess @ 0x14021AF2C (CcFlushCachePostProcess.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140537D14 (CcPostWorkQueueAsyncLazywrite.c)
 */

char __fastcall CcQueueAsyncLazywriteCompletion(__int64 a1, char a2, char a3)
{
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // r14

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 152);
  if ( a2 )
    CcFlushCachePostProcess(*(__int64 **)(a1 + 16));
  if ( a3 )
    v4 = CcWriteBehindReleaseFile(v3);
  *(_DWORD *)(a1 + 128) = 8;
  *(_BYTE *)(a1 + 72) = a3;
  CcPostWorkQueueAsyncLazywrite(a1, v5 + 424);
  return v4;
}
