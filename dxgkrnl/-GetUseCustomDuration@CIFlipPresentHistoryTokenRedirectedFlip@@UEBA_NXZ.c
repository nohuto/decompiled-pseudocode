bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetUseCustomDuration(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x80000) != 0;
}
