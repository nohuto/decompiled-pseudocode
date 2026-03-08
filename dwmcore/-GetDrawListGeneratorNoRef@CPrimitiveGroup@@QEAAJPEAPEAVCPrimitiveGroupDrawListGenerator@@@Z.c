/*
 * XREFs of ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180010014
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18000FEC0 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 * Callees:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800101E4 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::GetDrawListGeneratorNoRef(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx

  v4 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1CCu, 0LL);
  else
    *a2 = (struct CPrimitiveGroupDrawListGenerator *)*((_QWORD *)this + 16);
  return v6;
}
