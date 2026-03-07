__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::FindFirstFrameIndex(
        __int64 a1,
        float a2)
{
  __int64 v2; // r9
  unsigned int v3; // edx
  unsigned __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 1;
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(a1 + 16) - v2) >> 2);
  while ( v3 < v4 )
  {
    if ( (float)(*(float *)(v2 + 20LL * v3) + 0.00000011920929) >= a2 )
      return v3 - 1;
    ++v3;
  }
  return (unsigned int)(v4 - 1);
}
