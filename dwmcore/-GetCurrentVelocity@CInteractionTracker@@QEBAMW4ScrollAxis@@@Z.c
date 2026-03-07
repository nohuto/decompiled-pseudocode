float __fastcall CInteractionTracker::GetCurrentVelocity(CInteractionTracker *a1, int a2)
{
  float result; // xmm0_4
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CScrollScaleKeyframeAnimation *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CMotion *v10; // rax
  __int64 v11; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = 0.0;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
      {
        v5 = *(_QWORD *)(v4 + 328);
LABEL_15:
        v10 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 328LL))(v5);
        return CMotion::GetCurrentVelocity(v10);
      }
      v6 = *(CScrollScaleKeyframeAnimation **)(v4 + 472);
      if ( v6 )
        return CScrollScaleKeyframeAnimation::GetScaleVelocity(v6);
    }
    else
    {
      if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
      {
        v5 = *(_QWORD *)(v7 + 344);
        goto LABEL_15;
      }
      v8 = *(_QWORD *)(v7 + 464);
      if ( v8 )
        return *(float *)(CScrollPositionKeyframeAnimation::GetPositionVelocity(v8, v12) + 4);
    }
  }
  else
  {
    if ( CInteractionTracker::AreInteractionAnimationsAlive(a1) )
    {
      v5 = *(_QWORD *)(v9 + 336);
      goto LABEL_15;
    }
    v11 = *(_QWORD *)(v9 + 464);
    if ( v11 )
      return *(float *)CScrollPositionKeyframeAnimation::GetPositionVelocity(v11, v12);
  }
  return result;
}
