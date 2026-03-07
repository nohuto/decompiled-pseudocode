float __fastcall CProjectedShadow::GetBlurForBoundary(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx

  if ( !a2 )
    return *(float *)(a1 + 392) * 0.5;
  v2 = a2 - 1;
  if ( !v2 )
    return *(float *)(a1 + 392);
  v3 = v2 - 1;
  if ( !v3 )
    return *(float *)(a1 + 392) + *(float *)(a1 + 392);
  if ( v3 == 1 )
    return *(float *)(a1 + 392) * 3.0;
  return 0.0;
}
