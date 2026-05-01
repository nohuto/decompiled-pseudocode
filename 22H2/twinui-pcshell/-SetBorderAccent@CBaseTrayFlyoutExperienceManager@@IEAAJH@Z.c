/*
 * XREFs of ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x1800BDBFC
 * Callers:
 *     ?OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BCB80 (-OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BD2F0 (-OnViewUncloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18000CCF0 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?GetBorderFlagFromStuckEdge@CBaseTrayFlyoutExperienceManager@@QEAA?AW4Border@CSingleViewShellExperience@@W4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800BBA40 (-GetBorderFlagFromStuckEdge@CBaseTrayFlyoutExperienceManager@@QEAA-AW4Border@CSingleViewShellExp.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::SetBorderAccent(CBaseTrayFlyoutExperienceManager *this, int a2)
{
  unsigned int v2; // r11d
  CBaseTrayFlyoutExperienceManager *v3; // r10
  unsigned int BorderFlagFromStuckEdge; // eax

  v2 = 0;
  v3 = this;
  if ( a2 )
    BorderFlagFromStuckEdge = CBaseTrayFlyoutExperienceManager::GetBorderFlagFromStuckEdge(this, *((_DWORD *)this + 92));
  else
    BorderFlagFromStuckEdge = 0;
  CSingleViewShellExperience::ShowBorder((__int64)v3 + 72, BorderFlagFromStuckEdge, v2, 0LL, 0);
  return 0LL;
}
