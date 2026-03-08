/*
 * XREFs of ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180038BA0
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180020BD4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x180021318 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800386D0 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ??0CRenderTargetManager@@IEAA@PEAVCComposition@@@Z @ 0x1800AEACC (--0CRenderTargetManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800FF5E0 (-CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDrawingContext@@IEAA@XZ @ 0x180038C88 (--0CDrawingContext@@IEAA@XZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawingContext::Create(struct CDrawingContext **a1)
{
  CDrawingContext *v2; // rax
  CDrawingContext *v3; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CDrawingContext *)DefaultHeap::AllocClear(0x1FF0uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v2, 0, 0x1FF0uLL);
  CDrawingContext::CDrawingContext(v3);
  *(_QWORD *)v3 = &CGlobalDrawingContext::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)v3 + 2) = &CGlobalDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)v3 + 3) = &CGlobalDrawingContext::`vftable'{for `ID2DContextOwner'};
  *a1 = v3;
  (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v3 + 8LL))(v3);
}
