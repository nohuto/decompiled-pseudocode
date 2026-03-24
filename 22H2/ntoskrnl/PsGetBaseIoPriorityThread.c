/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x14022BA70
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14022B300 (IopBuildDeviceIoControlRequest.c)
 *     IopCallDriverReference @ 0x14022B670 (IopCallDriverReference.c)
 *     CcCopyWriteWontFlush @ 0x14022B870 (CcCopyWriteWontFlush.c)
 *     CcCopyWriteEx @ 0x14022B920 (CcCopyWriteEx.c)
 *     ExpApplyPriorityBoost @ 0x14022E970 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140272404 (KiAbSetMinimumThreadPriority.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     ExpBoostIoAfterAcquire @ 0x1402DD0E0 (ExpBoostIoAfterAcquire.c)
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
