__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  CRectanglesShape *v8; // rax
  __int64 v9; // rcx
  struct CShape *v10; // rdi
  int ShapeData; // eax
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  struct CShape *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-38h]
  struct CShape *v18; // [rsp+60h] [rbp+8h] BYREF
  CRectanglesShape *v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  v18 = 0LL;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) != 2 )
  {
    v8 = (CRectanglesShape *)CRectanglesShape::operator new(this);
    if ( !v8 || (v18 = CRectanglesShape::CRectanglesShape(v8), (v10 = v18) == 0LL) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x25u, 0LL);
      goto LABEL_21;
    }
    goto LABEL_17;
  }
  ShapeData = CGeometry::GetShapeData(**((CGeometry ***)this + 22), a2, a3);
  v4 = ShapeData;
  if ( ShapeData < 0 )
  {
    v17 = 47;
  }
  else
  {
    ShapeData = CShape::CopyShape(*(CShape **)a3, 0LL, &v18);
    v4 = ShapeData;
    if ( ShapeData < 0 )
    {
      v17 = 48;
    }
    else
    {
      v13 = 1;
      if ( *((_DWORD *)this + 42) <= 1u )
      {
        v10 = v18;
LABEL_17:
        CShapePtr::Release(a3);
        v18 = 0LL;
        *(_QWORD *)a3 = v10;
        *((_BYTE *)a3 + 8) = 1;
        goto LABEL_21;
      }
      while ( 1 )
      {
        ShapeData = CGeometry::GetShapeData(*(CGeometry **)(*((_QWORD *)this + 22) + 8LL * v13), a2, a3);
        v4 = ShapeData;
        if ( ShapeData < 0 )
          break;
        ShapeData = CShape::Combine((__int64)v18, v14, *(_QWORD *)a3, 0LL, D2D1_COMBINE_MODE_INTERSECT, &v19);
        v4 = ShapeData;
        if ( ShapeData < 0 )
        {
          v17 = 65;
          goto LABEL_20;
        }
        if ( v18 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v18)(v18, 1LL);
        v10 = v19;
        ++v13;
        v18 = v19;
        if ( v13 >= *((_DWORD *)this + 42) )
          goto LABEL_17;
      }
      v17 = 57;
    }
  }
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ShapeData, v17, 0LL);
LABEL_21:
  v15 = v18;
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v15 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v15)(v15, 1LL);
  return v4;
}
