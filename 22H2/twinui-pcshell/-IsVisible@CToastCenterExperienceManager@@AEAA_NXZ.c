/*
 * XREFs of ?IsVisible@CToastCenterExperienceManager@@AEAA_NXZ @ 0x1800869E8
 * Callers:
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180231E6C (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CToastCenterExperienceManager::IsVisible(CToastCenterExperienceManager *this)
{
  return *((_DWORD *)this + 36) == 2;
}
