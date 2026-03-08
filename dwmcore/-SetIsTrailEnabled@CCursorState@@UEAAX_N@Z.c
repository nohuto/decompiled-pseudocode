/*
 * XREFs of ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z @ 0x180277B00
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x180277A58 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

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
