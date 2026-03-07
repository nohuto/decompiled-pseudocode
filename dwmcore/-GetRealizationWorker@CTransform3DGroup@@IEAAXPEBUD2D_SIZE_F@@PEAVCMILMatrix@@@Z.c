void __fastcall CTransform3DGroup::GetRealizationWorker(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v6; // eax
  CTransform3D **v7; // rsi
  CTransform3D **i; // rdi
  const struct CMILMatrix *Matrix; // rax

  CMILMatrix::SetToIdentity(a3);
  v6 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) == 2 )
  {
    v7 = (CTransform3D **)*((_QWORD *)this + 21);
    for ( i = (CTransform3D **)*((_QWORD *)this + 20); i != v7; ++i )
    {
      Matrix = CTransform3D::GetMatrix(*i, a2);
      CMILMatrix::Multiply(a3, Matrix);
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
}
