/*
 * XREFs of SyspartGetSystemPartition @ 0x1409735A0
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x1405C3E74 (BiMapEfiDeviceForSpaces.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x1406B4A08 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140786054 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(98LL, a1, a2, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemPartition, a1, a2, a3);
  return result;
}
