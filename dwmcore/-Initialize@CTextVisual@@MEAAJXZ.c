/*
 * XREFs of ?Initialize@CTextVisual@@MEAAJXZ @ 0x1802518A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004A570 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z @ 0x1802516B4 (--0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CTextVisual::Initialize(struct CComposition **this)
{
  CTextVisualContent *v2; // rax
  CTextVisualContent *v3; // rax
  struct CContent *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((unsigned __int8 (__fastcall **)(struct CComposition **))*this + 31))(this) )
    return 0LL;
  v2 = (CTextVisualContent *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v3 = CTextVisualContent::CTextVisualContent(v2, this);
  v4 = v3;
  if ( v3 )
    CMILRefCountImpl::AddReference((CTextVisualContent *)((char *)v3 + 8));
  v5 = CVisual::SetContent(this, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v4 )
      CResource::InternalRelease(v4);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisual.cpp",
    (const char *)(unsigned int)v5);
  if ( v4 )
    CResource::InternalRelease(v4);
  return v6;
}
