char __fastcall CCursorState::TrySetVisual(CCursorState *this, struct CCursorVisual *a2, __int64 a3)
{
  EnterCriticalSection(&g_CursorManager);
  if ( *((_QWORD *)this + 8) )
  {
    LeaveCriticalSection(&g_CursorManager);
    return 0;
  }
  else
  {
    *((_QWORD *)this + 8) = a2;
    *((_QWORD *)this + 7) = *((_QWORD *)a2 + 2);
    LeaveCriticalSection(&g_CursorManager);
    CCursorState::ProcessStateChanges(this, a3, 1);
    return 1;
  }
}
