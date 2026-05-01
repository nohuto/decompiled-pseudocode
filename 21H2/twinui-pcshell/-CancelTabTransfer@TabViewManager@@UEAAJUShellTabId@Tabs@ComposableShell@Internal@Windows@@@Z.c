/*
 * XREFs of ?CancelTabTransfer@TabViewManager@@UEAAJUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DC490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::CancelTabTransfer(__int64 a1, __int128 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(__int64 **)(a1 + 1216);
  v3 = *v2;
  v5 = *a2;
  return (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v3 + 72))(v2, &v5);
}
