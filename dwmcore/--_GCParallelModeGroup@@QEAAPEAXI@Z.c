CParallelModeGroup *__fastcall CParallelModeGroup::`scalar deleting destructor'(CParallelModeGroup *this)
{
  void **v1; // rbx
  __int64 v3; // r8
  void *v4; // rcx
  bool v5; // zf

  v1 = (void **)((char *)this + 16);
  *(_QWORD *)this = &CSyncLockGroup::`vftable';
  v3 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3;
  if ( v3 )
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 2,
      0LL,
      v3);
  v4 = *v1;
  v5 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v5 )
    v4 = 0LL;
  operator delete(v4);
  operator delete(this);
  return this;
}
