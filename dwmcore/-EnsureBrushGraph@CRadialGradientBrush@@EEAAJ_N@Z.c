__int64 __fastcall CRadialGradientBrush::EnsureBrushGraph(CRadialGradientBrush *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  if ( !a2 || *((_QWORD *)this + 21) != *((_QWORD *)this + 22) )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 9);
    v4 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 9);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x15Cu, 0LL);
  }
  return v2;
}
