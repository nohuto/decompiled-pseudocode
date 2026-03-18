/*
 * XREFs of BcdGetElementData @ 0x1408043C0
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140611E00 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x140A5CA64 (BiResolveLocateDevice.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B3963C (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(int a1, int a2, int a3, __int64 a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
