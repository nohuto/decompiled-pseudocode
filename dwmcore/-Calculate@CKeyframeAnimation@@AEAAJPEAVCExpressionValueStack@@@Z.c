__int64 __fastcall CKeyframeAnimation::Calculate(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  char v5; // al
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // r10d
  int v11; // r11d
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14; // eax
  int v15; // ecx
  bool v16; // sf
  int v17; // r10d
  __m128 v18; // xmm2
  __m128 v19; // rt1

  if ( *((char *)this + 580) >= 0 )
    return 0LL;
  v5 = *((_BYTE *)this + 581);
  if ( (v5 & 4) != 0 )
    *((_BYTE *)this + 581) = v5 & 0xFB;
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 49), a2);
  v6 = *((_QWORD *)this + 49);
  if ( (*(_BYTE *)(v6 + 140) & 3) != 1 || !Timer::GetIsComplete((Timer *)(v6 + 80)) || *((_DWORD *)this + 143) == 4 )
    return 0LL;
  *((_BYTE *)this + 581) |= 4u;
  if ( !*((_DWORD *)this + 137) )
    goto LABEL_9;
  v12 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (LODWORD(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v18 = 0LL;
    v18.m128_f32[0] = (float)(int)v12 - v12;
    v19.m128_f32[0] = FLOAT_N0_5;
    v14 = (int)v12 - _mm_cmple_ss(v18, v19).m128_u32[0];
  }
  else
  {
    v13 = v12 + 6291456.25;
    v14 = (int)(LODWORD(v13) << 10) >> 11;
  }
  v15 = 0;
  do
  {
    ++v15;
    if ( v10 < 0 )
    {
      v10 += v14;
LABEL_28:
      v16 = v10 < 0;
      continue;
    }
    if ( v10 > v14 )
    {
      v10 -= v14;
      goto LABEL_28;
    }
    v16 = v10 < 0;
    if ( !v10 )
    {
      if ( *((float *)this + 132) >= 0.0 )
        break;
      v10 = v14;
      goto LABEL_28;
    }
  }
  while ( v16 || v10 > v14 );
  if ( v15 > v11 )
  {
    if ( v11 <= 0 )
      goto LABEL_21;
    *((_DWORD *)this + 137) = 0;
    goto LABEL_9;
  }
  *((_DWORD *)this + 137) = v11 - v15;
LABEL_21:
  if ( !v15 )
  {
LABEL_9:
    *((_BYTE *)this + 580) &= ~0x80u;
    *((_BYTE *)this + 581) |= 2u;
    v7 = CKeyframeAnimation::OnAnimationEvent(this, 1LL, a2);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC71u, 0LL);
      return v9;
    }
    return 0LL;
  }
  *((_DWORD *)this + 135) += v15;
  CKeyframeAnimation::PrepareSequenceForIteration(this, *((_DWORD *)this + 135));
  KeyframeSequence::Repeat(*((KeyframeSequence **)this + 49), v17);
  return 0LL;
}
