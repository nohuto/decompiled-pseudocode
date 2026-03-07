bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetIndependentFlipTrueImmediate(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x800000) != 0;
}
