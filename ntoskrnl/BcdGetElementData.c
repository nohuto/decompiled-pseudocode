/*
 * XREFs of BcdGetElementData @ 0x14082B504
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x14060F9E0 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x140A59DB0 (BiResolveLocateDevice.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B5DFE8 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(int a1, int a2, int a3, __int64 a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
