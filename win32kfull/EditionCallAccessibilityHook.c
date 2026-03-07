__int64 __fastcall EditionCallAccessibilityHook(unsigned __int64 a1)
{
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
    return xxxCallHook(11LL, a1, 0LL, 10);
  else
    return 0LL;
}
