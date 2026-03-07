void __fastcall CTrimPathOperation::TrimToStartAt(CTrimPathOperation *this, const struct Path::Segment *a2, double a3)
{
  int v4; // edx
  bool v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  float v9; // xmm8_4
  _DWORD *v10; // rdi
  int v11; // xmm7_4
  int v12; // xmm6_4
  struct Path::Segment *v13; // rbx
  CTrimPathOperation *v14; // rcx

  v4 = *((_DWORD *)this + 8);
  v6 = *((_BYTE *)this + 396) == 0;
  *((_BYTE *)this + 397) = 0;
  *((_BYTE *)this + 396) = v6;
  *((_DWORD *)this + 8) = v4 + 1;
  if ( CTrimPathOperation::ShouldSplitCurrentSegment(this) )
    v9 = fmaxf(
           0.0,
           (float)(*(float *)(v8 + 4 * v7 + 24) - (float)(*(float *)(v8 + 44) - *((float *)a2 + 1)))
         / *((float *)a2 + 1));
  else
    v9 = *(float *)&FLOAT_1_0;
  v10 = (_DWORD *)(v8 + 56);
  v11 = *(_DWORD *)(v8 + 56);
  v12 = *(_DWORD *)(v8 + 60);
  v13 = CTrimPathOperation::InterpolateSegment((CTrimPathOperation *)v8, a2, a3, v9, (struct D2D_POINT_2F *)(v8 + 56));
  CTrimPathOperation::AppendSegment(this, (CTrimPathOperation *)((char *)this + 48));
  *v10 = v11;
  v10[1] = v12;
  *((float *)v13 + 1) = (float)(v9 - *(float *)&a3) * *((float *)a2 + 1);
  CTrimPathOperation::AppendSegment(this, v13);
  if ( CTrimPathOperation::ShouldSplitCurrentSegment(this) )
    CTrimPathOperation::TrimToEndAt(v14, a2, 0.0);
}
