__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, unsigned __int64 a2, CShape **a3)
{
  unsigned __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  int v10; // eax
  __int64 v11; // rcx
  struct CShape *v12; // rbx
  struct CShape *v13; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-88h] BYREF
  struct D2D_MATRIX_3X2_F v15; // [rsp+90h] [rbp-38h] BYREF

  v5 = a2 & -(__int64)(*((_BYTE *)this + 136) != 0);
  v6 = (*(__int64 (__fastcall **)(CGeometry *, unsigned __int64))(*(_QWORD *)this + 216LL))(this, v5);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xFAu, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 232LL))(this) && *a3 )
  {
    (*(void (__fastcall **)(CGeometry *, unsigned __int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)this + 224LL))(
      this,
      v5,
      &v15);
    CMILMatrix::CMILMatrix((CMILMatrix *)v14, &v15);
    v10 = CShape::CopyShape(*a3, (const struct CMILMatrix *)v14, &v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x108u, 0LL);
    }
    else
    {
      v12 = v13;
      CShapePtr::Release((CShapePtr *)a3);
      *a3 = v12;
      *((_BYTE *)a3 + 8) = 1;
    }
  }
  return v8;
}
