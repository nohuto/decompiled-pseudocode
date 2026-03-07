struct D2DVector3 *__fastcall anonymous_namespace_::TransformAndNormalize(
        struct D2DVector3 *a1,
        __int64 a2,
        const struct D2DMatrix *a3)
{
  const struct D2DVector3 *v4; // rdx
  const struct D2DMatrix *v5; // r8
  const struct D2DVector3 *v6; // rax
  struct D2DVector3 *v7; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_DWORD *)a1 + 2) = *(_DWORD *)(a2 + 8);
  if ( !(unsigned int)D2DMatrixIsIdentity(a3) )
  {
    v6 = D3DXVec3TransformCoord(a1, v4, v5);
    D3DXVec3Normalize(v7, v6);
  }
  return a1;
}
