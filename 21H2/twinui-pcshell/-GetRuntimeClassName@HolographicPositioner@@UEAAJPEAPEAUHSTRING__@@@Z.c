/*
 * XREFs of ?GetRuntimeClassName@HolographicPositioner@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802B0E00
 * Callers:
 *     ?GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180166C20 (-GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall HolographicPositioner::GetRuntimeClassName(HolographicPositioner *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Holographic.HolographicViewHostItemSource", 0x40u, a2);
}
