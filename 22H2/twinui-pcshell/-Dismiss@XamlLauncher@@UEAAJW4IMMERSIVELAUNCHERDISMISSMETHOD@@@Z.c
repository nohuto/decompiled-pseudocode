/*
 * XREFs of ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18039B600
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18000C930 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::Dismiss(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 248);
  if ( !v1 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  return 0LL;
}
