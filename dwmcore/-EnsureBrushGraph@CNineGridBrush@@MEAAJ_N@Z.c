/*
 * XREFs of ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x180018E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800299F8 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::EnsureBrushGraph(struct CBrush **this, char a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  char v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (!a2 || (*((unsigned __int8 (__fastcall **)(struct CBrush **, _QWORD, char *))*this + 36))(this, 0LL, &v7))
    && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 9),
        v3 = CBrushRenderingGraphBuilder::Build(this[11], this + 9),
        v5 = v3,
        v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1C0u, 0LL);
  }
  else
  {
    return 0;
  }
  return v5;
}
