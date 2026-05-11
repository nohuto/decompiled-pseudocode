/*
 * XREFs of USBMidiInGetCurrentTime @ 0x1C0003DC0
 * Callers:
 *     UsbHwFrameCountTimestamp @ 0x1C0003E1C (UsbHwFrameCountTimestamp.c)
 *     USBHwGetClockRatio @ 0x1C0003F84 (USBHwGetClockRatio.c)
 *     USBType1AdjustPositionWithin1Ms @ 0x1C0004804 (USBType1AdjustPositionWithin1Ms.c)
 *     USBType1RenderBytePosition @ 0x1C00048E0 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x1C0007460 (USBCaptureBytePosition.c)
 *     USBMIDIInReQueueUrb @ 0x1C0007980 (USBMIDIInReQueueUrb.c)
 *     USBMidiInStateChangePin @ 0x1C0007FA0 (USBMidiInStateChangePin.c)
 * Callees:
 *     <none>
 */

unsigned __int64 USBMidiInGetCurrentTime()
{
  LARGE_INTEGER v0; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v0 = KeQueryPerformanceCounter(&PerformanceFrequency);
  return ((10000000 * HIDWORD(v0.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
       + (((10000000 * HIDWORD(v0.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
        + 10000000LL * v0.LowPart)
       / PerformanceFrequency.QuadPart;
}
