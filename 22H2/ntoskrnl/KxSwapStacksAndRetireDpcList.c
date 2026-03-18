/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x140427C00
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x140427BE0 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x1402459D0 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x140427BEFLL);
}
