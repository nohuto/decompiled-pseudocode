void __fastcall CCpuClipAntialiasSinkContext::SinkRenderParameters::~SinkRenderParameters(
        CCpuClipAntialiasSinkContext::SinkRenderParameters *this)
{
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 2);
  if ( *(_QWORD *)this )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(*(volatile signed __int32 **)this);
}
