/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140ABE0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(unsigned int a1)
{
  return ((__int64 (__fastcall *)(_QWORD))pXdvIoBuildDeviceIoControlRequest)(a1);
}
