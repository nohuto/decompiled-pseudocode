/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180049ECC
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180049CC0 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180048E98 (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180049D60 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18004A230 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18004A8D8 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18004AF38 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18004B3B8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18004B4E4 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D42F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(CBrushRenderingGraphBuilder *this, struct CBrush *a2)
{
  unsigned int v4; // ecx
  int v5; // ebx
  __int64 *v6; // rdi
  int ShaderBodies; // eax
  char v8; // al
  unsigned int v9; // edx
  void *v11; // rcx
  __int64 v12; // r14
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  char v17; // [rsp+90h] [rbp+40h] BYREF
  CRenderingTechniqueFragment *v18; // [rsp+98h] [rbp+48h] BYREF

  v18 = 0LL;
  v15 = 0LL;
  v16 = 1;
  v5 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v15);
  if ( v16 )
  {
    v4 = (unsigned int)v15;
    v6 = (__int64 *)v18;
    v18 = v15;
    if ( v6 )
    {
      v11 = (void *)v6[14];
      if ( v11 )
        operator delete(v11);
      v12 = v6[4];
      if ( v12 )
      {
        std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v6[4], v6[5]);
        std::_Deallocate<16,0>(v12, (v6[6] - v12) & 0xFFFFFFFFFFFFFFF0uLL);
        v6[4] = 0LL;
        v6[5] = 0LL;
        v6[6] = 0LL;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v6);
      operator delete(v6);
    }
  }
  if ( v5 < 0 )
  {
    v13 = v5;
    v14 = 48;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v18, &v17);
    v5 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v14 = 51;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 105LL);
      ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, v8);
      v5 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v14 = 53;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
        v5 = ShaderBodies;
        if ( ShaderBodies >= 0 )
        {
          CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
          goto LABEL_8;
        }
        v14 = 54;
      }
    }
    v13 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v13, v14, 0LL);
LABEL_8:
  if ( v18 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v18, v9);
  return (unsigned int)v5;
}
