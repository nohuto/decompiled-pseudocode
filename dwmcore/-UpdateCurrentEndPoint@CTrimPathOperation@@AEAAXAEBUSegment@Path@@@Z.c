void __fastcall CTrimPathOperation::UpdateCurrentEndPoint(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  _DWORD *v3; // rax
  int v4; // xmm1_4
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)a2 != 1 )
  {
    Path::Segment::GetControlPoints(a2, v5);
    if ( !v5[0] )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v3 = (_DWORD *)gsl::span<D2D_POINT_2F const,-1>::operator[](v5, v5[0] - 1LL);
    v4 = v3[1];
    *((_DWORD *)this + 9) = *v3;
    *((_DWORD *)this + 10) = v4;
  }
}
