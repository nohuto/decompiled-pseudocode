__int64 __fastcall CPrimitiveGroup::EnsureDrawListGenerator(CPrimitiveGroup *this)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  struct CPrimitiveGroupDrawListGenerator **v4; // rdx
  int NewGenerator; // eax
  unsigned int v6; // ecx
  __int64 TopByReference; // rax
  struct _D3DCOLORVALUE *v9; // rcx
  const struct _D3DCOLORVALUE *v10; // rdx
  int NewGeneratorForHeatMap; // eax
  unsigned int v12; // ecx

  v2 = 0;
  if ( CComposition::IsOverdrawHeatMapEnabled(*((CComposition **)this + 2)) )
  {
    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v3 + 1112);
    v9 = (struct _D3DCOLORVALUE *)((char *)this + 624);
    v10 = (const struct _D3DCOLORVALUE *)(TopByReference + 4);
    if ( !*((_BYTE *)this + 545) || !IsCloseColorF(v9, v10) )
    {
      *((_BYTE *)this + 545) = 1;
      *(struct _D3DCOLORVALUE *)&v9->r = *(const struct _D3DCOLORVALUE *)&v10->r;
      CPrimitiveGroup::BuildHeatMap(this);
    }
  }
  else if ( *((_BYTE *)this + 545) )
  {
    *((_BYTE *)this + 545) = 0;
    CPrimitiveGroup::ReleaseHeatMap(this);
  }
  v4 = (struct CPrimitiveGroupDrawListGenerator **)((char *)this + 128);
  if ( !*((_QWORD *)this + 16) )
  {
    if ( *((_BYTE *)this + 545) )
    {
      NewGeneratorForHeatMap = CPrimitiveGroup::CreateNewGeneratorForHeatMap(this, v4);
      v2 = NewGeneratorForHeatMap;
      if ( NewGeneratorForHeatMap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, NewGeneratorForHeatMap, 0x204u, 0LL);
    }
    else
    {
      NewGenerator = CPrimitiveGroup::CreateNewGenerator(this, v4);
      v2 = NewGenerator;
      if ( NewGenerator < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, NewGenerator, 0x208u, 0LL);
    }
  }
  return v2;
}
