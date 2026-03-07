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
