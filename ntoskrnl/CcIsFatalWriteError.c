/*
 * XREFs of CcIsFatalWriteError @ 0x1402EFE78
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14021B410 (CcFlushCachePostProcessOneRange.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402A42CC (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x140390990 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MmIsWriteErrorFatal @ 0x140212D9C (MmIsWriteErrorFatal.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140343320 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, NTSTATUS a2)
{
  __int64 v5; // rax
  int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x193FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  ObFastDereferenceObjectDeferDelete(a1 + 96, v5, 1666409283LL);
  return MmIsWriteErrorFatal(1, v6, a2);
}
