const struct tagRECT *__fastcall CIFlipPresentHistoryTokenFlipManager::GetSourceRect(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  return (const struct tagRECT *)(**(_QWORD **)(*((_QWORD *)this + 1) + 64LL) + 4LL);
}
