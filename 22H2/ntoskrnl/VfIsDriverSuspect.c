/*
 * XREFs of VfIsDriverSuspect @ 0x1409C2534
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075C368 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 *     ViSuspectDriversLookupEntry @ 0x1409C2584 (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x1409C25C8 (VfDriverLock.c)
 */

_BOOL8 __fastcall VfIsDriverSuspect(PCUNICODE_STRING String2)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  VfDriverLock();
  v2 = ViSuspectDriversLookupEntry(String2);
  ViDriversLoadLockOwner = 0LL;
  v3 = v2;
  KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
  return v3 != 0;
}
