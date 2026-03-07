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
