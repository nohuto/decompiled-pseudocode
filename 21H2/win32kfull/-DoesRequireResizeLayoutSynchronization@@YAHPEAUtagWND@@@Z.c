/*
 * XREFs of ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C020AD94
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0211504 (xxxDrawDragRectEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 */

__int64 __fastcall DoesRequireResizeLayoutSynchronization(struct tagWND *a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 i; // rcx

  if ( (unsigned int)IsTopLevelWindow((__int64)a1) && *(char *)(*(_QWORD *)(v2 + 40) + 25LL) < (char)v1 )
  {
    for ( i = *(_QWORD *)(v2 + 112); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(char *)(*(_QWORD *)(i + 40) + 25LL) < (char)v1 )
        return 1;
    }
  }
  return v1;
}
