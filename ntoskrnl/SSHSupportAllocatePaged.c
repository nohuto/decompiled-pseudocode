/*
 * XREFs of SSHSupportAllocatePaged @ 0x140732420
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1402B36C0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1402B37A0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x1405A0820 (SshpCopyDataEntry.c)
 *     SshpWriteBlocker @ 0x1405A0960 (SshpWriteBlocker.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocatePaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a1, a2);
}
