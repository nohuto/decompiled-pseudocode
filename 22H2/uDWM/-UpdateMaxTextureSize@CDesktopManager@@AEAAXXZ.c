/*
 * XREFs of ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x1800531F4
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003720C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x180085E58 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::UpdateMaxTextureSize(CDesktopManager *this)
{
  int v2; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 32LL))(*(_QWORD *)(*((_QWORD *)this + 5)
                                                                                                  + 24LL));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 16LL) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 5)
                                                                                                  + 16LL));
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 480LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
  *((_DWORD *)this + 45) = v2;
  *((_DWORD *)this + 46) = v2;
}
