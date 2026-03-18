/*
 * XREFs of VerifierKeReleaseMutant @ 0x140A960C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutant(__int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8

  VfDeadlockReleaseResource(a1);
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a3;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))pXdvKeReleaseMutant)(a1, a2, v9, v8);
}
