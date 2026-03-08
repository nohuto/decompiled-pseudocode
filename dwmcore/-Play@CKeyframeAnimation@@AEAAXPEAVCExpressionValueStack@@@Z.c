/*
 * XREFs of ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800BCD94
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056B00 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800BCE40 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800BCEB4 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800BD040 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 */

void __fastcall CKeyframeAnimation::Play(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  char v4; // cl
  char v5; // al
  char v6; // al
  KeyframeSequence *v7; // rcx

  v4 = *((_BYTE *)this + 581);
  if ( (v4 & 1) != 0 )
  {
    v6 = *((_BYTE *)this + 580);
    if ( v6 >= 0 && (v4 & 2) == 0 )
    {
      v7 = (KeyframeSequence *)*((_QWORD *)this + 49);
      *((_BYTE *)this + 580) = v6 | 0x80;
      KeyframeSequence::Play(v7);
    }
  }
  else
  {
    *((_DWORD *)this + 135) = 0;
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::Play(*((KeyframeSequence **)this + 49));
    v5 = *((_BYTE *)this + 581);
    *((_BYTE *)this + 580) |= 0x80u;
    *((_BYTE *)this + 581) = v5 & 0xFC | 1;
    *((_DWORD *)this + 137) = *((_DWORD *)this + 136);
    CKeyframeAnimation::OnAnimationEvent(this, 4LL, a2);
    *((_BYTE *)this + 581) |= 4u;
  }
}
