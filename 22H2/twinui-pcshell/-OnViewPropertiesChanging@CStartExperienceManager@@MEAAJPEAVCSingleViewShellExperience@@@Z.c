/*
 * XREFs of ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180080420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::OnViewPropertiesChanging(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  return CStartExperienceManager::PositionMenu((char *)this - 88, a2, 0LL);
}
