__int64 __fastcall CCpuClip::ResolveClip(CCpuClip *this, const struct CShape **a2, struct CMILMatrix *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // xmm1_4
  CMILMatrix *v8; // rax
  int v10; // eax
  __int64 v11; // rcx
  _BYTE v12[72]; // [rsp+30h] [rbp-88h] BYREF
  struct D2D_MATRIX_3X2_F v13; // [rsp+78h] [rbp-40h] BYREF

  v3 = 0;
  if ( !a3 || *((_BYTE *)this + 112) )
  {
    if ( *((_QWORD *)this + 10) || (v10 = CCpuClip::ConvertContextDependentClipToLocal(this), v3 = v10, v10 >= 0) )
    {
      *a2 = (const struct CShape *)*((_QWORD *)this + 10);
      if ( a3 )
        CMILMatrix::SetToIdentity(a3);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x85u, 0LL);
    }
  }
  else
  {
    *a2 = *(const struct CShape **)this;
    v7 = *((_DWORD *)this + 3);
    v13.m11 = *((FLOAT *)this + 2);
    *(_QWORD *)&v13.m[0][1] = __PAIR64__(*((_DWORD *)this + 6), v7);
    *(_QWORD *)&v13.m[1][1] = __PAIR64__(*((_DWORD *)this + 14), *((_DWORD *)this + 7));
    v13.dy = *((FLOAT *)this + 15);
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v13);
    v8 = CMILMatrix::CMILMatrix((CMILMatrix *)v12, &v13);
    *(_OWORD *)a3 = *(_OWORD *)v8;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v8 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)v8 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)v8 + 3);
    *((_DWORD *)a3 + 16) = *((_DWORD *)v8 + 16);
  }
  return v3;
}
