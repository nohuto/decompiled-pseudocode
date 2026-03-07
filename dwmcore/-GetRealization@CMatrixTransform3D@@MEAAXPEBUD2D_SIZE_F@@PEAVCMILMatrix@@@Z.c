void __fastcall CMatrixTransform3D::GetRealization(
        CMatrixTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3

  v3 = *((_OWORD *)this + 11);
  v4 = *((_OWORD *)this + 12);
  v5 = *((_OWORD *)this + 13);
  *(_OWORD *)a3 = *((_OWORD *)this + 10);
  *((_OWORD *)a3 + 1) = v3;
  *((_OWORD *)a3 + 2) = v4;
  *((_OWORD *)a3 + 3) = v5;
  *((_DWORD *)a3 + 16) = 0;
}
