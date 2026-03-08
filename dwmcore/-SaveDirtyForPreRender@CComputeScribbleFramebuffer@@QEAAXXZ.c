/*
 * XREFs of ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x18012D90C
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801F894C (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x18020163C (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047B80 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
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
