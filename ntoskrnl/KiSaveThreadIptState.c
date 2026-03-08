/*
 * XREFs of KiSaveThreadIptState @ 0x140570830
 * Callers:
 *     SwapContext @ 0x14041F970 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140570730 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}
