void __fastcall CSwapChainBuffer::AddTransientRegion(
        CSwapChainBuffer *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int v4; // eax
  int v5; // eax
  void *v6[10]; // [rsp+20h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+88h] [rbp+0h]

  CRegion::CRegion((CRegion *)v6, (struct tagRECT *)this);
  v4 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v6, a2);
  if ( v4 < 0 )
    ModuleFailFastForHRESULT(v4, retaddr);
  v5 = FastRegion::CRegion::Union(
         (const struct FastRegion::Internal::CRgnData **)this + 13,
         (const struct FastRegion::Internal::CRgnData **)v6);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT(v5, retaddr);
  FastRegion::CRegion::FreeMemory(v6);
}
