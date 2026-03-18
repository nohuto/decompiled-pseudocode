/*
 * XREFs of ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180131ABC
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801FBCCC (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1802049BC (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047D50 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CComputeScribbleFramebuffer::SaveDirtyForPreRender(int **this)
{
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = FastRegion::CRegion::Copy(this + 20, this + 10);
  if ( v2 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
  *this[10] = 0;
  *((_BYTE *)this + 152) = 0;
}
