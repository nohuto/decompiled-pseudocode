bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlip(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x2000) != 0;
}
