/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180029B10
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800299F8 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x1800298D4 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x180029E64 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180029F64 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18002A07C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18002A1E8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(CBrushRenderingGraphBuilder *this, struct CBrush *a2)
{
  unsigned int v4; // ecx
  int v5; // ebx
  CRenderingTechniqueFragment *v6; // rsi
  int ShaderBodies; // eax
  char v8; // al
  CRenderingTechniqueFragment *v9; // rdi
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  char v15; // [rsp+80h] [rbp+30h] BYREF
  CRenderingTechniqueFragment *v16; // [rsp+88h] [rbp+38h] BYREF

  v16 = 0LL;
  v13 = 0LL;
  v14 = 1;
  v5 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v13);
  if ( v14 )
  {
    v6 = v16;
    v16 = v13;
    if ( v6 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v6);
      operator delete(v6, 0x80uLL);
    }
  }
  if ( v5 < 0 )
  {
    v11 = v5;
    v12 = 48;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v16, &v15);
    v5 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v12 = 51;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 107LL);
      ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, v8);
      v5 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v12 = 53;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
        v5 = ShaderBodies;
        if ( ShaderBodies >= 0 )
        {
          CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
          goto LABEL_9;
        }
        v12 = 54;
      }
    }
    v11 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v11, v12, 0LL);
LABEL_9:
  v9 = v16;
  if ( v16 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v16);
    operator delete(v9, 0x80uLL);
  }
  return (unsigned int)v5;
}
