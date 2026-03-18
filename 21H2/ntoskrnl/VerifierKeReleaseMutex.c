/*
 * XREFs of VerifierKeReleaseMutex @ 0x140A96130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutex(__int64 a1, char a2)
{
  __int64 v4; // rdx

  VfDeadlockReleaseResource(a1);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvKeReleaseMutex)(a1, v4);
}
