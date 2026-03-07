__int64 __fastcall CShapeTree::DrawShapes(CShapeTree *this, struct CDrawingContext *a2, struct D2D_SIZE_F *a3)
{
  unsigned int v6; // ebx
  char v7; // r15
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  void *v18; // rcx
  unsigned __int64 v19; // rdx
  char *v20; // rcx
  bool v21; // zf
  _BYTE v23[64]; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+80h] [rbp-80h]
  void *v25; // [rsp+90h] [rbp-70h] BYREF
  FLOAT v26; // [rsp+98h] [rbp-68h]
  FLOAT v27; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v28[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[48]; // [rsp+B0h] [rbp-50h] BYREF
  void *lpMem; // [rsp+E0h] [rbp-20h]
  char *v31; // [rsp+F0h] [rbp-10h] BYREF
  char v32; // [rsp+108h] [rbp+8h] BYREF
  void *v33; // [rsp+2A8h] [rbp+1A8h]
  __int128 v34; // [rsp+2B0h] [rbp+1B0h]

  v6 = 0;
  v7 = 0;
  *(_OWORD *)v28 = *((_OWORD *)this + 5);
  if ( !*((_BYTE *)this + 97) )
    return v6;
  width = a3->width;
  height = a3->height;
  v25 = 0LL;
  v26 = width;
  v27 = height;
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain((float *)&v25, (float *)v28) )
  {
    v10 = CDrawingContext::MarkCurrentState(a2);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x114u, 0LL);
      return v6;
    }
    v7 = 1;
    v12 = CDrawingContext::PushClipRectForCurrentNode(a2, (struct MilRectF *)&v25);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x117u, 0LL);
      goto LABEL_15;
    }
  }
  v24 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)v23);
  CDrawingContext::GetClipBoundsWorld((__int64)a2, (float *)v28);
  CShapeDrawingContext::CShapeDrawingContext((__int64)v29, (__int64)a2, a3, v28, (__int64)v23);
  v14 = CShapeTreeIterator::Walk<CShapeDrawingContext>((__int64)v29, (__int64)this, (__int64)v29);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x126u, 0LL);
    goto LABEL_21;
  }
  v16 = CShapeDrawingContext::Render((CShapeDrawingContext *)v29);
  v6 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x127u, 0LL);
LABEL_21:
    CShapeDrawingContext::~CShapeDrawingContext((CShapeDrawingContext *)v29);
    goto LABEL_14;
  }
  v18 = v33;
  if ( v33 )
  {
    v25 = v33;
    v19 = 8 * ((__int64)(*((_QWORD *)&v34 + 1) - (_QWORD)v33) >> 3);
    v28[0] = v19;
    if ( v19 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v25, v28);
      v19 = v28[0];
      v18 = v25;
    }
    operator delete(v18, v19);
    v33 = 0LL;
    v34 = 0LL;
  }
  detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear(&v31);
  v20 = v31;
  v21 = v31 == &v32;
  v31 = 0LL;
  if ( v21 )
    v20 = 0LL;
  operator delete(v20);
  operator delete(lpMem);
LABEL_14:
  if ( v7 )
LABEL_15:
    CDrawingContext::RestoreStateToLastMark(a2);
  return v6;
}
