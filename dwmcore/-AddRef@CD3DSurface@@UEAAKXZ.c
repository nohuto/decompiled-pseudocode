__int64 __fastcall CD3DSurface::AddRef(CD3DSurface *this)
{
  return CMILRefCountImpl::AddReference((CD3DSurface *)((char *)this - 216));
}
