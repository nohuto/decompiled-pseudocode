void __fastcall CNineGridBrush::SetTransform(CNineGridBrush *this, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  *(struct D2D_MATRIX_3X2_F *)((char *)this + 128) = *a2;
  (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(v2 + 72))(this, 6LL, this);
}
