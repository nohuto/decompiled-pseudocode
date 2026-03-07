__int64 __fastcall CKeyframeAnimation::StartAsTriggeredAnimation(KeyframeSequence **this)
{
  int started; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  KeyframeSequence *v5; // r9
  int updated; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx

  started = CBaseExpression::StartAsTriggeredAnimation((CBaseExpression *)this);
  v4 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, started, 0xD31u, 0LL);
  }
  else if ( ((_BYTE)this[29] & 1) == 0 )
  {
    v5 = this[2];
    *((_DWORD *)this + 140) = 0;
    updated = CKeyframeAnimation::UpdatePlaybackState((__int64)this, 1u, 0, *((_QWORD *)v5 + 76));
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, updated, 0xD48u, 0LL);
    }
    else if ( ((_BYTE)this[29] & 8) != 0 )
    {
      v8 = CKeyframeAnimation::Reset((CKeyframeAnimation *)this, 0, 0LL);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD51u, 0LL);
      }
      else
      {
        CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)this, 0);
        KeyframeSequence::ConfigureTimer(this[49]);
        *(_DWORD *)(v10 + 92) = 0;
      }
    }
  }
  return v4;
}
