/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18007BA04
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CC2C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x180096EF4 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z.c)
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z @ 0x1801B30E4 (-EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x1800D588C (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  unsigned __int64 Count; // rax
  CPtrArrayBase *v1; // rcx
  struct CThreadContext *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CThreadContext::GetCurrent(&v2) >= 0 )
  {
    Count = CPtrArrayBase::GetCount((struct CThreadContext *)((char *)v2 + 24));
    CPtrArrayBase::RemoveAt(v1, Count - 1, 1uLL);
  }
}
