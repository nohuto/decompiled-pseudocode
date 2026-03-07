CD2DBitmapCache::CCachedBitmap *__fastcall CD2DBitmapCache::CCachedBitmap::CCachedBitmap(
        CD2DBitmapCache::CCachedBitmap *this,
        struct IDeviceResourceNotify *a2,
        struct CSecondaryD2DBitmap *a3)
{
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  struct IDeviceResourceNotify *v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CSecondaryD2DBitmap *)((char *)a3 + 8));
  v5 = *((_QWORD *)this + 1) + 56LL;
  v8 = a2;
  v6 = *(_BYTE **)(v5 + 8);
  if ( v6 == *(_BYTE **)(v5 + 16) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
      (const void **)v5,
      v6,
      &v8);
  }
  else
  {
    *(_QWORD *)v6 = a2;
    *(_QWORD *)(v5 + 8) += 8LL;
  }
  return this;
}
