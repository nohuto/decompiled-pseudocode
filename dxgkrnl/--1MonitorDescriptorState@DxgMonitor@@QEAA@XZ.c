void __fastcall DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(PERESOURCE Resource)
{
  ULONG *p_ActiveEntries; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  void (__fastcall ***ExclusiveWaiters)(PVOID, __int64); // rcx
  void (__fastcall ***SharedWaiters)(PVOID, __int64); // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx

  p_ActiveEntries = &Resource[1].ActiveEntries;
  if ( *(ULONG **)p_ActiveEntries != p_ActiveEntries )
  {
    WdLogSingleEntry1(2LL, Resource);
    while ( 1 )
    {
      v3 = *(_QWORD **)p_ActiveEntries;
      if ( *(ULONG **)p_ActiveEntries == p_ActiveEntries )
        break;
      if ( (ULONG *)v3[1] != p_ActiveEntries || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *(_QWORD *)p_ActiveEntries = v4;
      v4[1] = p_ActiveEntries;
      v5 = v3 - 4;
      if ( !v3 )
        v5 = 0LL;
      operator delete(v5);
    }
  }
  ExclusiveWaiters = (void (__fastcall ***)(PVOID, __int64))Resource[1].ExclusiveWaiters;
  Resource[1].ExclusiveWaiters = 0LL;
  if ( ExclusiveWaiters )
    (**ExclusiveWaiters)(ExclusiveWaiters, 1LL);
  SharedWaiters = (void (__fastcall ***)(PVOID, __int64))Resource[1].SharedWaiters;
  Resource[1].SharedWaiters = 0LL;
  if ( SharedWaiters )
    (**SharedWaiters)(SharedWaiters, 1LL);
  v8 = *(void (__fastcall ****)(_QWORD, __int64))&Resource[1].ActiveCount;
  *(_QWORD *)&Resource[1].ActiveCount = 0LL;
  if ( v8 )
    (**v8)(v8, 1LL);
  ExDeleteResourceLite(Resource);
}
