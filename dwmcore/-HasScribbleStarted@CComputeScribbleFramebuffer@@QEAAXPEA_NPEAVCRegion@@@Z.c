void __fastcall CComputeScribbleFramebuffer::HasScribbleStarted(int **this, bool *a2, int **a3)
{
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 152) )
  {
    v5 = FastRegion::CRegion::Copy(a3, this + 10);
    if ( v5 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  }
  else
  {
    **a3 = 0;
  }
  *a2 = *((_BYTE *)this + 152);
}
