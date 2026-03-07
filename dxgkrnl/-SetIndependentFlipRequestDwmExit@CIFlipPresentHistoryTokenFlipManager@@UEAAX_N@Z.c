void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipRequestDwmExit(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 76LL) = a2;
}
