bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlipCandidate(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 84LL);
}
