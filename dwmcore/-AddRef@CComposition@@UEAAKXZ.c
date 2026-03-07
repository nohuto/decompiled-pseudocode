__int64 __fastcall CComposition::AddRef(CComposition *this)
{
  return CMILRefCountImpl::AddReference((CComposition *)((char *)this + 8));
}
