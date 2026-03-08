/*
 * XREFs of ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1802714DC
 * Callers:
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x180232A6C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

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
