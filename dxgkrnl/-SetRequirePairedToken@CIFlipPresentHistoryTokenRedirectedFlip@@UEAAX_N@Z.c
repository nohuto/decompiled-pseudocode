void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetRequirePairedToken(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        unsigned __int8 a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0xF7FFFFFF | (a2 << 27);
}
