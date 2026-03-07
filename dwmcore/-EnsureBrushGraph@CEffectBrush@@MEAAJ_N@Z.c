__int64 __fastcall CEffectBrush::EnsureBrushGraph(CEffectBrush *this, char a2)
{
  char IsOpaque; // al
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rcx
  char v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2
    || (IsOpaque = (*(__int64 (__fastcall **)(CEffectBrush *, _QWORD, char *))(*(_QWORD *)this + 288LL))(this, 0LL, &v8)) != 0 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 9);
    v6 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 9);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2Du, 0LL);
      return v4;
    }
    IsOpaque = CEffectBrush::CalculateIsOpaque(this);
  }
  *((_BYTE *)this + 168) = IsOpaque;
  return 0;
}
