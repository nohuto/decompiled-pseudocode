__int64 __fastcall CProjectedShadow::ComputeShadowPath(__int64 a1, __int64 a2)
{
  int v4; // ebx
  float v6; // xmm1_4
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  v4 = 0;
  if ( CProjectedShadow::CanUseFastShadow((CProjectedShadowCaster **)a1) )
    return 1LL;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 72) + 96LL) + 216LL))(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 96LL)) != 1
    || !CProjectedShadow::IsShadowAxisAlignedRectToReceiver((CProjectedShadow *)a1) )
  {
    return 0LL;
  }
  v6 = *(float *)(a1 + 96);
  if ( v6 >= CProjectedShadow::GetBlurForBoundary(a1, 3) )
    return 5LL;
  v8 = *(_QWORD *)(a2 + 40);
  if ( *(int *)(v8 + 584) < 37632 || *(_BYTE *)(v8 + 1505) )
    return 0LL;
  if ( v6 >= CProjectedShadow::GetBlurForBoundary(v7, 2) )
    return 4LL;
  LOBYTE(v4) = v6 >= CProjectedShadow::GetBlurForBoundary(v9, 1);
  return (unsigned int)(v4 + 2);
}
