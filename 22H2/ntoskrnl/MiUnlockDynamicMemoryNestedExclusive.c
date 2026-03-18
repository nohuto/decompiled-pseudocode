/*
 * XREFs of MiUnlockDynamicMemoryNestedExclusive @ 0x14061C080
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

signed __int32 MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6B5D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6B5D8);
  return KeAbPostRelease((ULONG_PTR)&qword_140C6B5D8);
}
