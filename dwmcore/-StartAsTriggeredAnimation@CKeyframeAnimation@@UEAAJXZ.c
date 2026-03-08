/*
 * XREFs of ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x180236D40
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18009B43C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800BCFD0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800BD040 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x18023C290 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 */

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
