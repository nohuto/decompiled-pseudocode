void __fastcall CVisualTree::~CVisualTree(CVisualTree *this)
{
  __int64 v1; // r10
  _QWORD *i; // rdi
  void **v4; // rdi
  __int64 v5; // r8
  void *v6; // rcx
  bool v7; // zf
  void *v8; // rdi
  _DWORD *v9; // r10
  unsigned int Slot; // eax
  __int64 v11; // r10

  v1 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CVisualTree::`vftable';
  if ( v1 )
  {
    v9 = *(_DWORD **)(v1 + 232);
    if ( (*v9 & 0x4000000) != 0 )
    {
      *v9 &= ~0x4000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v9, 6LL);
      if ( Slot < *(_DWORD *)(v11 + 4) )
        *(_BYTE *)(Slot + v11 + 8) = 0;
    }
  }
  for ( i = (_QWORD *)((char *)this + 4680);
        (_QWORD *)*i != i;
        CVisual::ReleaseVisualTreeData(*(CVisual **)(*i - 112LL), (struct CVisualTreeData *)(*i - 376LL)) )
  {
    ;
  }
  FastRegion::CRegion::FreeMemory((CVisualTree *)((char *)this + 4608));
  v4 = (void **)((char *)this + 4536);
  v5 = (__int64)(*((_QWORD *)this + 568) - *((_QWORD *)this + 567)) >> 3;
  if ( v5 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 567,
      0LL,
      v5);
  v6 = *v4;
  v7 = *((_QWORD *)this + 567) == (_QWORD)this + 4560;
  *v4 = 0LL;
  if ( v7 )
    v6 = 0LL;
  operator delete(v6);
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CVisualTree *)((char *)this + 2928));
  COcclusionContext::~COcclusionContext((CVisualTree *)((char *)this + 120));
  v8 = (void *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    CPreComputeContext::~CPreComputeContext(*((void ***)this + 12));
    operator delete(v8, 0x7B0uLL);
  }
  CResource::~CResource(this);
}
