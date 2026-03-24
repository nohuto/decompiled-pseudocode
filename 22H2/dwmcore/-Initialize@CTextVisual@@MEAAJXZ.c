/*
 * XREFs of ?Initialize@CTextVisual@@MEAAJXZ @ 0x1801F0F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18009DDE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F7D8 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C07A0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z @ 0x1801F0DAC (--0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CTextVisual::Initialize(struct CComposition **this)
{
  CTextVisualContent *v2; // rax
  CMILCOMBase *v3; // rax
  struct CContent *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((unsigned __int8 (__fastcall **)(struct CComposition **))*this + 34))(this) )
    return 0LL;
  v2 = (CTextVisualContent *)DefaultHeap::AllocClear(0x70uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v3 = CTextVisualContent::CTextVisualContent(v2, this);
  v4 = v3;
  if ( v3 )
    CMILCOMBase::InternalAddRef(v3);
  v5 = CVisual::SetContent(this, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v4 )
      CRenderTargetBitmap::Release(v4);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisual.cpp",
    (const char *)(unsigned int)v5);
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  return v6;
}
