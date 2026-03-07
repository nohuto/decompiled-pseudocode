__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::SetBufferProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const struct D2D_MATRIX_3X2_F *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx

  if ( a3 == 6 && a5 == 24 )
  {
    v6 = 0;
    DirectComposition::CMatrixTransformMarshaler::SetMatrixHelper(this, a2, a4, a6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
