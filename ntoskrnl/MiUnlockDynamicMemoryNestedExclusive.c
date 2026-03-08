/*
 * XREFs of MiUnlockDynamicMemoryNestedExclusive @ 0x140619BD4
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6B198, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6B198);
  return KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
}
