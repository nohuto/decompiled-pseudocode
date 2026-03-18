/*
 * XREFs of CcIsFatalWriteError @ 0x1402F42A8
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14029AF18 (CcWriteBehindPostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14029E8D0 (CcFlushCachePostProcessOneRange.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402F4158 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x140392610 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A13B0 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A23E0 (ObFastDereferenceObjectDeferDelete.c)
 *     MmIsWriteErrorFatal @ 0x1402F49DC (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, int a2)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x193FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  ObFastDereferenceObjectDeferDelete((signed __int64 *)(a1 + 96), v5, 0x63536343u);
  return (unsigned int)MmIsWriteErrorFatal(1LL, v6, (unsigned int)a2) != 0;
}
