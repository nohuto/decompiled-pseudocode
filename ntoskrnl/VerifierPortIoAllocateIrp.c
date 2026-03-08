/*
 * XREFs of VerifierPortIoAllocateIrp @ 0x140AC80A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierPortIoAllocateIrp(char a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( a2 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  LOBYTE(v7) = a2;
  LOBYTE(v6) = a1;
  return pXdvIoAllocateIrp(0, v6, v7, a3, (__int64)IovAllocateIrp);
}
