CCpuClipAntialiasSinkContext *__fastcall CCpuClipAntialiasSinkContext::`scalar deleting destructor'(
        CCpuClipAntialiasSinkContext *this,
        char a2)
{
  void **v2; // rdi
  unsigned __int64 v5; // r8
  void *v6; // rcx
  bool v7; // zf
  struct CCpuClipAntialiasSinkContext *v8; // rcx
  struct CObjectCache *ObjectCache; // rax

  v2 = (void **)((char *)this + 16);
  v5 = 0x84BDA12F684BDA13uLL * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4);
  if ( v5 )
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
      v2,
      0LL,
      v5);
  v6 = *v2;
  v7 = *v2 == v2 + 3;
  *v2 = 0LL;
  if ( v7 )
    v6 = 0LL;
  operator delete(v6);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x3D0uLL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v8);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
