void __fastcall CIFlipPresentHistoryTokenFlipManager::SetIndependentFlipForceNotifyDwm(
        CIFlipPresentHistoryTokenFlipManager *this,
        char a2)
{
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 77LL) = a2;
}
