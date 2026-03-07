void __fastcall CCursorState::DisableHardwareCursor(
        struct CCursorState::MonitorData **this,
        struct _LUID a2,
        unsigned int a3)
{
  struct CCursorState::MonitorData *v4; // rbx
  CCursorState *v5; // rcx
  struct CCursorState::MonitorData *v6; // [rsp+30h] [rbp+8h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorState::FindMonitorData)(this, &v6, a2, a3);
  v4 = v6;
  if ( v6 != this[11] )
  {
    EnterCriticalSection(&g_CursorManager);
    CCursorState::EnsureHardwareOverlayCleared(v5, v4);
    std::vector<CCursorState::MonitorData>::erase(this + 10, &v6, v4);
    LeaveCriticalSection(&g_CursorManager);
  }
}
