/*
 * XREFs of SyspartDirectGetSystemPartition @ 0x140784250
 * Callers:
 *     <none>
 * Callees:
 *     SiGetSystemDeviceName @ 0x140784278 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartDirectGetSystemPartition(__int64 a1, unsigned int a2, __int64 a3)
{
  return SiGetSystemDeviceName(SiGetSystemPartition, a1, a2, a3);
}
