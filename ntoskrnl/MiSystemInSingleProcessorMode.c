/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x140619F5C
 * Callers:
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14062E2CC (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     <none>
 */

bool MiSystemInSingleProcessorMode()
{
  return !(_DWORD)InitializationPhase || (KiBugCheckActive & 3) != 0 || qword_140C67B08 == (_QWORD)KeGetCurrentThread();
}
