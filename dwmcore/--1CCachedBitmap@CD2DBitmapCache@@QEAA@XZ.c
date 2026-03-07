void __fastcall CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(CD2DBitmapCache::CCachedBitmap *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v2 + 104), *(const struct IDeviceResourceNotify **)this);
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v3 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v3);
}
