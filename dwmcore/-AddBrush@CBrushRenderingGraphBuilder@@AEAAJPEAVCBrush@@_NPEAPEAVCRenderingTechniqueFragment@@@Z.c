/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18002A07C
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180029B10 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18003F6F4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800F4760 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18026A848 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18002D764 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18003F6F4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800F4760 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18026A848 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18026A9A4 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddBrush(
        CBrushRenderingGraphBuilder *this,
        struct CBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  unsigned int v8; // ecx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v13; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  struct CRenderingTechniqueFragment *v16; // [rsp+88h] [rbp+38h]

  v16 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 57LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 107LL) )
    {
      v14 = 0LL;
      v15 = 1;
      v9 = CBrushRenderingGraphBuilder::AddMaskBrush(this, a2, a3, &v14);
      if ( v15 )
        v16 = v14;
      if ( v9 >= 0 )
        goto LABEL_5;
      v13 = 166;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 137LL) )
    {
      v14 = 0LL;
      v15 = 1;
      v9 = CBrushRenderingGraphBuilder::AddRadialGradientBrush(this, a2, a3, &v14);
      if ( v15 )
        v16 = v14;
      if ( v9 >= 0 )
        goto LABEL_5;
      v13 = 171;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 113LL) )
    {
      v14 = 0LL;
      v15 = 1;
      v9 = CBrushRenderingGraphBuilder::AddNineGridBrush(this, a2, a3, &v14);
      if ( v15 )
        v16 = v14;
      if ( v9 >= 0 )
        goto LABEL_5;
      v13 = 176;
    }
    else
    {
      v9 = -2147467263;
      v13 = 180;
    }
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, v13, 0LL);
    goto LABEL_7;
  }
  v14 = 0LL;
  v15 = 1;
  v9 = CBrushRenderingGraphBuilder::AddEffectBrush(this, a2, a3, &v14);
  if ( v15 )
    v16 = v14;
  if ( v9 < 0 )
  {
    v13 = 161;
    goto LABEL_28;
  }
LABEL_5:
  v10 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v16);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB8u, 0LL);
  }
  else
  {
    v9 = 0;
    *a4 = v16;
    ++*((_DWORD *)this + 2);
    v16 = 0LL;
  }
LABEL_7:
  if ( v16 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v16);
    operator delete(v16, 0x80uLL);
  }
  return (unsigned int)v9;
}
