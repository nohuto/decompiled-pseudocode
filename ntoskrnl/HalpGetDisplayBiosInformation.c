/*
 * XREFs of HalpGetDisplayBiosInformation @ 0x1403B0C58
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpGetDisplayBiosInformation()
{
  return 2 - (unsigned int)(HalpVideoBiosPresent != 0);
}
