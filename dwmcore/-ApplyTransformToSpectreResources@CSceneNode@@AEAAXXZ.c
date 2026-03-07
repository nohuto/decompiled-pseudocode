void __fastcall CSceneNode::ApplyTransformToSpectreResources(CSceneNode *this)
{
  __int64 v1; // rax
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int64 v5; // rcx
  _BYTE v6[80]; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v7[4]; // [rsp+70h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 8);
  if ( !v1 || (v3 = *(CTransform3D **)(v1 + 64)) == 0LL || (Matrix = CTransform3D::GetMatrix(v3, 0LL)) == 0LL )
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)v6);
    Matrix = (const struct CMILMatrix *)v6;
  }
  v5 = *((_QWORD *)this + 17);
  v7[0] = *(_OWORD *)Matrix;
  v7[1] = *((_OWORD *)Matrix + 1);
  v7[2] = *((_OWORD *)Matrix + 2);
  v7[3] = *((_OWORD *)Matrix + 3);
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v5 + 64LL))(v5, v7);
}
