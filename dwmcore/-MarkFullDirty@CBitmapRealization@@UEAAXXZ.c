void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  CD2DBitmapCache *v1; // rbx

  v1 = (CBitmapRealization *)((char *)this - 376);
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)((char *)this - 376), 0);
  CD2DBitmapCache::MarkFullInvalid(v1);
}
