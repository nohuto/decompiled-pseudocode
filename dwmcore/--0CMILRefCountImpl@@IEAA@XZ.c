CMILRefCountImpl *__fastcall CMILRefCountImpl::CMILRefCountImpl(CMILRefCountImpl *this)
{
  *(_DWORD *)this = 0;
  return this;
}
