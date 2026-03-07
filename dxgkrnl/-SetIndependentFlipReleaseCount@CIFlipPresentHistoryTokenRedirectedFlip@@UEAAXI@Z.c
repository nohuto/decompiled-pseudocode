void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetIndependentFlipReleaseCount(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        int a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) ^= (*(_DWORD *)(*((_QWORD *)this + 1) + 44LL) ^ (a2 << 16)) & 0x30000;
}
