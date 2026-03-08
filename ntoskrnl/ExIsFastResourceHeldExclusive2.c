/*
 * XREFs of ExIsFastResourceHeldExclusive2 @ 0x14040E7A0
 * Callers:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1402C3360 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403C4E10 (ExIsFastResourceHeldExclusive.c)
 *     ExpFastResourceLegacyAcquireShared2 @ 0x140410068 (ExpFastResourceLegacyAcquireShared2.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive2 @ 0x1404100C8 (ExpFastResourceLegacyAcquireSharedStarveExclusive2.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceHeldExclusive2(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  return *(_QWORD *)(BugCheckParameter2 + 80) == (_QWORD)KeGetCurrentThread();
}
