/*
 * XREFs of ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180038C90
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180020CC4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x180021408 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800387C0 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ??0CRenderTargetManager@@IEAA@PEAVCComposition@@@Z @ 0x1800AF22C (--0CRenderTargetManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z @ 0x180100220 (-CreateDrawingContext@CCachedVisualImage@@MEAAXPEAPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038D40 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CDrawingContext@@IEAA@XZ @ 0x180038D78 (--0CDrawingContext@@IEAA@XZ.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
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
