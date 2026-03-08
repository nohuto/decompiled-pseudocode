/*
 * XREFs of VerifierIoAllocateIrpEx @ 0x140AC7DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( (_BYTE)a3 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  LOBYTE(a3) = v3;
  LOBYTE(a2) = v4;
  return pXdvIoAllocateIrpEx(a1, a2, a3, (int)retaddr, (__int64)IovAllocateIrp);
}
