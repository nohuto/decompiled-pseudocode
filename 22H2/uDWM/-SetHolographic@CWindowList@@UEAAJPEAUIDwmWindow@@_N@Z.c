/*
 * XREFs of ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180016FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018B34 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180095424 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::SetHolographic(CWindowList *this, struct IDwmWindow *a2, bool a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rcx
  CTopLevelWindow *v9; // rcx
  int v11; // eax
  struct CWindowData *v12; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0xA60u);
  }
  else
  {
    v8 = v12;
    if ( v12 )
    {
      *((_BYTE *)v12 + 613) &= ~4u;
      *((_BYTE *)v8 + 613) |= 4 * a3;
      v9 = (CTopLevelWindow *)*((_QWORD *)v8 + 48);
      if ( v9 )
      {
        v11 = CTopLevelWindow::SetHolographic(v9, a3);
        v7 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xA68u);
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
