/*
 * XREFs of ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802A86E0
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1802A8534 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802A874C (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?OnSwapChainRelease@CHolographicExclusiveView@@QEAAXXZ @ 0x1802A88CC (-OnSwapChainRelease@CHolographicExclusiveView@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x1802A8674 (-CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateSwapChain(CHolographicExclusiveView *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 82) )
  {
    v2 = *((_QWORD *)this + 12);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 104);
      if ( v3 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 400LL))(v3, 0LL);
    }
    if ( *((_BYTE *)this + 81) )
      CHolographicExclusiveView::CloseSurfaceHandles((HANDLE *)this);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_BYTE *)this + 80) = 0;
  }
}
