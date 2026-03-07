void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipReleaseCount(
        CIFlipPresentHistoryTokenFlipManager *this,
        int a2)
{
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 80LL) = a2;
}
