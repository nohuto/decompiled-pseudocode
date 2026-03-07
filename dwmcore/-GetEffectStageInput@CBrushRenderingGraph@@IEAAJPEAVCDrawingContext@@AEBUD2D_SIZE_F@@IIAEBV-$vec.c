__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        CBrushRenderingGraph *a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7,
        struct EffectInput *a8)
{
  __int64 v10; // rbx
  unsigned int v12; // edi
  __int64 v14; // r10
  int InputBrushParameters; // eax
  unsigned int v18; // ecx

  v10 = 44LL * a5;
  v12 = 0;
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * a4);
  if ( !*(_BYTE *)(v14 + v10 + 88) )
    a7 = a6;
  EffectInput::operator=(a8, *a7 + 104LL * *(unsigned int *)(v14 + v10 + 84));
  if ( !*((_BYTE *)a8 + 44) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(a1, a2, a3, a4, a5, a8);
    v12 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, InputBrushParameters, 0x4A3u, 0LL);
  }
  return v12;
}
