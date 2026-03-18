/*
 * XREFs of SyspartDirectGetSystemDisk @ 0x140882A10
 * Callers:
 *     <none>
 * Callees:
 *     SiGetSystemDeviceName @ 0x1407D38D8 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartDirectGetSystemDisk(void *a1, unsigned int a2, unsigned int *a3)
{
  return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk, a1, a2, a3);
}
