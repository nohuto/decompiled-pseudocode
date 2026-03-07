bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipCheckNeeded(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x400000) != 0;
}
