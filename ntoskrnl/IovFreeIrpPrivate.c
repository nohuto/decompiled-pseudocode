/*
 * XREFs of IovFreeIrpPrivate @ 0x140ABE6D0
 * Callers:
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 * Callees:
 *     IopFreeIrp @ 0x14030EC30 (IopFreeIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfIoFreeIrp @ 0x140ACA7E4 (VfIoFreeIrp.c)
 */

void __fastcall IovFreeIrpPrivate(ULONG_PTR BugCheckParameter1)
{
  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter1 != 6 )
      VerifierBugCheckIfAppropriate(0xC9u, (unsigned int)(IovpDisabledWithoutReboot + 1), BugCheckParameter1, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 32) != BugCheckParameter1 + 32 )
      VerifierBugCheckIfAppropriate(0xC9u, 2uLL, BugCheckParameter1, 0LL, 0LL);
  }
  if ( !(unsigned int)VfIoFreeIrp((PVOID)BugCheckParameter1) )
    IopFreeIrp(BugCheckParameter1);
}
