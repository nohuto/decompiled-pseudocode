/*
 * XREFs of VerifierEtwUnregister @ 0x140AA0ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfTargetEtwUnregister @ 0x140A8AE08 (VfTargetEtwUnregister.c)
 */

__int64 __fastcall VerifierEtwUnregister(__int64 a1)
{
  VfTargetEtwUnregister(a1);
  return ((__int64 (__fastcall *)(__int64))pXdvEtwUnregister)(a1);
}
