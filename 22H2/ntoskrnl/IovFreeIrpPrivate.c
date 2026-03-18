/*
 * XREFs of IovFreeIrpPrivate @ 0x140AC26D0
 * Callers:
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x1402AF1E0 (IoFreeIrp.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 * Callees:
 *     IopFreeIrp @ 0x1402AF210 (IopFreeIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 *     VfIoFreeIrp @ 0x140ACE7E4 (VfIoFreeIrp.c)
 */

void __fastcall IovFreeIrpPrivate(ULONG_PTR BugCheckParameter2)
{
  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter2 != 6 )
      VerifierBugCheckIfAppropriate(0xC9u, (unsigned int)(IovpDisabledWithoutReboot + 1), BugCheckParameter2, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter2 + 32) != BugCheckParameter2 + 32 )
      VerifierBugCheckIfAppropriate(0xC9u, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  if ( !(unsigned int)VfIoFreeIrp((PVOID)BugCheckParameter2) )
    IopFreeIrp(BugCheckParameter2);
}
