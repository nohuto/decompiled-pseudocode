/*
 * XREFs of ?HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z @ 0x18012D8B6
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D6F70 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047B80 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CComputeScribbleFramebuffer::HasScribbleStarted(int **this, bool *a2, int **a3)
{
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 152) )
  {
    v5 = FastRegion::CRegion::Copy(a3, this + 10);
    if ( v5 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  }
  else
  {
    **a3 = 0;
  }
  *a2 = *((_BYTE *)this + 152);
}
