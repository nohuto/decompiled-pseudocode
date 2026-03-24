/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x14022C100
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     IopCallDriverReference @ 0x14022BD00 (IopCallDriverReference.c)
 *     CcCopyWriteWontFlush @ 0x14022BF00 (CcCopyWriteWontFlush.c)
 *     CcCopyWriteEx @ 0x14022BFB0 (CcCopyWriteEx.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x1402872F0 (ExpBoostIoAfterAcquire.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402F1D84 (KiAbSetMinimumThreadPriority.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1296) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
