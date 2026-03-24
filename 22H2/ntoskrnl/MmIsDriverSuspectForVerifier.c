/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x1409C5F80
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1409C25C8 (VfDriverLock.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C6CF0 (ViIsDriverSuspectForVerifier.c)
 */

__int64 __fastcall MmIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v4; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  VfDriverLock();
  IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(v1);
  ViDriversLoadLockOwner = 0LL;
  v4 = IsDriverSuspectForVerifier;
  KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
  return v4;
}
