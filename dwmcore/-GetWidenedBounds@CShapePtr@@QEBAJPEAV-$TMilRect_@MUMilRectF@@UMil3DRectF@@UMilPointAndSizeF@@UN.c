__int64 __fastcall CShapePtr::GetWidenedBounds(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int WidenedBounds; // eax
  __int64 v7; // rcx

  v4 = *a1;
  v5 = -2003292412;
  if ( v4 )
  {
    WidenedBounds = CShape::GetWidenedBounds(v4, a2, a3, a4);
    v5 = WidenedBounds;
    if ( WidenedBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, WidenedBounds, 0x150u, 0LL);
  }
  return v5;
}
