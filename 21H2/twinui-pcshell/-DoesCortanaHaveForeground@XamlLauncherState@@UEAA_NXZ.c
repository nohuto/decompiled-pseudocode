/*
 * XREFs of ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180014A60
 * Callers:
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x1803A4A10 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180014AA0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 */

char __fastcall XamlLauncherState::DoesCortanaHaveForeground(XamlLauncherState *this)
{
  bool IsCortanaVisible; // al
  char v3; // dl

  IsCortanaVisible = XamlLauncherState::IsCortanaVisible(this);
  v3 = 0;
  if ( IsCortanaVisible || *((_DWORD *)this + 10) == 3 || *((_DWORD *)this + 10) == 20 )
    return 1;
  return v3;
}
