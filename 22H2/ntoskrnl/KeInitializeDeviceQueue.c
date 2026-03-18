/*
 * XREFs of KeInitializeDeviceQueue @ 0x1403647A0
 * Callers:
 *     IoCreateDevice @ 0x14076B4E0 (IoCreateDevice.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1408298B0 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140947240 (IoCreateController.c)
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
