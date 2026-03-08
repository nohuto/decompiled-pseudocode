/*
 * XREFs of SyspartGetSystemPartition @ 0x140A5C67C
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x140390584 (BiMapEfiDeviceForSpaces.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x140784278 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x14082BAB8 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(98LL, a1, a2, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemPartition, a1, a2, a3);
  return result;
}
