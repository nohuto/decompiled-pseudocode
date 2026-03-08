/*
 * XREFs of ?GetRuntimeClassName@?$ValueReference@I@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180292A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ValueReference<unsigned int>::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Foundation.IReference`1<UInt32>", 0x27u, a2);
}
