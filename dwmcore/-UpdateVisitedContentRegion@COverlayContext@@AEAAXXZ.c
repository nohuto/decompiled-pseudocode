void __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  char *v2; // rsi
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int *v6; // [rsp+20h] [rbp-B8h] BYREF
  int v7; // [rsp+28h] [rbp-B0h] BYREF
  void *v8[10]; // [rsp+70h] [rbp-68h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( *((_DWORD *)this + 2818) )
  {
    v7 = 0;
    v6 = &v7;
    v2 = (char *)this + 11248;
    v3 = 0;
    do
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v8, (const struct tagRECT *)(*(_QWORD *)v2 + 16LL * v3));
      v4 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)&v6,
             (const struct FastRegion::Internal::CRgnData **)v8);
      if ( v4 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
      FastRegion::CRegion::FreeMemory(v8);
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 2818) );
    v5 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)this + 1397,
           (const struct FastRegion::Internal::CRgnData **)&v6);
    if ( v5 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
    *((_DWORD *)v2 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v2, 0x10u);
    FastRegion::CRegion::FreeMemory((void **)&v6);
  }
}
