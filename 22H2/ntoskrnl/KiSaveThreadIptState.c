/*
 * XREFs of KiSaveThreadIptState @ 0x14051A520
 * Callers:
 *     SwapContext @ 0x140405E40 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x14051A418 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
