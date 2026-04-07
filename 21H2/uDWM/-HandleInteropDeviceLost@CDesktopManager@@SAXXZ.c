/*
 * XREFs of ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180086E30
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x180012234 (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 *     ?CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z @ 0x1800378C8 (-CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004CC14 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z @ 0x180085E48 (-CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180018890 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ @ 0x180087464 (-ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ.c)
 */

void CDesktopManager::HandleInteropDeviceLost(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rcx
  CDesktopManager *v2; // rcx

  CDesktopManager::ReleaseDXGIAdapter(CDesktopManager::s_pDesktopManagerInstance);
  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    v0 = CDesktopManager::s_pDesktopManagerInstance;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27) = 0LL;
  }
  v2 = (CDesktopManager *)*((_QWORD *)v0 + 29);
  if ( v2 )
  {
    (*(void (__fastcall **)(CDesktopManager *))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29) = 0LL;
  }
  CDesktopManager::EnsureDCompositionInteropDevice(v2);
  CWindowList::OnInteropDeviceRecreated(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61));
}
