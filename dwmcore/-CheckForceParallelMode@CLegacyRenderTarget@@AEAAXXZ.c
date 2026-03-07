void __fastcall CLegacyRenderTarget::CheckForceParallelMode(CLegacyRenderTarget *this)
{
  char v1; // bl
  struct CSyncLockGroup *Group; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 2321) )
  {
    if ( CCommonRegistryData::m_parallelModePolicy == 1 )
    {
      v1 = *((_BYTE *)this + 11497);
      if ( !v1 )
        goto LABEL_4;
    }
    else
    {
      if ( CCommonRegistryData::m_parallelModePolicy != 2 )
        goto LABEL_4;
      v1 = 1;
    }
    Group = CSyncLockGroup::GetGroup(0xFFFFFFFF);
    *((_QWORD *)this + 2321) = Group;
    *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 (char *)Group + 16,
                 (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3) = ((unsigned __int64)this + 144) & -(__int64)(this != 0LL);
  }
LABEL_4:
  *((_BYTE *)this + 18560) = v1;
}
