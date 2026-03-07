void __fastcall CSecondaryBitmap::AddValidRect(__int64 a1, struct tagRECT *a2)
{
  int v3; // eax
  void *v4[10]; // [rsp+20h] [rbp-68h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  CRegion::CRegion((CRegion *)v4, a2);
  v3 = FastRegion::CRegion::Subtract(
         (const struct FastRegion::Internal::CRgnData **)(a1 + 16),
         (const struct FastRegion::Internal::CRgnData **)v4);
  if ( v3 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
  FastRegion::CRegion::FreeMemory(v4);
}
