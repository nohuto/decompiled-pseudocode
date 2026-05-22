/*
 * XREFs of ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180042C30
 * Callers:
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180042B30 (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCEF8 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD46C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::check_hresult(__int64 a1)
{
  if ( (int)a1 < 0 )
    winrt::throw_hresult(a1);
}
