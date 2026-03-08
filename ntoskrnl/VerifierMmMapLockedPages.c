/*
 * XREFs of VerifierMmMapLockedPages @ 0x140AE0180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetAddToCounter @ 0x140AC8994 (ViTargetAddToCounter.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140AD30E8 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140AE0A58 (ViMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall VerifierMmMapLockedPages(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // di
  __int64 v4; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks(BugCheckParameter2);
  if ( !_bittest16((const signed __int16 *)(BugCheckParameter2 + 10), 0xDu)
    && (unsigned int)VfFaultsIsSystemSufficientlyBooted()
    && (MmVerifierData & 1) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x81uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), 0LL);
  }
  LOBYTE(a2) = v2;
  v4 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvMmMapLockedPagesSpecifyCache)(
         BugCheckParameter2,
         a2,
         1LL);
  if ( v4 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(BugCheckParameter2 + 40));
  return v4;
}
