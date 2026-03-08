/*
 * XREFs of ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x1800F95C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800299F8 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::EnsureBrushGraph(CMaskBrush *this, char a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  __int64 v6; // rcx
  char v7; // [rsp+48h] [rbp+10h] BYREF

  if ( a2
    && !(*(unsigned __int8 (__fastcall **)(CMaskBrush *, _QWORD, char *))(*(_QWORD *)this + 288LL))(this, 0LL, &v7) )
  {
    return 0;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 9);
  v5 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 9);
  v3 = v5;
  if ( v5 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x10Fu, 0LL);
  return v3;
}
