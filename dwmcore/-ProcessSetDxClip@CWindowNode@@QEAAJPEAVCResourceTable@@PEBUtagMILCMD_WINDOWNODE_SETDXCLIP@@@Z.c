__int64 __fastcall CWindowNode::ProcessSetDxClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETDXCLIP *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  CGeometry *Resource; // rsi
  __int64 v8; // rcx
  bool v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  CGeometry *v12; // rcx
  int ShapeData; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  CShape *v18; // [rsp+30h] [rbp-50h] BYREF
  char v19; // [rsp+38h] [rbp-48h]
  CShape *v20; // [rsp+40h] [rbp-40h] BYREF
  char v21; // [rsp+48h] [rbp-38h]
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (CGeometry *)CResourceTable::GetResource((__int64)a2, v5, 0x43u)) != 0LL )
  {
    if ( Resource != *((CGeometry **)this + 109) )
    {
      v20 = 0LL;
      v18 = 0LL;
      v9 = 0;
      v21 = 0;
      v19 = 0;
      if ( Resource
        && (v10 = CGeometry::GetShapeData(
                    Resource,
                    (const struct D2D_SIZE_F *)((char *)this + 140),
                    (struct CShapePtr *)&v20),
            v4 = v10,
            v10 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x245u, 0LL);
      }
      else
      {
        v12 = (CGeometry *)*((_QWORD *)this + 109);
        if ( v12
          && (ShapeData = CGeometry::GetShapeData(
                            v12,
                            (const struct D2D_SIZE_F *)((char *)this + 140),
                            (struct CShapePtr *)&v18),
              v4 = ShapeData,
              ShapeData < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, ShapeData, 0x24Au, 0LL);
        }
        else
        {
          if ( CShapePtr::IsAxisAlignedRectangle(&v20) && CShapePtr::IsAxisAlignedRectangle(&v18) )
          {
            v23 = 0LL;
            v22 = 0LL;
            CWindowNode::GetGeometryBounds((__int64)this, Resource);
            CWindowNode::GetGeometryBounds((__int64)this, *((CGeometry **)this + 109));
            v9 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(
                   (float *)&v23,
                   (float *)&v22) != 0;
          }
          v15 = CResource::RegisterNotifier(this, Resource);
          v4 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x25Cu, 0LL);
          }
          else
          {
            CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 109));
            *((_QWORD *)this + 109) = Resource;
            if ( !v9 )
            {
              *((_BYTE *)this + 888) = 0;
              CVisual::PropagateFlags((__int64)this, 5u);
            }
          }
        }
      }
      CShapePtr::Release((CShapePtr *)&v18);
      CShapePtr::Release((CShapePtr *)&v20);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x233u, 0LL);
  }
  return v4;
}
