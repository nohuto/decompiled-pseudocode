void __fastcall CCursorState::SetIsTrailEnabled(CCursorState *this, char a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((_BYTE *)this + 17) )
  {
    *((_BYTE *)this + 17) = a2;
    if ( a2 )
      CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
