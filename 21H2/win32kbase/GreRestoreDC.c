/*
 * XREFs of GreRestoreDC @ 0x1C00BEF90
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1)
{
  return GreRestoreDCInternal(a1);
}
