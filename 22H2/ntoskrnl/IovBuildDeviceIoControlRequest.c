/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140AC20A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(unsigned int a1)
{
  return ((__int64 (__fastcall *)(_QWORD))pXdvIoBuildDeviceIoControlRequest)(a1);
}
