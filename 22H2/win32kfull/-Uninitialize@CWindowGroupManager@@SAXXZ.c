/*
 * XREFs of ?Uninitialize@CWindowGroupManager@@SAXXZ @ 0x1C0240628
 * Callers:
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C00DA6A8 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 * Callees:
 *     ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C023FA94 (-Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z.c)
 */

void __fastcall CWindowGroupManager::Uninitialize(__int64 a1)
{
  struct CWindowGroupManager *v1; // rbx
  void *v2; // rcx

  CWindowGroupManager::Cleanup(a1, 0);
  v1 = `anonymous namespace'::g_windowGroupManager;
  if ( `anonymous namespace'::g_windowGroupManager )
  {
    v2 = (void *)*((_QWORD *)`anonymous namespace'::g_windowGroupManager + 3);
    if ( v2 )
      Win32FreePool(v2);
    Win32FreePool(v1);
  }
  `anonymous namespace'::g_windowGroupManager = 0LL;
}
