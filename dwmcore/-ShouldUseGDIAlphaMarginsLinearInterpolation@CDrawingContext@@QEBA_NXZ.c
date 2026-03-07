bool __fastcall CDrawingContext::ShouldUseGDIAlphaMarginsLinearInterpolation(CDrawingContext *this)
{
  char v2; // al
  char v3; // dl

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  v3 = 0;
  if ( v2 )
    return *((_BYTE *)this + 8050) != 0;
  return v3;
}
