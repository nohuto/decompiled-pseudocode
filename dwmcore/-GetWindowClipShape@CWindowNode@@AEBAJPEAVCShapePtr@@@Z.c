__int64 __fastcall CWindowNode::GetWindowClipShape(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  int v6; // eax
  CGeometry *v7; // rcx
  int ShapeData; // eax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  char v16; // [rsp+38h] [rbp-41h]
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-29h] BYREF
  int *v19; // [rsp+60h] [rbp-19h] BYREF
  int v20; // [rsp+68h] [rbp-11h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 99);
  v3 = 0;
  if ( v2 && *(_BYTE *)(v2 + 168) )
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  else
  {
    v18[1] = 0LL;
    v20 = 0;
    v21 = 0LL;
    v18[0] = &CRegionShape::`vftable';
    v19 = &v20;
    v6 = CRegion::TryAddRectangles((CRegion *)&v19, (const struct tagRECT *)((char *)this + 728), 1u);
    if ( v6 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v6, retaddr);
    v7 = (CGeometry *)*((_QWORD *)this + 99);
    v15 = 0LL;
    v16 = 0;
    ShapeData = CGeometry::GetShapeData(v7, (const struct D2D_SIZE_F *)((char *)this + 140), (struct CShapePtr *)&v15);
    v3 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ShapeData, 0x746u, 0LL);
    }
    else
    {
      v17 = 0LL;
      v11 = CShape::Combine(v15, v9, v18, 0LL, 1, &v17);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x74Cu, 0LL);
      }
      else
      {
        v13 = v17;
        CShapePtr::Release(a2);
        *(_QWORD *)a2 = v13;
        *((_BYTE *)a2 + 8) = 1;
      }
    }
    CShapePtr::Release((CShapePtr *)&v15);
    CRegionShape::~CRegionShape((CRegionShape *)v18);
  }
  return v3;
}
