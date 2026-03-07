bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipCandidate(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x200000) != 0;
}
