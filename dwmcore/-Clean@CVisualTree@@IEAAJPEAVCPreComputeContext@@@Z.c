/*
 * XREFs of ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x1800C4268
 * Callers:
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x18001C1F0 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x18001D2C0 (-ComputeBounds@CRedirectedVisualContent@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021BED0 (-GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 * Callees:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18001D964 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18001F91C (--$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPreComputeContext@@U-$defau.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180074E70 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x1800C4414 (-Initialize@CDirtyRegion@@IEAAX_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800C4598 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTree::Clean(CVisualTree *this, struct CPreComputeContext *a2)
{
  struct CComposition *v2; // rax
  __int64 v4; // rcx
  CPreComputeContext *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 i; // rbx
  __int64 j; // rbx
  CPreComputeContext *v15; // rbx
  void **v16; // rsi
  int v17; // eax
  unsigned int v18; // ebx
  CPreComputeContext **v19; // rax
  CPreComputeContext *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CPreComputeContext *v25; // [rsp+40h] [rbp+8h] BYREF
  char v26; // [rsp+50h] [rbp+18h] BYREF

  v2 = g_pComposition;
  v4 = 0LL;
  v5 = a2;
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 62);
  if ( *((_QWORD *)this + 14) == v4 )
    goto LABEL_6;
  v6 = *((_QWORD *)this + 8);
  if ( !v6 || !*(_BYTE *)(v6 + 96) )
    goto LABEL_6;
  v15 = 0LL;
  v16 = 0LL;
  if ( !a2 )
  {
    v19 = std::make_unique<CPreComputeContext,,0>(&v25);
    if ( &v26 != (char *)v19 )
    {
      v15 = *v19;
      *v19 = 0LL;
    }
    v20 = v25;
    if ( v25 )
    {
      CPreComputeContext::~CPreComputeContext((void **)v25);
      operator delete(v20, 0x7B0uLL);
    }
    v5 = v15;
    v16 = (void **)v15;
  }
  v17 = CPreComputeContext::PreCompute(v5, this);
  v18 = v17;
  if ( v17 >= 0 )
  {
    if ( v16 )
    {
      CPreComputeContext::~CPreComputeContext(v16);
      operator delete(v16, 0x7B0uLL);
    }
    v2 = g_pComposition;
LABEL_6:
    v7 = 0LL;
    if ( v2 )
      v7 = *((_QWORD *)v2 + 62);
    if ( *((_QWORD *)this + 14) != v7 )
    {
      (*(void (__fastcall **)(CVisualTree *, struct CPreComputeContext *, CPreComputeContext *))(*(_QWORD *)this + 232LL))(
        this,
        a2,
        v5);
      CDirtyRegion::Initialize((CVisualTree *)((char *)this + 104), *((_BYTE *)this + 4714) == 0);
      v8 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 216LL))(this);
      v10 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64, CVisualTree *))(*(_QWORD *)v8 + 24LL))(v8, this);
      v11 = (*(__int64 (__fastcall **)(CVisualTree *, __int64, __int64))(*(_QWORD *)this + 216LL))(this, v9, v10);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
      for ( i = (__int64)(*((_QWORD *)this + 568) - *((_QWORD *)this + 567)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
      {
        v21 = *(_QWORD *)(*((_QWORD *)this + 567) + 8LL * (unsigned int)(i - 1));
        (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v21 + 24LL))(v21, this, (char *)this + 104);
      }
      CDirtyRegion::Optimize((CVisualTree *)((char *)this + 104));
      for ( j = (__int64)(*((_QWORD *)this + 568) - *((_QWORD *)this + 567)) >> 3; (int)j > 0; LODWORD(j) = j - 1 )
      {
        v22 = *(_QWORD *)(*((_QWORD *)this + 567) + 8LL * (unsigned int)(j - 1));
        (*(void (__fastcall **)(__int64, CVisualTree *, char *))(*(_QWORD *)v22 + 16LL))(v22, this, (char *)this + 104);
      }
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17D,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
    (const char *)(unsigned int)v17,
    v23);
  if ( v16 )
  {
    CPreComputeContext::~CPreComputeContext(v16);
    operator delete(v16, 0x7B0uLL);
  }
  return v18;
}
