/*
 * XREFs of ViMmMapLockedPagesSanityChecks @ 0x140AE0A58
 * Callers:
 *     VerifierMmMapLockedPages @ 0x140AE0180 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE0250 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     MmCheckMdlPages @ 0x140AE5264 (MmCheckMdlPages.c)
 */

__int64 __fastcall ViMmMapLockedPagesSanityChecks(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  __int16 v6; // ax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // ax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 1) == 0 )
    return result;
  CurrentIrql = KeGetCurrentIrql();
  if ( a2 )
  {
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x75uLL, CurrentIrql, BugCheckParameter2, a2);
    if ( a2 == 1 )
      goto LABEL_12;
  }
  else if ( CurrentIrql > 2u )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x74uLL, CurrentIrql, BugCheckParameter2, 0LL);
  }
  v6 = 37;
  if ( (unsigned int)VfVerifyMode < 3 )
    v6 = 33;
  v7 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v7 & (unsigned __int16)v6) != 0 )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xB2uLL,
      BugCheckParameter2,
      *(__int16 *)(BugCheckParameter2 + 10),
      (unsigned __int16)(v7 & v6));
LABEL_12:
  v8 = 23;
  if ( a2 != 1 )
    v8 = 18;
  if ( (v8 & *(_WORD *)(BugCheckParameter2 + 10)) == 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB3uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), v8);
  return MmCheckMdlPages(BugCheckParameter2);
}
