/*
 * XREFs of VerifierEtwUnregister @ 0x140AE1050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfTargetEtwUnregister @ 0x140AC8734 (VfTargetEtwUnregister.c)
 */

__int64 __fastcall VerifierEtwUnregister(__int64 a1)
{
  VfTargetEtwUnregister(a1);
  return ((__int64 (__fastcall *)(__int64))pXdvEtwUnregister)(a1);
}
