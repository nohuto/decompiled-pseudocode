/*
 * XREFs of VfIoCompletionCheckState @ 0x1409CAADC
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1409C66C0 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfIoCompletionCheckState(_DWORD *Entry, ULONG_PTR a2)
{
  unsigned int v4; // ecx

  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4 = *(unsigned __int8 *)Entry;
    if ( (_BYTE)v4 != KeGetCurrentIrql() )
      VerifierBugCheckIfAppropriate(0xC4u, 0xFAuLL, a2, v4, KeGetCurrentIrql());
  }
  if ( (MmVerifierData & 0x10) != 0 && Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(0xC4u, 0xFBuLL, a2, KeGetCurrentThread()->CombinedApcDisable, (unsigned int)Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
