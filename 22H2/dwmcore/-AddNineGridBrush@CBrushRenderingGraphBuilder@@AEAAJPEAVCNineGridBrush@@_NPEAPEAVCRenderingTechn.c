/*
 * XREFs of ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020D9F8
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18004AF38 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180048E98 (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x180049650 (-FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRender.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18004A230 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18004AF38 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D42F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddNineGridBrush(
        CBrushRenderingGraphBuilder *this,
        struct CNineGridBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // r14
  void *v7; // rsi
  struct CRenderingTechniqueFragment *v9; // rcx
  int v10; // edi
  __int64 *v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  CRenderingTechniqueFragment *v15; // [rsp+30h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v16; // [rsp+38h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]
  unsigned int v19; // [rsp+88h] [rbp+38h] BYREF

  v4 = (struct CBrush *)*((_QWORD *)a2 + 10);
  v16 = &v15;
  LOBYTE(v18) = 1;
  v7 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v10 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v17);
  if ( (_BYTE)v18 )
  {
    v9 = v17;
    v11 = (__int64 *)*v16;
    *v16 = v17;
    if ( v11 )
    {
      v12 = (void *)v11[14];
      if ( v12 )
        operator delete(v12);
      v7 = (void *)v11[4];
      if ( v7 )
      {
        std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v11[4], v11[5]);
        std::_Deallocate<16,0>(v7, (v11[6] - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF0uLL);
        v7 = 0LL;
        v11[4] = 0LL;
        v11[5] = 0LL;
        v11[6] = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v11);
      operator delete(v11);
    }
  }
  if ( v10 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)v4 + 56LL))(v4, 136LL) )
    {
      v16 = (CRenderingTechniqueFragment **)v4;
      v18 = (int)v7;
      v17 = *(struct CRenderingTechniqueFragment **)v15;
      if ( !CBrushRenderingGraphBuilder::FindExistingNamedInput(
              this,
              (const struct CBrushRenderingGraph::GraphInputParameters *)&v16,
              &v19) )
      {
        v10 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147418113, 0x1C5u, v7);
        goto LABEL_15;
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 24LL * v19) = a2;
    }
    *a4 = v15;
    return (unsigned int)v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v10, 0x1B6u, v7);
LABEL_15:
  if ( v15 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v15);
  return (unsigned int)v10;
}
