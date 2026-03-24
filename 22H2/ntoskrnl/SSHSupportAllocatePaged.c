/*
 * XREFs of SSHSupportAllocatePaged @ 0x14069D95C
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x140325750 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x140325850 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x14057FB30 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocatePaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}
