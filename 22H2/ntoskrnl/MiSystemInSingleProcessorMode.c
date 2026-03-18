/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x14061C408
 * Callers:
 *     MmAddRangeToCrashDump @ 0x1406301B0 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14063074C (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     <none>
 */

bool MiSystemInSingleProcessorMode()
{
  return !(_DWORD)InitializationPhase || (KiBugCheckActive & 3) != 0 || qword_140C67F88 == (_QWORD)KeGetCurrentThread();
}
