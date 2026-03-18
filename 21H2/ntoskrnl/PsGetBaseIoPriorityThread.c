/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x140343770
 * Callers:
 *     ExpAcquireResourceExclusiveLite @ 0x1402AE9D0 (ExpAcquireResourceExclusiveLite.c)
 *     IopBuildDeviceIoControlRequest @ 0x1403428E0 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x14035A424 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
