void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlip(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 24LL) = a2;
}
