/*
 * XREFs of ?GetRuntimeClassName@ApplicationViewTabInsertionContext@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802F3880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ApplicationViewTabInsertionContext::GetRuntimeClassName(
        ApplicationViewTabInsertionContext *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Internal.ViewManagement.ApplicationViewTabInsertionContext", 0x45u, a2);
}
