/*
 * XREFs of ?GetWindowHandle@SearchAppExperienceManager@@UEAAJPEA_K@Z @ 0x18007DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetHwnd@SearchAppExperienceManager@@AEAAPEAUHWND__@@XZ @ 0x18007DFEC (-_GetHwnd@SearchAppExperienceManager@@AEAAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::GetWindowHandle(SearchAppExperienceManager *this, HWND *a2)
{
  HWND Hwnd; // rax

  Hwnd = SearchAppExperienceManager::_GetHwnd(this);
  *a2 = Hwnd;
  return Hwnd == 0LL ? 0x8007139F : 0;
}
