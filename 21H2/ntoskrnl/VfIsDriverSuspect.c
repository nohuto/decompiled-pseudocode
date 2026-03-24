/*
 * XREFs of VfIsDriverSuspect @ 0x1409C2524
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CB78 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402EE5A0 (KeReleaseMutex.c)
 *     ViSuspectDriversLookupEntry @ 0x1409C2574 (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x1409C25B8 (VfDriverLock.c)
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
