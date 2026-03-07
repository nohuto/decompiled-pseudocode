__int64 __fastcall COcclusionContext::PushTransform(COcclusionContext *this, struct CTransform *a2)
{
  unsigned int v2; // ebx
  const struct CMILMatrix *Matrix; // rax
  COcclusionContext *v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  bool v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 0;
  if ( *((_DWORD *)this + 358) || !a2 )
    goto LABEL_8;
  Matrix = CTransform3D::GetMatrix(a2, 0LL);
  v7 = COcclusionContext::CheckTransformAllowsOcclusion(v6, Matrix, &v12);
  v2 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x42Au, 0LL);
    return v2;
  }
  if ( v12 )
  {
    v9 = COcclusionContext::PushTransformInternal(this, a2);
    v2 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x42Eu, 0LL);
  }
  else
  {
LABEL_8:
    ++*((_DWORD *)this + 358);
  }
  return v2;
}
