/*
 * XREFs of HalInitializeProcessor @ 0x14037DBF0
 * Callers:
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A88D44 (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1, __int64 a2)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0, a1 != 0 ? 6 : 3, a2);
}
