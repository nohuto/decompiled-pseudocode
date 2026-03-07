void __fastcall CScaleTransform::GetRealization(
        CScaleTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::SetScale(
    a3,
    *((float *)this + 40),
    *((float *)this + 41),
    1.0,
    *((float *)this + 42),
    *((float *)this + 43),
    0.0);
}
