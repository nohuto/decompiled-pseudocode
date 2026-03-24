/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F1894
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C00730A0 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F1118 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F180C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F1850 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0115D84 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E5ACC (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C00706BC (IsChildWindowDpiBoundary.c)
 */

struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rbx

  v1 = a1;
  if ( !gfDwmChildWindowDpiIsolationEnabled )
    return (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( a1 )
  {
    do
    {
      if ( (unsigned int)IsTopLevelWindow((__int64)v1) )
        break;
      if ( (unsigned int)IsChildWindowDpiBoundary(v1) )
        break;
      v1 = (struct tagWND *)*((_QWORD *)v1 + 13);
    }
    while ( v1 );
  }
  return v1;
}
