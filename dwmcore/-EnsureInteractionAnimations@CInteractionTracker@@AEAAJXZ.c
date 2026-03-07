__int64 __fastcall CInteractionTracker::EnsureInteractionAnimations(struct CComposition **this)
{
  __int64 *v1; // r14
  CScrollAnimation *v3; // rax
  CScrollAnimation *v4; // rsi
  CInteractionTrackerScaleAnimation *v5; // rcx
  int v6; // r9d
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD *v9; // rbx
  CInteractionTrackerPositionAnimation *v10; // rax
  CInteractionTrackerScaleAnimation **v11; // rbx
  CInteractionTrackerPositionAnimation *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(this + 41);
  if ( !this[41] )
  {
    v3 = (CScrollAnimation *)DefaultHeap::AllocClear(0x258uLL);
    v4 = v3;
    if ( !v3 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    CScrollAnimation::CScrollAnimation(v3, this[2]);
    *(_QWORD *)v4 = &CInteractionTrackerScaleAnimation::`vftable';
    CMotion::CMotion((CScrollAnimation *)((char *)v4 + 456));
    *((_QWORD *)v4 + 57) = &CScaleMotion::`vftable';
    Microsoft::WRL::ComPtr<CInteractionTrackerScaleAnimation>::operator=(v1, (__int64)v4);
    v5 = (CInteractionTrackerScaleAnimation *)*v1;
    if ( !*v1 )
    {
      v14 = 3212;
LABEL_6:
      v6 = -2147024882;
      v7 = -2147024882;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, v6, v14, 0LL);
      return v7;
    }
    v8 = CInteractionTrackerScaleAnimation::Initialize(v5, (struct CInteractionTracker *)this);
    v7 = v8;
    if ( v8 < 0 )
    {
      v14 = 3214;
LABEL_11:
      v6 = v8;
      goto LABEL_7;
    }
  }
  v9 = this + 42;
  if ( !this[42] )
  {
    v10 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v10 )
      v10 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v10, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 42, (__int64)v10);
    if ( !*v9 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0xC94u, 0LL);
      return v7;
    }
    v8 = CInteractionTrackerPositionAnimation::Initialize(*v9, this, 0LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      v14 = 3222;
      goto LABEL_11;
    }
  }
  v11 = this + 43;
  if ( !this[43] )
  {
    v12 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v12 )
      v12 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v12, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 43, (__int64)v12);
    v5 = *v11;
    if ( !*v11 )
    {
      v14 = 3228;
      goto LABEL_6;
    }
    v8 = CInteractionTrackerPositionAnimation::Initialize(v5, this, 1LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      v14 = 3230;
      goto LABEL_11;
    }
  }
  return 0;
}
