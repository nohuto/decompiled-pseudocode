/*
 * XREFs of ?GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18023DDB0
 * Callers:
 *     ?GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180164C20 (-GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CPeopleBarJumpViewExperienceManager::GetRuntimeClassName(
        CPeopleBarJumpViewExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.PeopleBarJumpViewExperienceManager", 0x44u, a2);
}
