/*
 * XREFs of VerifierMmAllocateMappingAddress @ 0x140A9F7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfFaultsInjectResourceFailure @ 0x140A96B0C (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateMappingAddress(__int64 a1, unsigned int a2)
{
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD))pXdvMmAllocateMappingAddress)(a1, a2);
}
