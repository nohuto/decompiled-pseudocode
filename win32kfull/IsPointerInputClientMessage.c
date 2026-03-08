/*
 * XREFs of IsPointerInputClientMessage @ 0x1C00385AC
 * Callers:
 *     _PostThreadMessageEx @ 0x1C0037298 (_PostThreadMessageEx.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C00379E8 (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C0037EC0 (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z @ 0x1C014331C (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputClientMessage(unsigned int a1)
{
  return a1 >= 0x245 && a1 <= 0x257 && a1 != 589;
}
