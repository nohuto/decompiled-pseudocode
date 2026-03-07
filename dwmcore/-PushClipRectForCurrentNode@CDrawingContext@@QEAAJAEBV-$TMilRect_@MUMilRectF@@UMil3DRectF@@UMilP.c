__int64 __fastcall CDrawingContext::PushClipRectForCurrentNode(CDrawingContext *this, struct MilRectF *a2, _BYTE *a3)
{
  struct CRectanglesShape *v6; // rcx
  int v7; // eax
  _OWORD *v8; // rax
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v10; // rax
  int v11; // r8d
  const struct CShape *v12; // rbx
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  __int64 v18; // [rsp+38h] [rbp-79h] BYREF
  const struct CShape *v19; // [rsp+40h] [rbp-71h] BYREF
  char v20; // [rsp+48h] [rbp-69h]
  _OWORD v21[4]; // [rsp+ACh] [rbp-5h] BYREF
  int v22; // [rsp+ECh] [rbp+3Bh]
  char v23; // [rsp+F8h] [rbp+47h]

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)&v18);
  v18 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  v7 = *((_DWORD *)this + 100);
  if ( v7 )
  {
    v6 = (struct CRectanglesShape *)(unsigned int)(v7 - 1);
    v8 = (_OWORD *)(*((_QWORD *)this + 52) + 68LL * (_QWORD)v6);
  }
  else
  {
    v8 = &CMILMatrix::Identity;
  }
  v21[0] = *v8;
  v21[1] = v8[1];
  v21[2] = v8[2];
  v21[3] = v8[3];
  v22 = *((_DWORD *)v8 + 16);
  ObjectCache = CThreadContext::GetObjectCache(v6);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    v12 = CRectanglesShape::CRectanglesShape(v10, a2);
  else
    v12 = 0LL;
  CShapePtr::Release((CShapePtr *)&v19);
  v19 = v12;
  v20 = 1;
  if ( v12 )
  {
    if ( CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope((CDrawingContext *)((char *)this + 896))
      || !CCpuClippingData::ShouldRealizeCpuClipOnGpu(v12, (const struct CMILMatrix *)v21) )
    {
      v23 = 1;
    }
    v14 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this, 0LL, (__int64)&v18, a3);
    v16 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xCD6u, 0LL);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0xCCCu, 0LL);
  }
  CShapePtr::Release((CShapePtr *)&v19);
  return v16;
}
