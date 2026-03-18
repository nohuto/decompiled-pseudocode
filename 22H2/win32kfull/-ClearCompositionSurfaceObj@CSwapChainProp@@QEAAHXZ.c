/*
 * XREFs of ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C021C10C
 * Callers:
 *     ?Delete@CSwapChainProp@@UEAAXXZ @ 0x1C021C200 (-Delete@CSwapChainProp@@UEAAXXZ.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021C300 (UserRemoveWindowedSwapChain.c)
 *     UserSetWindowedSwapChain @ 0x1C021C408 (UserSetWindowedSwapChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::ClearCompositionSurfaceObj(CSwapChainProp *this)
{
  unsigned int v2; // ebx
  void *v3; // rcx

  v2 = 0;
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    DxgkReleaseCompositionObjectReference(v3);
    *((_QWORD *)this + 3) = 0LL;
    return 1;
  }
  return v2;
}
