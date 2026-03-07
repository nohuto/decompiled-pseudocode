__int64 __fastcall CKeyframeAnimation::TimeSeek(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm3_4
  char v3; // al
  int v4; // eax
  int *v5; // r10
  float AnimationTimeLength; // xmm0_4
  signed int v7; // edx
  int *v8; // rcx
  int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // rcx
  int v12; // r10d
  unsigned int v13; // ebx
  float v15; // xmm1_4

  v2 = a2;
  if ( a2 < 0.0 )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x9FCu, 0LL);
  }
  else
  {
    v3 = *((_BYTE *)this + 581);
    if ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      v4 = *((_DWORD *)this + 122);
      if ( v4 > 0 )
      {
        v15 = a2 * 1000.0;
        if ( v15 <= (float)v4 )
        {
          v4 = (int)v15;
          v2 = 0.0;
        }
        else
        {
          v2 = v2 - (float)((float)v4 / 1000.0);
        }
        *((_DWORD *)this + 123) = v4;
      }
      AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
      v7 = v5[136];
      v8 = v5 + 135;
      v9 = (int)(float)(v2 / AnimationTimeLength);
      if ( v7 >= 0 && (*v8 = v9, v5[137] = v7 - v9, v7 - v9 < 0) )
        v5[137] = 0;
      else
        v7 = (int)(float)(v2 / AnimationTimeLength);
      *v8 = v7;
      CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)v5, v7);
      KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v10 + 392));
      *(_DWORD *)(v11 + 92) = v12;
    }
    return 0;
  }
  return v13;
}
