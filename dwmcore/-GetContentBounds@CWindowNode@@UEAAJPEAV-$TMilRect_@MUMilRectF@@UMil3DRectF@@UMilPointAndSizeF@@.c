__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, float *a2)
{
  int ContentBounds; // eax
  unsigned int v5; // ecx
  unsigned int EffectiveBounds; // ebx
  unsigned int v7; // xmm1_4
  unsigned int v8; // xmm2_4
  float v9; // xmm3_4
  int WindowClipShape; // eax
  unsigned int v12; // ecx
  int TightBounds; // eax
  unsigned int v14; // ecx
  __int64 i; // rax
  _QWORD *DxClipShape; // rax
  unsigned int v17; // ecx
  __int64 j; // rax
  unsigned int v19; // [rsp+20h] [rbp-40h]
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF

  ContentBounds = CVisual::GetContentBounds();
  EffectiveBounds = ContentBounds;
  if ( ContentBounds < 0 )
  {
    v19 = 886;
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 890) )
    return EffectiveBounds;
  v21 = 0LL;
  if ( *((_BYTE *)this + 895) )
  {
    ContentBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    EffectiveBounds = ContentBounds;
    if ( ContentBounds < 0 )
    {
      v19 = 900;
    }
    else
    {
      ContentBounds = CWindowNode::GetEffectiveBounds(this, *((_QWORD *)this + 110), &v21, 0LL);
      EffectiveBounds = ContentBounds;
      if ( ContentBounds >= 0 )
      {
        for ( i = 0LL; i < 16; i += 4LL )
          *(float *)((char *)&v20 + i) = (float)*(int *)((char *)&v21 + i);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, (float *)&v20);
        goto LABEL_4;
      }
      v19 = 901;
    }
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ContentBounds, v19, 0LL);
    return EffectiveBounds;
  }
LABEL_4:
  if ( *((_BYTE *)this + 896) )
  {
    DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &v20);
    EffectiveBounds = CWindowNode::GetEffectiveBounds(this, *DxClipShape, &v21, 0LL);
    CShapePtr::Release((CShapePtr *)&v20);
    if ( (EffectiveBounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, EffectiveBounds, 0x38Bu, 0LL);
      return EffectiveBounds;
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v20 + j) = (float)*(int *)((char *)&v21 + j);
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, (float *)&v20);
  }
  if ( !*((_BYTE *)this + 890) && *((_QWORD *)this + 88) )
  {
    v20 = 0LL;
    if ( !*((_QWORD *)this + 99) )
    {
      *(float *)&v7 = (float)*((int *)this + 183);
      *(float *)&v8 = (float)*((int *)this + 184);
      v9 = (float)*((int *)this + 185);
      *(float *)&v20 = (float)*((int *)this + 182);
      *(_QWORD *)((char *)&v20 + 4) = __PAIR64__(v8, v7);
      *((float *)&v20 + 3) = v9;
LABEL_9:
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, (float *)&v20);
      return EffectiveBounds;
    }
    *(_QWORD *)&v21 = 0LL;
    BYTE8(v21) = 0;
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v21);
    EffectiveBounds = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, WindowClipShape, 0x3A2u, 0LL);
    }
    else
    {
      TightBounds = CShapePtr::GetTightBounds(&v21, &v20, 0LL);
      EffectiveBounds = TightBounds;
      if ( TightBounds >= 0 )
      {
        CShapePtr::Release((CShapePtr *)&v21);
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, TightBounds, 0x3A3u, 0LL);
    }
    CShapePtr::Release((CShapePtr *)&v21);
  }
  return EffectiveBounds;
}
