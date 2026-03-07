__int64 __fastcall CManipulationContext::Release(CManipulationContext *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)this + 2);
}
