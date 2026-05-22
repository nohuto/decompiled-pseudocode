/*
 * XREFs of ?CancelResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FCD20
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FDC84 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 */

__int64 __fastcall ResizeControllerHost::CancelResize(
        ResizeProcessor **this,
        struct BamoResizeContextualProcessorStub *a2,
        unsigned int a3,
        struct BamoResizeControllerClientProxy *a4)
{
  ResizeProcessor::CancelResize(this[7], a3, a4);
  return 0LL;
}
