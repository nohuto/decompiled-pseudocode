/*
 * XREFs of ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C0235B20
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C014F4C4 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 */

void __fastcall CSwapChainProp::Delete(CSwapChainProp *this)
{
  CSwapChainProp::ClearCompositionSurfaceObj(this);
  Win32FreePool(this);
}
