/*
 * XREFs of SyspartDirectGetFirmwareSystemPartition @ 0x14078E9A0
 * Callers:
 *     <none>
 * Callees:
 *     SiGetSystemDeviceName @ 0x1406B4A08 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartDirectGetFirmwareSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetFirmwareSystemPartition, a1, a2, a3);
}
