void __fastcall CComposition::~CComposition(CComposition *this, int a2)
{
  __int64 v3; // rsi
  unsigned int i; // ebx
  unsigned int v5; // eax
  __int64 v6; // rbx
  void **v7; // rbx
  CSceneResourceManager *v8; // rbx
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rbx
  CExcludeVisualReference *v12; // rcx
  unsigned int j; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rbx
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rsi
  __int64 v24; // rbx
  volatile signed __int32 *v25; // rcx
  void *v26; // rdx
  _QWORD *v27; // rcx
  wil::details *v28; // rcx
  volatile signed __int32 *v29; // rcx
  Microsoft::Bamo::BaseBamoConnection *v30; // rcx
  void *v31; // rcx
  CResource *v32; // rcx
  CResource *v33; // rcx
  void *v34; // rbx
  void **v35; // rbx
  void *v36; // rbx
  void *v37; // rbx
  void **v38; // rbx
  __int64 v39; // r8
  void *v40; // rcx
  bool v41; // zf
  __int64 v42; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CComposition::`vftable';
  CComposition::Reset(this, a2);
  v3 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 134); ++i )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(*(volatile signed __int32 **)(*((_QWORD *)this + 64) + 8LL * i));
  *((_DWORD *)this + 134) = 0;
  v5 = *((_DWORD *)this + 116);
  if ( v5 )
  {
    v6 = 0LL;
    v3 = v5;
    do
    {
      v42 = *(_QWORD *)(v6 + *((_QWORD *)this + 55));
      ReleaseInterface<CChannelContext>(&v42);
      v6 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  *((_DWORD *)this + 116) = v3;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 440, 8u);
  CComposition::ReleaseNotificationChannels(this);
  v7 = (void **)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v3;
  if ( v7 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(
      (__int64)v7,
      (__int64)v7,
      *((_QWORD *)*v7 + 1));
    std::_Deallocate<16,0>(*v7, 0x38uLL);
    operator delete(v7);
  }
  v8 = (CSceneResourceManager *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = v3;
  if ( v8 )
  {
    CSceneResourceManager::~CSceneResourceManager(v8);
    operator delete(v8);
  }
  std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(qword_1803E7048, xmmword_1803E7050);
  *(_QWORD *)&xmmword_1803E7050 = qword_1803E7048;
  v10 = *((_DWORD *)this + 248);
  if ( v10 )
  {
    v11 = v3;
    v3 = v10;
    do
    {
      v12 = *(CExcludeVisualReference **)(v11 + *((_QWORD *)this + 121));
      if ( v12 )
        CExcludeVisualReference::`scalar deleting destructor'(v12, v9);
      v11 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  *((_DWORD *)this + 248) = v3;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 968, 8u);
  for ( j = v3; j < *((_DWORD *)this + 196); ++j )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 95) + 8LL * j);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  *((_DWORD *)this + 196) = v3;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 760, 8u);
  CComposition::UnmapDeferredSharedSectionViews(this);
  v15 = *((_QWORD *)this + 40);
  *((_QWORD *)this + 40) = v3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = v3;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = (void *)*((_QWORD *)this + 27);
  if ( v17 )
  {
    CRenderTargetManager::~CRenderTargetManager(*((CRenderTargetManager **)this + 27));
    operator delete(v17);
  }
  v18 = *((_QWORD *)this + 28);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = (volatile signed __int32 *)*((_QWORD *)this + 53);
  if ( v19 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v19);
  v20 = *((_QWORD *)this + 29);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = *((_QWORD *)this + 30);
  if ( v21 )
  {
    *((_QWORD *)this + 30) = v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  while ( 1 )
  {
    v22 = (_QWORD *)*((_QWORD *)this + 167);
    if ( *((_QWORD **)this + 166) == v22 )
      break;
    v23 = (_QWORD *)*((_QWORD *)this + 166);
    v24 = *((_QWORD *)this + 168);
    *((_QWORD *)this + 168) = 0LL;
    *((_QWORD *)this + 167) = 0LL;
    *((_QWORD *)this + 166) = 0LL;
    if ( v23 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v23, v22);
      std::_Deallocate<16,0>(v23, (v24 - (_QWORD)v23) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  v25 = (volatile signed __int32 *)*((_QWORD *)this + 31);
  if ( v25 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v25);
  CThreadContext::DestroyObjectCaches();
  g_pFrameId = 0LL;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 169);
  v27 = (_QWORD *)*((_QWORD *)this + 166);
  if ( v27 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
      v27,
      *((_QWORD **)this + 167));
    std::_Deallocate<16,0>(
      *((void **)this + 166),
      (*((_QWORD *)this + 168) - *((_QWORD *)this + 166)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 166) = 0LL;
    *((_QWORD *)this + 167) = 0LL;
    *((_QWORD *)this + 168) = 0LL;
  }
  v28 = (wil::details *)*((_QWORD *)this + 158);
  if ( v28 )
    wil::details::CloseHandle(v28, v26);
  v29 = (volatile signed __int32 *)*((_QWORD *)this + 157);
  if ( v29 )
  {
    *((_QWORD *)this + 157) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease(v29);
  }
  v30 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 156);
  if ( v30 )
  {
    *((_QWORD *)this + 156) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v30);
  }
  operator delete(*((void **)this + 141));
  v31 = (void *)*((_QWORD *)this + 135);
  if ( v31 )
  {
    std::_Deallocate<16,0>(v31, (*((_QWORD *)this + 137) - (_QWORD)v31) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 135) = 0LL;
    *((_QWORD *)this + 136) = 0LL;
    *((_QWORD *)this + 137) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1048);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1016);
  v32 = (CResource *)*((_QWORD *)this + 126);
  if ( v32 )
    CResource::InternalRelease(v32);
  v33 = (CResource *)*((_QWORD *)this + 125);
  if ( v33 )
    CResource::InternalRelease(v33);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 968);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 808);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 760);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 720);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 688);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 576);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 68);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 64);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 55);
  CMmcssTask::UnloadRuntime((CComposition *)((char *)this + 336));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 41);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 40);
  v34 = (void *)*((_QWORD *)this + 36);
  if ( v34 )
  {
    CSceneResourceManager::~CSceneResourceManager(*((CSceneResourceManager **)this + 36));
    operator delete(v34);
  }
  v35 = (void **)*((_QWORD *)this + 35);
  if ( v35 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(
      *((_QWORD *)this + 35),
      *((_QWORD *)this + 35),
      *((_QWORD *)*v35 + 1));
    std::_Deallocate<16,0>(*v35, 0x38uLL);
    operator delete(v35);
  }
  v36 = (void *)*((_QWORD *)this + 32);
  if ( v36 )
  {
    CSuperWetInkManager::~CSuperWetInkManager(*((CSuperWetInkManager **)this + 32));
    operator delete(v36);
  }
  v37 = (void *)*((_QWORD *)this + 26);
  if ( v37 )
  {
    CPreComputeContext::~CPreComputeContext(*((void ***)this + 26));
    operator delete(v37);
  }
  v38 = (void **)((char *)this + 56);
  v39 = (__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3;
  if ( v39 )
    detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 7,
      0LL,
      v39);
  v40 = *v38;
  v41 = *((_QWORD *)this + 7) == (_QWORD)this + 80;
  *v38 = 0LL;
  if ( v41 )
    v40 = 0LL;
  operator delete(v40);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
