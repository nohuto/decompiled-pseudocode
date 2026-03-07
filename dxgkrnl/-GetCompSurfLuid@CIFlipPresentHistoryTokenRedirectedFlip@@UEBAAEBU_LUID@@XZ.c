const struct _LUID *__fastcall CIFlipPresentHistoryTokenRedirectedFlip::GetCompSurfLuid(
        CIFlipPresentHistoryTokenRedirectedFlip *this)
{
  return (const struct _LUID *)(*((_QWORD *)this + 1) + 56LL);
}
