bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetHDRMetaDataChanged(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x40) != 0;
}
