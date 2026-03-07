__int64 __fastcall CManipulationContext::AddRef(CManipulationContext *this)
{
  return CMILRefCountImpl::AddReference((CManipulationContext *)((char *)this + 16));
}
