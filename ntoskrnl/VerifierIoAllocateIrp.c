/*
 * XREFs of VerifierIoAllocateIrp @ 0x140AC7D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateIrp(char a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL)
    || (VfRuleClasses & 0x40000) != 0 && ViFnAutoFailInject && (unsigned __int8)ViFnAutoFailInject("IoAllocateIrp") )
  {
    return 0LL;
  }
  LOBYTE(v5) = a2;
  LOBYTE(v4) = a1;
  return pXdvIoAllocateIrp(0, v4, v5, (int)retaddr, (__int64)IovAllocateIrp);
}
