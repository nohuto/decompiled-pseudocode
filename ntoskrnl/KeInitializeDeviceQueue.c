/*
 * XREFs of KeInitializeDeviceQueue @ 0x1402F96C0
 * Callers:
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140821840 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140944220 (IoCreateController.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  DeviceQueue->Lock = 0LL;
  DeviceQueue->DeviceListHead.Blink = &DeviceQueue->DeviceListHead;
  DeviceQueue->DeviceListHead.Flink = &DeviceQueue->DeviceListHead;
  DeviceQueue->Busy = 0;
  DeviceQueue->1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)(unsigned __int8)*(_QWORD *)&DeviceQueue->1;
  *(_DWORD *)&DeviceQueue->Type = 2621460;
}
