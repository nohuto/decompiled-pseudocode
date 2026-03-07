__int64 __fastcall CShapeTree::HitTest(
        CShapeTree *this,
        struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF

  v10 = 0LL;
  Bounds = CShapeTree::GetBounds((__int64)this, (float *)a2, (float *)&v10);
  v8 = Bounds;
  if ( Bounds < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bounds, 0x50u, 0LL);
  else
    *a4 = IsPointInRect(a3, (const struct MilRectF *)&v10);
  return v8;
}
