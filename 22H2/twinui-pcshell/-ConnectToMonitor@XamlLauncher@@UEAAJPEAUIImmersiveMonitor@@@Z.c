/*
 * XREFs of ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18039B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180076808 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18039F9E4 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall XamlLauncher::ConnectToMonitor(XamlLauncher *this, struct IImmersiveMonitor *a2)
{
  unsigned __int8 v4; // al

  if ( !*((_QWORD *)this + 31) )
    return 2147943568LL;
  if ( ImmersiveMonitorHelper::ConnectToMonitor(*((ImmersiveMonitorHelper **)this + 16), a2) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 96LL))(*((_QWORD *)this + 31));
    XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 24), v4);
  }
  return 0LL;
}
