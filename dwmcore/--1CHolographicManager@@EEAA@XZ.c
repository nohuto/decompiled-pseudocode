void __fastcall CHolographicManager::~CHolographicManager(CHolographicManager *this)
{
  volatile signed __int32 *v2; // rcx
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  CResource **v6; // rcx

  *(_QWORD *)this = &CHolographicManager::`vftable'{for `IHolographicManager'};
  *((_QWORD *)this + 1) = &CHolographicManager::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
    *((_QWORD *)this + 5) = 0LL;
    ReleaseInterface<CHolographicInteropTaskQueue>((__int64 *)this + 6);
    ReleaseInterface<CHolographicInteropTaskQueue>((__int64 *)this + 7);
    v3 = DisplayId::None;
    *(_QWORD *)((char *)this + 68) = 0LL;
    *((_DWORD *)this + 16) = v3;
  }
  CHolographicManager::ReleaseInteropRenderTarget(this);
  v4 = (void *)*((_QWORD *)this + 29);
  if ( v4 )
    CloseHandle(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 200);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  v5 = (void *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 20) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 112);
  v6 = (CResource **)*((_QWORD *)this + 10);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
      v6,
      *((CResource ***)this + 11));
    std::_Deallocate<16,0>(
      *((void **)this + 10),
      (*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
}
