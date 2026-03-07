void __fastcall CSyncLockGroup::RemoveRenderTarget(CSyncLockGroup *this, struct IMonitorTarget *a2)
{
  __int64 *v2; // rbx
  struct IMonitorTarget **v4; // rax
  struct IMonitorTarget **v5; // rcx
  struct IMonitorTarget **v6; // rdx
  CParallelModeGroup ***v7; // rax
  __int64 v8; // rcx
  CParallelModeGroup **v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v4 = (struct IMonitorTarget **)*((_QWORD *)this + 2);
  v5 = (struct IMonitorTarget **)*((_QWORD *)this + 3);
  while ( v4 != v5 && *v4 != a2 )
    ++v4;
  v6 = v4;
  if ( v4 != v5 )
  {
    while ( ++v4 != v5 )
    {
      if ( *v4 != a2 )
        *v6++ = *v4;
    }
  }
  detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
    v2,
    ((__int64)v6 - *v2) >> 3,
    1LL);
  if ( ((v2[1] - *v2) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    v7 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___(
           &v9,
           (CParallelModeGroup **)CSyncLockGroup::g_syncLockGroups,
           (CParallelModeGroup **)qword_1803E30A8);
    std::vector<std::unique_ptr<CSyncLockGroup>>::erase(v8, &v10, *v7);
  }
}
