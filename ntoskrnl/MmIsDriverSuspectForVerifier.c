/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x140ABF060
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     ViIsDriverSuspectForVerifier @ 0x140ABFB4C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 */

__int64 __fastcall MmIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v4; // ebx

  if ( !(unsigned int)VfIsVerifierEnabled() )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 || (VfRuleClasses & 0x400000) != 0 )
    return 0LL;
  VfDriverLock();
  IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(v2);
  ViDriversLoadLockOwner = 0LL;
  v4 = IsDriverSuspectForVerifier;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v4;
}
