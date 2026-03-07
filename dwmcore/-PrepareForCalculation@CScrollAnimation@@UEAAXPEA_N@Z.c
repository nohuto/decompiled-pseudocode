void __fastcall CScrollAnimation::PrepareForCalculation(CScrollAnimation *this, bool *a2)
{
  CInteractionTracker *InteractionTracker; // rax
  bool v5; // r9

  if ( (*(unsigned __int8 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 312LL))(this)
    || (InteractionTracker = CScrollAnimation::GetInteractionTracker(this),
        CInteractionTracker::IsOutOfBounds(InteractionTracker)) )
  {
    v5 = 1;
  }
  *a2 = v5;
}
