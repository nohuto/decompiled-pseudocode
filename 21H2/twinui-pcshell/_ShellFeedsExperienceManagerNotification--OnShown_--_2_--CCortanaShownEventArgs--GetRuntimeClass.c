/*
 * XREFs of _ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::GetRuntimeClassName @ 0x1800B55B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ShellFeedsExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.CortanaShownEventArgs", 0x37u, a2);
}
