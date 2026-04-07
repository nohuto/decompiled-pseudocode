/*
 * XREFs of ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x180080ED4
 * Callers:
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x180080E80 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ @ 0x180080A98 (-EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetExclusiveViewImpl(CAnalogCompositorManager *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CAnalogCompositorManager::EnsureExclusiveMode(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, a2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL)
                                   + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                      + 24LL));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x64u);
  }
  return v5;
}
