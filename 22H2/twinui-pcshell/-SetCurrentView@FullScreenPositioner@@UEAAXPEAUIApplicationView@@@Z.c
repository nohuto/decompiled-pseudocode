/*
 * XREFs of ?SetCurrentView@FullScreenPositioner@@UEAAXPEAUIApplicationView@@@Z @ 0x1802169E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FullScreenPositioner::SetCurrentView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a2);
}
