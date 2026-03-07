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
