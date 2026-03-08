/*
 * XREFs of IvtInvalidateRemappingTableEntries @ 0x1402F4800
 * Callers:
 *     IvtInvalidateRemappingTableEntry @ 0x1402F47E0 (IvtInvalidateRemappingTableEntry.c)
 *     IvtUpdateRemappingDestination @ 0x14052B780 (IvtUpdateRemappingDestination.c)
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x1402F4874 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1402F49A4 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall IvtInvalidateRemappingTableEntries(__int64 a1, _DWORD *a2)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  v4[1] = 0LL;
  v4[0] = 4LL;
  if ( a2 )
    v4[0] = ((unsigned __int64)(unsigned __int16)*a2 << 32) | 0x14;
  IvtIommuSendCommand(a1, v4, 0LL);
  return IvtIommuWaitCommand(a1, 0LL, 0LL);
}
