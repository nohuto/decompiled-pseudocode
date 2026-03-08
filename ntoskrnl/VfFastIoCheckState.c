/*
 * XREFs of VfFastIoCheckState @ 0x140AC8204
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     IopWriteFile @ 0x1406B3E10 (IopWriteFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopQueryInformation @ 0x140757E40 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x140784190 (IopGetBasicInformationFile.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfFastIoCheckState(_DWORD *Entry, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x10) != 0 && !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0xC3uLL, a2, 0LL, 0LL);
  if ( (MmVerifierData & 0x10) != 0 && *(_BYTE *)Entry != KeGetCurrentIrql() )
    VerifierBugCheckIfAppropriate(0xC9u, 0x11uLL, a2, *(unsigned __int8 *)Entry, KeGetCurrentIrql());
  if ( (MmVerifierData & 0x10) != 0 && Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(0xC4u, 0xC6uLL, a2, KeGetCurrentThread()->CombinedApcDisable, (unsigned int)Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
