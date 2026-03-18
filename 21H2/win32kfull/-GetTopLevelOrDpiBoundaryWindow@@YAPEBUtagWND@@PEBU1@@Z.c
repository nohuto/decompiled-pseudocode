/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C0069908
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C004A618 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00FD674 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00FD738 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C0100464 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C014C4E8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C016B98A (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 */

const struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(const struct tagWND *a1)
{
  const struct tagWND *v1; // rbx

  v1 = a1;
  if ( !gfDwmChildWindowDpiIsolationEnabled )
    return (const struct tagWND *)GetTopLevelWindow(a1);
  if ( a1 )
  {
    do
    {
      if ( (unsigned int)IsTopLevelWindow(v1) )
        break;
      if ( IsChildWindowDpiBoundary(v1) )
        break;
      v1 = (const struct tagWND *)*((_QWORD *)v1 + 13);
    }
    while ( v1 );
  }
  return v1;
}
