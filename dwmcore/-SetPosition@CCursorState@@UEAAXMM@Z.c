/*
 * XREFs of ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x180277B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x180277A58 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18027848C (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 */

void __fastcall CCursorState::SetPosition(CCursorState *this, float a2, float a3)
{
  char v4; // si
  __int64 v5; // rbp
  __int64 i; // rdi

  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((float *)this + 12) || a3 != *((float *)this + 13) )
  {
    v4 = *((_BYTE *)this + 73);
    *((float *)this + 12) = a2;
    *((float *)this + 13) = a3;
    *((_BYTE *)this + 19) = 1;
    v5 = *((_QWORD *)this + 11);
    for ( i = *((_QWORD *)this + 10); i != v5; i += 144LL )
    {
      if ( *(_QWORD *)(i + 96) )
      {
        CCursorState::UpdateHardwareCursorOverlay(this, (struct CCursorState::MonitorData *)i, 0);
        if ( *(_QWORD *)(i + 96) )
          v4 |= g_disableHardwareCursors;
        else
          v4 = 1;
      }
    }
    if ( v4 )
      CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
