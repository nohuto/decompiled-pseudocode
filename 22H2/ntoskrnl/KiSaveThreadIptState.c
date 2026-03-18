/*
 * XREFs of KiSaveThreadIptState @ 0x140572EB0
 * Callers:
 *     SwapContext @ 0x140427D00 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140572DB0 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}
