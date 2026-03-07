__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  struct CInteractionTracker *InteractionTracker; // rax
  InteractionSourceManager *v7; // rcx
  wchar_t *v8; // r10
  struct CExpressionValueStack *v9; // r11
  struct CManipulation *ActiveManipulation; // rax
  CConditionalExpression *SourceModifierConditionalAnimation; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct CInteractionTracker *v15; // rbx
  float (__fastcall *v16)(CScrollAnimation *); // rdi
  _DWORD *v17; // rcx
  int v18; // r11d
  unsigned int v19; // r11d
  __int64 v20; // rcx
  bool v22; // [rsp+70h] [rbp+8h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  if ( InteractionSourceManager::HasActiveManipulation((struct CInteractionTracker *)((char *)InteractionTracker + 200)) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v7);
    SourceModifierConditionalAnimation = (CConditionalExpression *)CManipulation::GetSourceModifierConditionalAnimation(
                                                                     ActiveManipulation,
                                                                     *((unsigned int *)this + 85));
  }
  else
  {
    SourceModifierConditionalAnimation = 0LL;
  }
  v22 = 0;
  if ( !SourceModifierConditionalAnimation )
    goto LABEL_8;
  v12 = CConditionalExpression::ProcessConditionalExpression(
          SourceModifierConditionalAnimation,
          v9,
          v8,
          *((_DWORD *)this + 85) != 2,
          &v22,
          a4);
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( v22 )
      return 0;
LABEL_8:
    v15 = CScrollAnimation::GetInteractionTracker(this);
    v16 = *(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 352LL);
    CInteractionTracker::ValueFromBoundary(v15, 2LL, *((_DWORD *)this + 85));
    CInteractionTracker::ValueFromBoundary(v17, 1LL, v18);
    InteractionSourceManager::GetActiveManipulationDelta(v20 + 200, v19);
    CInteractionTracker::GetCurrentValue((__int64)v15, *((_DWORD *)this + 85));
    *a4 = v16(this);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x25Bu, 0LL);
  return v14;
}
