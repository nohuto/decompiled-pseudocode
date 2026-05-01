/*
 * XREFs of ?OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ @ 0x1800BC480
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1804E37A0 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnDismiss(CBaseTrayFlyoutExperienceManager *this)
{
  CSingleViewShellExperience::DestroyView((CBaseTrayFlyoutExperienceManager *)((char *)this + 64));
  return 0LL;
}
