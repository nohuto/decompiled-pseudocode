/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x14036C1D4
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407F1400 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x140853600 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1409A0FD0 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocateNonPaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a1, a2);
}
