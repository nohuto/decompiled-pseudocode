/*
 * XREFs of DCompositionNotifyPresent @ 0x1C00099C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C00A8FFC (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 */

void __fastcall DCompositionNotifyPresent(__int64 a1, int a2)
{
  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( !*(_DWORD *)(a1 + 80) )
      DirectComposition::CSynchronizationManager::NotifyPresent(*(_QWORD *)(a1 + 72), a2 != 0);
  }
}
