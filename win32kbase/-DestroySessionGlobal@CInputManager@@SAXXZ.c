/*
 * XREFs of ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C00D1870
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00D189C (--_GCInputManager@@IEAAPEAXI@Z.c)
 */

void __fastcall CInputManager::DestroySessionGlobal(__int64 a1, unsigned int a2)
{
  if ( g_pInputManager )
  {
    CInputManager::`scalar deleting destructor'(g_pInputManager, a2);
    g_pInputManager = 0LL;
  }
}
