CCpuClipAntialiasSinkContext::SinkEntry *__fastcall CCpuClipAntialiasSinkContext::SinkEntry::`scalar deleting destructor'(
        CCpuClipAntialiasSinkContext::SinkEntry *this)
{
  void **v1; // rbx
  void *v3; // rcx
  bool v4; // zf

  v1 = (void **)((char *)this + 8);
  detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 1);
  v3 = *v1;
  v4 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this);
  return this;
}
