void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  FLOAT height; // xmm1_4
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h]

  v6 = 0LL;
  if ( a2 )
  {
    height = a2->height;
    *(FLOAT *)&v6 = a2->width;
    *((FLOAT *)&v6 + 1) = height;
  }
  v8 = 0LL;
  v5 = *(_QWORD *)this;
  v7 = 0LL;
  (*(void (__fastcall **)(CComponentTransform2D *, __int64 *, __int128 *))(v5 + 208))(this, &v6, &v7);
  CMILMatrix::Set2DAffineMatrix(
    a3,
    *(float *)&v7,
    *((float *)&v7 + 1),
    *((float *)&v7 + 2),
    *((float *)&v7 + 3),
    *(float *)&v8,
    *((float *)&v8 + 1));
}
