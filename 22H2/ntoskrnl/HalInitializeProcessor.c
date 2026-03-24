/*
 * XREFs of HalInitializeProcessor @ 0x1403A8930
 * Callers:
 *     KiInitializeBootStructures @ 0x14099BA20 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099B988 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0);
}
