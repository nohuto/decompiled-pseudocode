bool __fastcall CMouseProcessor::CanContainMoveTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  return (*(_DWORD *)(*((_QWORD *)a1 + 1) + 112LL) & 0x200) == 0;
}
