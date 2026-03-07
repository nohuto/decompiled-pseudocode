void zzzInternalHideCaret()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(v0 + 312) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v0 + 312) &= ~1u;
  if ( ++*(_DWORD *)(v0 + 316) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 304), (struct tagQ *)v0);
    xxxWindowEvent(0x8003u, *(struct tagWND **)(v0 + 304), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
