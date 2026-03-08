/*
 * XREFs of SiGetSystemPartition @ 0x14076E330
 * Callers:
 *     <none>
 * Callees:
 *     SiGetFirmwareSystemPartition @ 0x14076E380 (SiGetFirmwareSystemPartition.c)
 *     SiGetBootDeviceName @ 0x14076E464 (SiGetBootDeviceName.c)
 */

__int64 __fastcall SiGetSystemPartition(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  result = SiGetBootDeviceName(1, (unsigned int)L"WindowsSysPartDevice", 0, 0, 0, a2);
  if ( (int)result < 0 )
    return SiGetFirmwareSystemPartition(a1, a2);
  return result;
}
