void __fastcall CVisual::~CVisual(CVisual *this)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdi
  _DWORD *v8; // r8
  _DWORD *v9; // r8
  _DWORD *v10; // r8
  __int64 v11; // rdi
  CVisual **v12; // r8
  CVisual **v13; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v15; // rsi
  struct _LIST_ENTRY *n; // rdi
  __int64 v17; // rdi
  struct CInteraction *InteractionInternal; // rax
  _DWORD *v19; // r10
  __int64 v20; // r8
  __int64 v21; // rcx
  _BYTE *v22; // rdx
  unsigned int ii; // eax
  _QWORD **v24; // rdi
  _QWORD *v25; // rdi
  _DWORD *v26; // r8
  __int64 v27; // rcx
  _BYTE *v28; // rdx
  unsigned int i1; // eax
  void (__fastcall ****v30)(_QWORD, __int64); // rcx
  void (__fastcall ***v31)(_QWORD, __int64); // rcx
  _DWORD *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  void *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  _BYTE *v38; // rdx
  unsigned int i2; // eax
  void (__fastcall ****v40)(_QWORD, __int64); // rcx
  void (__fastcall ***v41)(_QWORD, __int64); // rcx
  __int64 v42; // rcx
  _BYTE *v43; // rdx
  unsigned int i; // eax
  __int64 *v45; // rcx
  __int64 v46; // rcx
  CVisual **v47; // rdx
  __int64 v48; // rcx
  _BYTE *v49; // rdx
  unsigned int m; // eax
  __int64 *v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rcx
  _BYTE *v54; // rdx
  unsigned int k; // eax
  struct CResource ***v56; // rdi
  struct CResource **v57; // rdi
  _DWORD *v58; // r10
  __int64 v59; // rcx
  unsigned int Slot; // eax
  __int64 v61; // r10
  __int64 v62; // rcx
  struct CResource *WindowBackgroundTreatmentInternal; // rax
  _DWORD *v64; // r10
  __int64 v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // r10
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  _DWORD *v69; // r10
  __int64 v70; // rcx
  unsigned int v71; // eax
  __int64 v72; // r10
  CProjectedShadowCaster ***ProjectedShadowCasters; // rdi
  CProjectedShadowCaster **v74; // r15
  CProjectedShadowCaster **jj; // rsi
  _DWORD *v76; // r10
  __int64 v77; // rcx
  unsigned int v78; // eax
  __int64 v79; // r10
  CProjectedShadowReceiver ***ProjectedShadowReceivers; // rdi
  CProjectedShadowReceiver **v81; // r15
  CProjectedShadowReceiver **mm; // rsi
  _DWORD *v83; // r10
  __int64 v84; // rcx
  unsigned int v85; // eax
  __int64 v86; // r10
  __int64 v87; // rcx
  _BYTE *v88; // rdx
  unsigned int j; // eax
  __int64 *v90; // rdi
  __int64 v91; // rdi
  struct CResource *BlurredWallpaperSurface; // rax
  _DWORD *v93; // r10
  __int64 v94; // rcx
  unsigned int v95; // eax
  __int64 v96; // r10
  unsigned __int64 CurrentFrameId; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  unsigned int v100; // eax
  __int64 v101; // r10
  CProjectedShadowCaster *v102; // rbp
  _QWORD *v103; // rcx
  CProjectedShadowScene **v104; // r12
  CProjectedShadowScene **kk; // r14
  CProjectedShadowReceiver *v106; // rbp
  CProjectedShadowScene **v107; // r12
  CProjectedShadowScene **nn; // r14
  __int64 **ReceiverEntry; // rax
  CVisual *DepthSortedList; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CVisual::`vftable';
  v2 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v2 & 0x4000000) != 0 )
  {
    v42 = (unsigned int)v2[1];
    v43 = v2 + 2;
    for ( i = 0; i < (unsigned int)v42; ++v43 )
    {
      if ( *v43 == 6 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v42 )
      v45 = 0LL;
    else
      v45 = (__int64 *)((char *)v2 + v42 + 8LL * i - (((_BYTE)v42 + 15) & 7) + 15);
    v46 = *v45;
    if ( v46 )
    {
      *(_QWORD *)(v46 + 64) = 0LL;
      CComposition::RemoveVisualTree(*(CComposition **)(v46 + 16), (const struct CVisualTree *)v46);
    }
  }
  CVisual::ReleaseBspPolygonList(this);
  CVisual::RemoveDirtyRegionVisualizationData(this, v3, v4);
  CVisual::RemoveAllChildren((CComposition **)this);
  CVisual::RemoveAllLights(this);
  v5 = *((_QWORD *)this + 32);
  if ( v5 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 182LL) )
    CSuperWetInkManager::UnregisterSuperWetInkVisual(*((CSuperWetInkManager **)g_pComposition + 32), this);
  v6 = *((_QWORD *)this + 32);
  if ( v6 && CPtrArrayBase::Remove((CPtrArrayBase *)(v6 + 24), (unsigned __int64)this) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 32) = 0LL;
  v7 = *((_QWORD *)this + 30);
  if ( v7 && CPtrArrayBase::Remove((CPtrArrayBase *)(v7 + 24), (unsigned __int64)this) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 30) = 0LL;
  v8 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v8 & 0x2000000) != 0 )
  {
    v87 = (unsigned int)v8[1];
    v88 = v8 + 2;
    for ( j = 0; j < (unsigned int)v87; ++v88 )
    {
      if ( *v88 == 7 )
        break;
      ++j;
    }
    if ( j >= (unsigned int)v87 )
      v90 = 0LL;
    else
      v90 = (__int64 *)((char *)v8 + 8LL * j - (((_BYTE)v87 + 15) & 7) + v87 + 15);
    v91 = *v90;
    if ( v91 && CPtrArrayBase::Remove((CPtrArrayBase *)(v91 + 24), (unsigned __int64)this) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 16LL))(v91);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v9 & 0x1000000) != 0 )
  {
    v53 = (unsigned int)v9[1];
    v54 = v9 + 2;
    for ( k = 0; k < (unsigned int)v53; ++v54 )
    {
      if ( *v54 == 8 )
        break;
      ++k;
    }
    if ( k >= (unsigned int)v53 )
      v56 = 0LL;
    else
      v56 = (struct CResource ***)((char *)v9 + 8LL * k - (((_BYTE)v53 + 15) & 7) + v53 + 15);
    v57 = *v56;
    DepthSortedList = (CVisual *)v57;
    if ( v57 )
    {
      CResource::UnRegisterNotifierInternal(this, *v57);
      *v57 = 0LL;
      SAFE_DELETE<TransformParentData>(&DepthSortedList);
      v58 = (_DWORD *)*((_QWORD *)this + 29);
      if ( (*v58 & 0x1000000) != 0 )
      {
        v59 = *((_QWORD *)this + 29);
        *v58 &= ~0x1000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v59, 8LL);
        if ( Slot < *(_DWORD *)(v61 + 4) )
          *(_BYTE *)(Slot + v61 + 8) = 0;
      }
      v62 = *((_QWORD *)this + 2) + 1016LL;
      DepthSortedList = this;
      DynArray<CVisual *,0>::Remove(v62, &DepthSortedList);
    }
  }
  v10 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v10 & 0x400000) != 0 )
  {
    v48 = (unsigned int)v10[1];
    v49 = v10 + 2;
    for ( m = 0; m < (unsigned int)v48; ++v49 )
    {
      if ( *v49 == 10 )
        break;
      ++m;
    }
    if ( m >= (unsigned int)v48 )
      v51 = 0LL;
    else
      v51 = (__int64 *)((char *)v10 + 8LL * m - (((_BYTE)v48 + 15) & 7) + v48 + 15);
    v52 = *v51;
    if ( v52 && CPtrArrayBase::Remove((CPtrArrayBase *)(v52 + 24), (unsigned __int64)this) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(CVisual ***)(v11 + 1088);
  v13 = *(CVisual ***)(v11 + 1080);
  if ( v13 != v12 )
  {
    while ( 1 )
    {
      v47 = v13 + 1;
      if ( *v13 == this )
        break;
      ++v13;
      if ( v47 == v12 )
        goto LABEL_9;
    }
    memmove_0(v13, v47, (char *)v12 - (char *)v47);
    *(_QWORD *)(v11 + 1088) -= 8LL;
  }
LABEL_9:
  if ( (**((_DWORD **)this + 29) & 0x200000) != 0 )
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(this);
    CResource::UnRegisterNotifierInternal(this, WindowBackgroundTreatmentInternal);
    v64 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v64 & 0x200000) != 0 )
    {
      v65 = *((_QWORD *)this + 29);
      *v64 &= ~0x200000u;
      v66 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v65, 11LL);
      if ( v66 < *(_DWORD *)(v67 + 4) )
        *(_BYTE *)(v66 + v67 + 8) = 0;
    }
  }
  if ( (**((_DWORD **)this + 29) & 0x100000) != 0 )
  {
    CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(this);
    if ( CachedWindowBackgroundTreatment )
      (*(void (__fastcall **)(struct CCachedWindowBackgroundTreatment *))(*(_QWORD *)CachedWindowBackgroundTreatment
                                                                        + 8LL))(CachedWindowBackgroundTreatment);
    v69 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v69 & 0x100000) != 0 )
    {
      v70 = *((_QWORD *)this + 29);
      *v69 &= ~0x100000u;
      v71 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v70, 12LL);
      if ( v71 < *(_DWORD *)(v72 + 4) )
        *(_BYTE *)(v71 + v72 + 8) = 0;
    }
  }
  if ( (**((_DWORD **)this + 29) & 0x8000) != 0 )
  {
    BlurredWallpaperSurface = CVisual::GetBlurredWallpaperSurface(this);
    CResource::UnRegisterNotifierInternal(this, BlurredWallpaperSurface);
    v93 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v93 & 0x8000) != 0 )
    {
      v94 = *((_QWORD *)this + 29);
      *v93 &= ~0x8000u;
      v95 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v94, 17LL);
      if ( v95 < *(_DWORD *)(v96 + 4) )
        *(_BYTE *)(v95 + v96 + 8) = 0;
    }
    *((_QWORD *)g_pComposition + 38) = 0LL;
    CurrentFrameId = GetCurrentFrameId();
    *(_QWORD *)(v98 + 312) = CurrentFrameId;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  v15 = TreeDataListHead;
  if ( TreeDataListHead )
  {
    for ( n = TreeDataListHead->Flink; n != v15; n = n->Flink )
    {
      if ( ((char *)n[-12].Blink - (char *)n[-12].Flink) >> 3 )
        detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
          &n[-12],
          0LL);
    }
  }
  if ( (__int64)(*((_QWORD *)this + 64) - *((_QWORD *)this + 63)) >> 3 )
    detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 504,
      0LL);
  v17 = *((_QWORD *)this + 31);
  if ( v17 && CPtrArrayBase::Remove((CPtrArrayBase *)(v17 + 24), (unsigned __int64)this) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  *((_QWORD *)this + 31) = 0LL;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)InteractionInternal + 16LL))(InteractionInternal);
  v19 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v19 & 0x800000) != 0 )
  {
    v99 = *((_QWORD *)this + 29);
    *v19 &= ~0x800000u;
    v100 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v99, 9LL);
    if ( v100 < *(_DWORD *)(v101 + 4) )
      *(_BYTE *)(v100 + v101 + 8) = 0;
  }
  v20 = *((_QWORD *)this + 29);
  if ( *(int *)v20 < 0 )
  {
    v21 = *(unsigned int *)(v20 + 4);
    v22 = (_BYTE *)(v20 + 8);
    for ( ii = 0; ii < (unsigned int)v21; ++v22 )
    {
      if ( *v22 == 1 )
        break;
      ++ii;
    }
    if ( ii >= (unsigned int)v21 )
      v24 = 0LL;
    else
      v24 = (_QWORD **)(v21 + 15 + v20 + 8LL * ii - (((_BYTE)v21 + 15) & 7));
    v25 = *v24;
    if ( v25 )
    {
      while ( (_QWORD *)*v25 != v25 )
        CVisual::ReleaseVisualTreeData(*(CVisual **)(*v25 - 96LL), (struct CVisualTreeData *)(*v25 - 360LL));
      operator delete(v25, 0x10uLL);
    }
  }
  DepthSortedList = (CVisual *)CVisual::GetDepthSortedList((__int64)this);
  if ( DepthSortedList )
  {
    CVisual::SetDepthSortedList(this, 0LL);
    SAFE_DELETE<std::vector<CVisual *>>(&DepthSortedList);
  }
  if ( (**((_DWORD **)this + 29) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = (CProjectedShadowCaster ***)CVisual::GetProjectedShadowCasters((__int64)this);
    v74 = ProjectedShadowCasters[1];
    for ( jj = *ProjectedShadowCasters; jj != v74; ++jj )
    {
      v102 = *jj;
      v103 = (_QWORD *)((char *)*jj + 80);
      *((_QWORD *)*jj + 8) = 0LL;
      std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(v103);
      CProjectedShadowCaster::InvalidateMaskContent(v102);
      v104 = (CProjectedShadowScene **)*((_QWORD *)v102 + 13);
      for ( kk = (CProjectedShadowScene **)*((_QWORD *)v102 + 12); kk != v104; ++kk )
        CProjectedShadowScene::DiscardCachesForCaster(*kk, v102);
    }
    v76 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v76 & 0x40000) != 0 )
    {
      v77 = *((_QWORD *)this + 29);
      *v76 &= ~0x40000u;
      v78 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v77, 14LL);
      if ( v78 < *(_DWORD *)(v79 + 4) )
        *(_BYTE *)(v78 + v79 + 8) = 0;
    }
    if ( *ProjectedShadowCasters )
    {
      std::_Deallocate<16,0>(
        *ProjectedShadowCasters,
        ((char *)ProjectedShadowCasters[2] - (char *)*ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL);
      *ProjectedShadowCasters = 0LL;
      ProjectedShadowCasters[1] = 0LL;
      ProjectedShadowCasters[2] = 0LL;
    }
    operator delete(ProjectedShadowCasters, 0x18uLL);
  }
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = (CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers((__int64)this);
    v81 = ProjectedShadowReceivers[1];
    for ( mm = *ProjectedShadowReceivers; mm != v81; ++mm )
    {
      v106 = *mm;
      *((_QWORD *)v106 + 8) = 0LL;
      CProjectedShadowReceiver::InvalidateMaskContent(v106);
      v107 = (CProjectedShadowScene **)*((_QWORD *)v106 + 10);
      for ( nn = (CProjectedShadowScene **)*((_QWORD *)v106 + 9); nn != v107; ++nn )
      {
        ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(*nn, v106);
        ReceiverEntry[3] = 0LL;
        std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(ReceiverEntry + 1);
      }
    }
    v83 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v83 & 0x20000) != 0 )
    {
      v84 = *((_QWORD *)this + 29);
      *v83 &= ~0x20000u;
      v85 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v84, 15LL);
      if ( v85 < *(_DWORD *)(v86 + 4) )
        *(_BYTE *)(v85 + v86 + 8) = 0;
    }
    if ( *ProjectedShadowReceivers )
    {
      std::_Deallocate<16,0>(
        *ProjectedShadowReceivers,
        ((char *)ProjectedShadowReceivers[2] - (char *)*ProjectedShadowReceivers) & 0xFFFFFFFFFFFFFFF8uLL);
      *ProjectedShadowReceivers = 0LL;
      ProjectedShadowReceivers[1] = 0LL;
      ProjectedShadowReceivers[2] = 0LL;
    }
    operator delete(ProjectedShadowReceivers, 0x18uLL);
  }
  v26 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v26 & 0x8000000) != 0 )
  {
    v27 = (unsigned int)v26[1];
    v28 = v26 + 2;
    for ( i1 = 0; i1 < (unsigned int)v27; ++v28 )
    {
      if ( *v28 == 5 )
        break;
      ++i1;
    }
    if ( i1 >= (unsigned int)v27 )
      v30 = 0LL;
    else
      v30 = (void (__fastcall ****)(_QWORD, __int64))((char *)v26 + v27 + 8LL * i1 - (((_BYTE)v27 + 15) & 7) + 15);
    v31 = *v30;
    if ( v31 )
      (**v31)(v31, 1LL);
  }
  v32 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v32 & 0x40000000) != 0 )
  {
    v37 = (unsigned int)v32[1];
    v38 = v32 + 2;
    for ( i2 = 0; i2 < (unsigned int)v37; ++v38 )
    {
      if ( *v38 == 2 )
        break;
      ++i2;
    }
    if ( i2 >= (unsigned int)v37 )
      v40 = 0LL;
    else
      v40 = (void (__fastcall ****)(_QWORD, __int64))((char *)v32 + 8LL * i2 - (((_BYTE)v37 + 15) & 7) + v37 + 15);
    v41 = *v40;
    if ( v41 )
      (**v41)(v41, 1LL);
  }
  if ( (*((_BYTE *)this + 101) & 2) != 0 )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 1224LL);
  if ( (*((_BYTE *)this + 101) & 0x10) != 0 )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 1232LL);
  *((_BYTE *)this + 346) = 0;
  *((_QWORD *)this + 42) = &CDesktopTreeData::`vftable';
  CTreeData::~CTreeData((CVisual *)((char *)this + 336));
  v33 = *((_QWORD *)this + 38);
  if ( v33 )
  {
    std::_Deallocate<16,0>(v33, (*((_QWORD *)this + 40) - v33) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
  }
  v34 = *((_QWORD *)this + 35);
  if ( v34 )
  {
    std::_Deallocate<16,0>(v34, (*((_QWORD *)this + 37) - v34) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
  }
  v35 = (void *)*((_QWORD *)this + 29);
  if ( v35 != &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage )
    operator delete(v35);
  CSparseStorage::~CSparseStorage((void **)this + 28);
  v36 = *((_QWORD *)this + 10);
  if ( (v36 & 2) != 0 )
    operator delete((void *)(v36 & 0xFFFFFFFFFFFFFFFCuLL));
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
