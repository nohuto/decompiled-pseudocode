/*
 * XREFs of ?Create@CFlipExSwapchainStatistics@@SAJPEBVCGlobalCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18001CF48
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800F2010 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CFlipExSwapchainStatistics::Create(
        const struct CGlobalCompositionSurfaceInfo *a1,
        struct CFlipExSwapchainStatistics **a2)
{
  struct CFlipExSwapchainStatistics *v4; // rax
  struct CFlipExSwapchainStatistics *v5; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CFlipExSwapchainStatistics *)DefaultHeap::AllocClear(0x20uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 7) = 0;
  *(_QWORD *)v4 = &CFlipExSwapchainStatistics::`vftable';
  *((_QWORD *)v4 + 2) = a1;
  *((_DWORD *)v4 + 6) = 2;
  CProjectedShadowReceiver::AddRef(v4);
  result = 0LL;
  *a2 = v5;
  return result;
}
