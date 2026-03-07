void __fastcall CIFlipPresentHistoryTokenRedirectedFlip::SetIndependentFlipForceNotifyDwm(
        CIFlipPresentHistoryTokenRedirectedFlip *this,
        unsigned __int8 a2)
{
  *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL) & 0xFFFBFFFF | (a2 << 18);
}
