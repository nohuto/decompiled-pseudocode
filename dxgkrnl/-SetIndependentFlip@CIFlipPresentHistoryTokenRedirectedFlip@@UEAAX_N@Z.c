void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetIndependentFlip(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        unsigned __int8 a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0xFFFFDFFF | (a2 << 13);
}
