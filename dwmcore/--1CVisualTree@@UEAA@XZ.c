/*
 * XREFs of ??1CVisualTree@@UEAA@XZ @ 0x18003B404
 * Callers:
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x18003D800 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18020C844 (--1CDesktopTree@@UEAA@XZ.c)
 *     ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x180255900 (--_GCSubVisualTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18001D964 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180030684 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expa.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18003BFFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800DC08C (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800DC2F0 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E1BE0 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

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
