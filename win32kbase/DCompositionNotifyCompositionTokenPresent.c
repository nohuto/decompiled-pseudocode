/*
 * XREFs of DCompositionNotifyCompositionTokenPresent @ 0x1C00A8FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C00A8FFC (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 */

void __fastcall DCompositionNotifyCompositionTokenPresent(unsigned __int64 a1, int a2)
{
  DirectComposition::CSynchronizationManager::NotifyPresent(a1, a2 != 0);
}
