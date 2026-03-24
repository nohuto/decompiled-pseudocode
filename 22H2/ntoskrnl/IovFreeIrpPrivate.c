/*
 * XREFs of IovFreeIrpPrivate @ 0x1409C51E0
 * Callers:
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x1402D3CF0 (IoFreeIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1402D3D20 (IopFreeIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 *     VfIoFreeIrp @ 0x1409D125C (VfIoFreeIrp.c)
 */

void __fastcall IovFreeIrpPrivate(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter1 != 6 )
      VerifierBugCheckIfAppropriate(0xC9u, (unsigned int)(IovpDisabledWithoutReboot + 1), BugCheckParameter1, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 32) != BugCheckParameter1 + 32 )
      VerifierBugCheckIfAppropriate(0xC9u, 2uLL, BugCheckParameter1, 0LL, 0LL);
  }
  if ( !(unsigned int)VfIoFreeIrp((PVOID)BugCheckParameter1) )
    IopFreeIrp(BugCheckParameter1, v2, v3, v4);
}
