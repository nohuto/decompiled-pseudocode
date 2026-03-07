bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlipCheckNeeded(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return (*(_BYTE *)(**(_QWORD **)(*((_QWORD *)this + 1) + 64LL) + 1LL) & 2) != 0;
}
