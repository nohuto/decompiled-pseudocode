bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetHDRMetaDataChanged(CIFlipPresentHistoryTokenFlipManager *this)
{
  return ***(_BYTE ***)(*((_QWORD *)this + 1) + 64LL) & 1;
}
