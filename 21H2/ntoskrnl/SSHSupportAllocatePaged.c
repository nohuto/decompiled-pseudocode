/*
 * XREFs of SSHSupportAllocatePaged @ 0x1407F16F0
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14036C210 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14036C2F0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpWriteBlocker @ 0x140399BC4 (SshpWriteBlocker.c)
 *     SshpCopyDataEntry @ 0x1405DFAC4 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocatePaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a1, a2);
}
