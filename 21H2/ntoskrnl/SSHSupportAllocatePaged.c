/*
 * XREFs of SSHSupportAllocatePaged @ 0x1406197BC
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14024AA40 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14024AB40 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x14057FE30 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocatePaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
