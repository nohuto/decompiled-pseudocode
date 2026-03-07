const struct _LUID *__fastcall CIFlipPresentHistoryTokenFlipManager::GetCompSurfLuid(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 28LL);
}
