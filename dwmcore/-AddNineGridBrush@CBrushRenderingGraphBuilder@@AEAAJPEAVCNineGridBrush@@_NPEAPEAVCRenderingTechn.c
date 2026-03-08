/*
 * XREFs of ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18026A848
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18002A07C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18002A07C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x18003FDB0 (-FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRender.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddNineGridBrush(
        CBrushRenderingGraphBuilder *this,
        struct CNineGridBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // rsi
  __int64 v8; // rcx
  int v9; // edi
  CRenderingTechniqueFragment *v10; // rbx
  __int64 v11; // rcx
  struct CRenderingTechniqueFragment *v12; // rax
  CRenderingTechniqueFragment *v13; // rbx
  struct CRenderingTechniqueFragment **v15; // [rsp+30h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v16; // [rsp+38h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]
  unsigned int v19; // [rsp+88h] [rbp+38h] BYREF

  v4 = (struct CBrush *)*((_QWORD *)a2 + 11);
  v15 = 0LL;
  v17 = 0LL;
  v16 = (CRenderingTechniqueFragment **)&v15;
  LOBYTE(v18) = 1;
  v9 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v17);
  if ( (_BYTE)v18 )
  {
    v10 = *v16;
    *v16 = v17;
    if ( v10 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v10);
      operator delete(v10);
    }
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0x1C7u, 0LL);
    goto LABEL_11;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)v4 + 56LL))(v4, 137LL) )
  {
LABEL_9:
    v12 = (struct CRenderingTechniqueFragment *)v15;
    v13 = 0LL;
    v15 = 0LL;
    *a4 = v12;
    goto LABEL_12;
  }
  v18 = 0;
  v16 = (CRenderingTechniqueFragment **)v4;
  v17 = *v15;
  if ( CBrushRenderingGraphBuilder::FindExistingNamedInput(
         this,
         (const struct CBrushRenderingGraph::GraphInputParameters *)&v16,
         &v19) )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 24LL * v19) = a2;
    goto LABEL_9;
  }
  v9 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147418113, 0x1D6u, 0LL);
LABEL_11:
  v13 = (CRenderingTechniqueFragment *)v15;
LABEL_12:
  if ( v13 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v13);
    operator delete(v13);
  }
  return (unsigned int)v9;
}
