/*
 * XREFs of ?GetRuntimeClassName@ShellFeedsExperienceManagerImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B55E0
 * Callers:
 *     ?GetRuntimeClassName@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801656C0 (-GetRuntimeClassName@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ShellFeedsExperienceManagerImpl::GetRuntimeClassName(
        ShellFeedsExperienceManagerImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ShellFeedsExperienceManager", 0x3Du, a2);
}
