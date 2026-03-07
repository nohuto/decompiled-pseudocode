char __fastcall InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation(
        InteractionSourceManager *this)
{
  bool HasActiveManipulation; // al
  InteractionSourceManager *v2; // rcx
  char v3; // r9
  InteractionSourceManager *v4; // rcx
  InteractionSourceManager *v5; // rcx
  InteractionSourceManager *v6; // rcx

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(this);
  v3 = 0;
  if ( HasActiveManipulation
    && COERCE_FLOAT(*((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v2) + 98) & _xmm) < 0.1
    && COERCE_FLOAT(*((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v4) + 99) & _xmm) < 0.1
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)InteractionSourceManager::TryGetActiveManipulation(v5) + 101) - 0.0) & _xmm) <= 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)InteractionSourceManager::TryGetActiveManipulation(v6) + 102) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    return 1;
  }
  return v3;
}
