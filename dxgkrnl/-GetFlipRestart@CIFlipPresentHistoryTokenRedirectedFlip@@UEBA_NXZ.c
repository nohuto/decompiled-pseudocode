bool __fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetFlipRestart(CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0x20) != 0;
}
