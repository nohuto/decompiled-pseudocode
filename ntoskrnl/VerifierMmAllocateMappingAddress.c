/*
 * XREFs of VerifierMmAllocateMappingAddress @ 0x140ADF920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateMappingAddress(__int64 a1, unsigned int a2)
{
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD))pXdvMmAllocateMappingAddress)(a1, a2);
}
