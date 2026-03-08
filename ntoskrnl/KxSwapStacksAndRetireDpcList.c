/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x14041F870
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x14041F850 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x14041F85FLL);
}
