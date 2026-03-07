void __fastcall CWICBitmapRealization::AddDirtyRegion(
        CWICBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CD2DBitmapCache::AddInvalidRegion((CWICBitmapRealization *)((char *)this - 80), a2);
}
