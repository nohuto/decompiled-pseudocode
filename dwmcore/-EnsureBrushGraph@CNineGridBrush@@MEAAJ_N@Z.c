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
