void __fastcall CGdiSpriteBitmap::AddDxBltRects(CGdiSpriteBitmap *this, const struct tagRECT *a2, unsigned int a3)
{
  int v4; // eax
  int *v5; // [rsp+20h] [rbp-68h] BYREF
  int v6; // [rsp+28h] [rbp-60h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( a3 )
  {
    v6 = 0;
    v5 = &v6;
    v4 = CRegion::TryAddRectangles((struct FastRegion::Internal::CRgnData **)&v5, a2, a3);
    if ( v4 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
    CRegion::GetBoundingRect((CRegion *)&v5, (CGdiSpriteBitmap *)((char *)this + 336));
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v5, 1);
    FastRegion::CRegion::FreeMemory((void **)&v5);
  }
}
