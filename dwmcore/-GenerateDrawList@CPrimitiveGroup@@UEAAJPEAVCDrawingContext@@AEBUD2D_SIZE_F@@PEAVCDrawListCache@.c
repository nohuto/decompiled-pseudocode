__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ebx
  unsigned int v8; // ecx
  int DrawList; // eax
  unsigned int v10; // ecx

  if ( !*((_QWORD *)this + 59) )
    return 0;
  v7 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  if ( v7 < 0 )
  {
    CPrimitiveGroup::ClearPrimitiveContent(this);
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x84u, 0LL);
    return (unsigned int)v7;
  }
  DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
               *((CPrimitiveGroupDrawListGenerator **)this + 16),
               a2,
               a4);
  v7 = DrawList;
  if ( DrawList < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DrawList, 0x87u, 0LL);
  else
    return 0;
  return (unsigned int)v7;
}
