/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x18001D964
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18003B404 (--1CVisualTree@@UEAA@XZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x1800C4268 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18001DA20 (-clear@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreCo.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18003C658 (--1CLightStack@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@QEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x1801B073C (--$_Destroy_range@V-$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVis.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(void **this)
{
  CDepthSortedVisualCollection *v2; // rcx
  void *v3; // rcx
  bool v4; // zf

  operator delete(this[241]);
  v2 = (CDepthSortedVisualCollection *)this[232];
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(v2);
    std::_Deallocate<16,0>(this[232], 8 * (((_BYTE *)this[234] - (_BYTE *)this[232]) >> 3));
    this[232] = 0LL;
    this[233] = 0LL;
    this[234] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 228);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 224);
  operator delete(this[222]);
  CLightStack::~CLightStack((CLightStack *)(this + 190));
  operator delete(this[188]);
  operator delete(this[184]);
  operator delete(this[180]);
  operator delete(this[176]);
  detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(this);
  v3 = *this;
  v4 = *this == this + 3;
  *this = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
}
