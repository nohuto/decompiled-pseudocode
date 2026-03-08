/*
 * XREFs of HalInitializeOnResume @ 0x140504610
 * Callers:
 *     PopHiberCheckResume @ 0x140A9FD30 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x14050B390 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalFirmwareTypeEfi )
    return HalpEfiInitializeOnResume();
  return result;
}
