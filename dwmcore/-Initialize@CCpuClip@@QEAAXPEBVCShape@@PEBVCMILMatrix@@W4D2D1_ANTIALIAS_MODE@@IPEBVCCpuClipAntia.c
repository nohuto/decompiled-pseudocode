void __fastcall CCpuClip::Initialize(
        CCpuClip *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        unsigned int a5,
        const struct CCpuClipAntialiasSinkContext *a6)
{
  CMILMatrix *v10; // rcx

  CShapePtr::Release((CCpuClip *)((char *)this + 80));
  v10 = (CCpuClip *)((char *)this + 8);
  *((_DWORD *)this + 25) = a5;
  *((_QWORD *)this + 13) = a6;
  *((_BYTE *)this + 112) = 0;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 24) = a4;
  if ( a3 )
  {
    *(_OWORD *)v10 = *(_OWORD *)a3;
    *(_OWORD *)((char *)this + 24) = *((_OWORD *)a3 + 1);
    *(_OWORD *)((char *)this + 40) = *((_OWORD *)a3 + 2);
    *(_OWORD *)((char *)this + 56) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 18) = *((_DWORD *)a3 + 16);
  }
  else
  {
    CMILMatrix::SetToIdentity(v10);
  }
}
