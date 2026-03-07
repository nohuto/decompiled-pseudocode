unsigned int __fastcall CProjectedShadowReceiver::AddRef(CProjectedShadowReceiver *this)
{
  return CMILRefCountImpl::AddReference((CProjectedShadowReceiver *)((char *)this + 8));
}
