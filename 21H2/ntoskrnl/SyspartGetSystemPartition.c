/*
 * XREFs of SyspartGetSystemPartition @ 0x140A2150C
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x14064D064 (BiMapEfiDeviceForSpaces.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x1406CE7A8 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140813FE4 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(98LL, a1, a2, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemPartition, a1, a2, a3);
  return result;
}
