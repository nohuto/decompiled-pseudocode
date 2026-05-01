/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x180023398
 * Callers:
 *     _lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_::operator() @ 0x180023288 (_lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_--operator().c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180062D00 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x18034F7E0 (-SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x180351300 (-put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180023080 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(WindowWrapperBase *this)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  v2 = *((_DWORD *)this + 47);
  v3 = *((int *)this + 76);
  v4 = *((_DWORD *)this + 122);
  if ( (v2 & 0x10) != 0 && (v2 & 0x20) == 0 )
    v4 = v4 != 0;
  if ( v4 != (*(unsigned int (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 136LL))(this) )
  {
    (*(void (__fastcall **)(WindowWrapperBase *, _QWORD))(*(_QWORD *)this + 160LL))(this, v4);
    if ( v3 )
      WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this, v3, 2);
  }
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion(this);
}
