/*
 * XREFs of ?SetIsShadowEnabled@CCursorState@@UEAAX_N@Z @ 0x180277AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x180277A58 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::SetIsShadowEnabled(CCursorState *this, char a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = a2;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
