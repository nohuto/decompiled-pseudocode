/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x1402D0980
 * Callers:
 *     ExpBoostIoAfterAcquire @ 0x140204490 (ExpBoostIoAfterAcquire.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     IopCallDriverReference @ 0x1402D0580 (IopCallDriverReference.c)
 *     CcCopyWriteWontFlush @ 0x1402D0780 (CcCopyWriteWontFlush.c)
 *     CcCopyWriteEx @ 0x1402D0830 (CcCopyWriteEx.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402FCAD4 (KiAbSetMinimumThreadPriority.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
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
