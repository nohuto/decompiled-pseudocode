/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056B00 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180097428 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800BCA20 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x180236D40 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180057560 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800BAF68 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800BCEB4 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800BCFD0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800BD040 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x1800BD1C0 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800BD2D0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edi
  KeyframeSequence *v9; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // r10d

  if ( (*((_BYTE *)this + 581) & 1) == 0 )
  {
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  if ( !a2 )
    goto LABEL_6;
  v5 = *((_DWORD *)this + 144);
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 123) = *((_DWORD *)this + 122);
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 49));
    *(_DWORD *)(v11 + 92) = 0;
  }
  else if ( v5 == 2 )
  {
    *((_DWORD *)this + 123) = *((_DWORD *)this + 122);
    CKeyframeAnimation::GetAnimationTimeLength(this);
    v12 = *((_DWORD *)this + 136);
    v13 = 0;
    if ( v12 >= 1 )
      v13 = v12 - 1;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v13);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 49));
    *(_DWORD *)(v14 + 92) = v15;
  }
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 49), a3);
  v6 = CExpressionValueStack::PushConstant(a3, *((const struct CExpressionValue **)this + 49));
  v8 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    v9 = (KeyframeSequence *)*((_QWORD *)this + 49);
    if ( (*((_BYTE *)v9 + 140) & 1) != 0 )
      KeyframeSequence::Stop(v9);
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x9B9u, 0LL);
LABEL_9:
  *((_BYTE *)this + 580) &= ~0x80u;
  *((_BYTE *)this + 581) &= 0xF8u;
  *((_DWORD *)this + 123) = 0;
  if ( v8 >= 0 )
    CKeyframeAnimation::OnAnimationEvent(this, 2LL, a3);
  return (unsigned int)v8;
}
