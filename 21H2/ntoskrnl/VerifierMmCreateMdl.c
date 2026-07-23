/*
 * XREFs of VerifierMmCreateMdl @ 0x1409E76F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DD82C (VfFaultsInjectResourceFailure.c)
 *     VfAllocPoolNotification @ 0x1409E0FB4 (VfAllocPoolNotification.c)
 */

__int64 __fastcall VerifierMmCreateMdl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // rbx

  if ( !a1 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvMmCreateMdl)(a1, a2, a3);
  if ( KeGetCurrentIrql() <= 2u )
    VfAllocPoolNotification();
  return v7;
}
