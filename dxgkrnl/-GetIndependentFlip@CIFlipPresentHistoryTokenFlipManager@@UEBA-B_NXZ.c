bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetIndependentFlip(CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 24LL);
}
