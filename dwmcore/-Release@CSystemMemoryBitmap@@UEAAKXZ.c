__int64 __fastcall CSystemMemoryBitmap::Release(CSystemMemoryBitmap *this)
{
  return CMILRefCountBaseT<IBitmapSource>::InternalRelease((char *)this - 24);
}
