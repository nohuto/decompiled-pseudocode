__int64 __fastcall CD2DBitmap::GetBitmap(CD2DBitmap *this, struct ID2D1Bitmap1 **a2, char a3)
{
  CD2DBitmap *v4; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct ID2D1Bitmap1 *v9; // rcx
  void (*v10)(void); // rax
  int v12; // eax
  __int64 v13; // rcx
  struct ID2D1Bitmap1 *v14; // rcx

  *a2 = 0LL;
  v4 = (CD2DBitmap *)((char *)this - 80);
  if ( a3 )
  {
    v12 = CD2DBitmap::EnsureIgnoreAlphaBitmap(v4);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x8Fu, 0LL);
      return v8;
    }
    v14 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 8);
    *a2 = v14;
    v10 = *(void (**)(void))(*(_QWORD *)v14 + 8LL);
  }
  else
  {
    v6 = CD2DBitmap::EnsureBitmap(v4);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x88u, 0LL);
      return v8;
    }
    v9 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 7);
    *a2 = v9;
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
  }
  v10();
  return v8;
}
