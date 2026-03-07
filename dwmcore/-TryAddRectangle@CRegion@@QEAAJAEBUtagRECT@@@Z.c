__int64 __fastcall CRegion::TryAddRectangle(CRegion *this, const struct tagRECT *a2)
{
  _BYTE v4[80]; // [rsp+20h] [rbp-68h] BYREF

  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v4, a2);
  LODWORD(this) = FastRegion::CRegion::Union(this, (const struct CRegion *)v4);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v4);
  return (unsigned int)this;
}
