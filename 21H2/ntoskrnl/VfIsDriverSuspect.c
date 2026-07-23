/*
 * XREFs of VfIsDriverSuspect @ 0x1409C3524
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CD38 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     ViSuspectDriversLookupEntry @ 0x1409C3574 (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x1409C35B8 (VfDriverLock.c)
 */

_BOOL8 __fastcall VfIsDriverSuspect(PCUNICODE_STRING String2)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  VfDriverLock();
  v2 = ViSuspectDriversLookupEntry(String2);
  ViDriversLoadLockOwner = 0LL;
  v3 = v2;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v3 != 0;
}
