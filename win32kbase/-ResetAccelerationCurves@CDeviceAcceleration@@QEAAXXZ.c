void __fastcall CDeviceAcceleration::ResetAccelerationCurves(CDeviceAcceleration *this)
{
  CInputConfig *v2; // r14
  CInputConfig *v3; // rdx
  CInputConfig *i; // rdi
  _QWORD **v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  struct CInputSpaceRegion *v9; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v3 = *(CInputConfig **)v2;
  for ( i = **(CInputConfig ***)v2; ; i = *(CInputConfig **)i )
  {
    v5 = 0LL;
    if ( v3 != v2 )
      v5 = (_QWORD **)((char *)v3 + 16);
    if ( !v5 )
      break;
    v6 = 1456LL;
    if ( v3 != v2 )
      v6 = (__int64)v3 + 1472;
    v10[0] = &CInputConfig::slock;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v7 = *(_QWORD **)v6;
    v10[1] = v6;
    while ( 1 )
    {
      v8 = 0LL;
      v10[2] = v7;
      if ( v7 != (_QWORD *)v6 )
        v8 = v7 + 2;
      if ( !v8 )
        break;
      v9 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v10);
      (**(void (__fastcall ***)(CDeviceAcceleration *, _QWORD, __int64))this)(
        this,
        *((unsigned __int16 *)v9 + 10),
        (__int64)v9 + 200);
      v7 = (_QWORD *)*v7;
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
    v3 = i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
}
