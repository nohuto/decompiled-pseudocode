/*
 * XREFs of ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18003D694
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180029BEC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18003D5F0 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z @ 0x1800BE6BC (-PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetExcludeFromDDA(CTopLevelWindow *this, bool a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( a2 != ((*((_BYTE *)this + 241) & 4) != 0) )
  {
    *((_BYTE *)this + 241) = (4 * a2) | *((_BYTE *)this + 241) & 0xFB;
    v4 = CVisualProxy::PartitionSetExcludeFromDDA(*((CVisualProxy **)this + 2), a2);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x11Cu);
  }
  return v2;
}
