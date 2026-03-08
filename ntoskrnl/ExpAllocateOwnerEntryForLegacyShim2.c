/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim2 @ 0x14040FDCC
 * Callers:
 *     ExpFastResourceLegacyAcquireShared2 @ 0x140410068 (ExpFastResourceLegacyAcquireShared2.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive2 @ 0x1404100C8 (ExpFastResourceLegacyAcquireSharedStarveExclusive2.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared2 @ 0x140410128 (ExpFastResourceLegacyConvertExclusiveToShared2.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 ExpAllocateOwnerEntryForLegacyShim2()
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  do
    result = ExAllocatePool2(64LL, 40LL, 1162826310LL);
  while ( !result );
  *(_OWORD *)result = 0LL;
  *(_OWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 32) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_BYTE *)(result + 37) |= 1u;
  *(_QWORD *)(result + 16) = CurrentThread;
  return result;
}
