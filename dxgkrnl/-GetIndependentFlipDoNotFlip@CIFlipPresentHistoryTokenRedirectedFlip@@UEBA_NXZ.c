bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipDoNotFlip(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x4000000) != 0;
}
