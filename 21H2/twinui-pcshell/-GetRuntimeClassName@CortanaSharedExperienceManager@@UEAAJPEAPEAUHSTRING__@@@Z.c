/*
 * XREFs of ?GetRuntimeClassName@CortanaSharedExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180227E90
 * Callers:
 *     ?GetRuntimeClassName@SearchAppExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801646F0 (-GetRuntimeClassName@SearchAppExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CortanaSharedExperienceManager::GetRuntimeClassName(
        CortanaSharedExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.CortanaExperienceManager", 0x3Au, a2);
}
