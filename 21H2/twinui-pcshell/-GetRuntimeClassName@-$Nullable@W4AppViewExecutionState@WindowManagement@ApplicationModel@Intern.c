/*
 * XREFs of ?GetRuntimeClassName@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803478B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Foundation.IReference`1<Windows.Internal.ApplicationModel.WindowManagement.AppViewExecutionState>",
           0x69u,
           a2);
}
