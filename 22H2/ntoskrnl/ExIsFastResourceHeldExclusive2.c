/*
 * XREFs of ExIsFastResourceHeldExclusive2 @ 0x1404135A0
 * Callers:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140328500 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403C9CC0 (ExIsFastResourceHeldExclusive.c)
 *     ExpFastResourceLegacyAcquireShared2 @ 0x140414E98 (ExpFastResourceLegacyAcquireShared2.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive2 @ 0x140414EF8 (ExpFastResourceLegacyAcquireSharedStarveExclusive2.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
