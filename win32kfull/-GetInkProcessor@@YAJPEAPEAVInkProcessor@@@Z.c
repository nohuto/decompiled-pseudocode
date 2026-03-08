/*
 * XREFs of ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1C0200C34
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C0149830 (InkProcessorOnPointerMessagePosted.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200C6C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200D38 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C0200DDC (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200E78 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0200F1C (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C0200FC0 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 *     InkProcessorIsInkDevice @ 0x1C02010B0 (InkProcessorIsInkDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInkProcessor(struct InkProcessor **a1)
{
  struct InkProcessor *v2; // rdx

  v2 = *(struct InkProcessor **)(SGDGetUserSessionState(a1) + 3440);
  *a1 = v2;
  return v2 == 0LL ? 0xC0000001 : 0;
}
