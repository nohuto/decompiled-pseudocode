__int64 __fastcall CCombinedGeometry::GetShapeDataCore(
        CCombinedGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  int v3; // eax
  unsigned int v4; // edi
  CGeometry *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  CGeometry *v11; // rcx
  int ShapeData; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  void (__fastcall ***v16)(_QWORD, __int64); // rbx
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  char v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  char v21; // [rsp+48h] [rbp-8h]
  void (__fastcall ***v22)(_QWORD, __int64); // [rsp+70h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  v20 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v21 = 0;
  v19 = 0;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    v8 = (CGeometry *)*((_QWORD *)this + 22);
    if ( v8 && (v9 = CGeometry::GetShapeData(v8, a2, (struct CShapePtr *)&v20), v4 = v9, v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3Fu, 0LL);
    }
    else
    {
      v11 = (CGeometry *)*((_QWORD *)this + 23);
      if ( v11
        && (ShapeData = CGeometry::GetShapeData(v11, a2, (struct CShapePtr *)&v18), v4 = ShapeData, ShapeData < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, ShapeData, 0x44u, 0LL);
      }
      else
      {
        v14 = CShape::Combine(v20, a2, v18, 0LL, *((_DWORD *)this + 42), &v22);
        v4 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x50u, 0LL);
        }
        else
        {
          v16 = v22;
          CShapePtr::Release(a3);
          v22 = 0LL;
          *(_QWORD *)a3 = v16;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
    }
  }
  else
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = 0LL;
    *((_BYTE *)a3 + 8) = 1;
  }
  if ( v22 )
    (**v22)(v22, 1LL);
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  CShapePtr::Release((CShapePtr *)&v18);
  CShapePtr::Release((CShapePtr *)&v20);
  return v4;
}
