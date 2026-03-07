struct _D3DKMT_AUXILIARYPRESENTINFO *__fastcall CIFlipPresentHistoryTokenFlipManager::GetAuxiliaryPresentInfo(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return *(struct _D3DKMT_AUXILIARYPRESENTINFO **)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 96LL);
}
