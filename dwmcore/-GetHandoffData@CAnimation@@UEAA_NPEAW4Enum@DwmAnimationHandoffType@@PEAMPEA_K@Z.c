bool __fastcall CAnimation::GetHandoffData(
        CAnimation *this,
        enum DwmAnimationHandoffType::Enum *a2,
        float *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rcx
  bool AnimationValue; // di
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  float v13; // xmm0_4
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 15);
  AnimationValue = 1;
  if ( !v5 || (v11 = *((_QWORD *)this + 3), *(_QWORD *)(v5 + 136) > v11) )
  {
LABEL_2:
    *(_DWORD *)a2 = *((_DWORD *)this + 26);
    *a3 = *((float *)this + 32);
    *a4 = *((_QWORD *)this + 14);
    if ( !*((_BYTE *)this + 14) && *((_DWORD *)this + 47) && *((_DWORD *)this + 46) )
    {
      v13 = *((float *)this + 32);
      v14[0] = *((unsigned int *)this + 47);
      v14[1] = *((unsigned int *)this + 46);
      CoreUICallSend(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 12) + 1240LL) + 40LL),
        v14,
        2LL,
        1LL,
        1,
        &unk_18033940B,
        v13);
      *((_BYTE *)this + 14) = 1;
    }
    return AnimationValue;
  }
  v12 = *((_QWORD *)this + 17);
  if ( !*((_BYTE *)this + 13) )
    v12 += v11 - *((_QWORD *)this + 18);
  AnimationValue = CAnimationInterpolator::GetAnimationValue(
                     (CAnimationInterpolator *)(v5 + 264),
                     v12,
                     (float *)this + 32,
                     0LL);
  if ( AnimationValue )
  {
    ReleaseInterface<CAnimation>((char *)this + 120);
    goto LABEL_2;
  }
  return AnimationValue;
}
