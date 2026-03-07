void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipRequestDwmConfirm(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 78LL) = a2;
}
