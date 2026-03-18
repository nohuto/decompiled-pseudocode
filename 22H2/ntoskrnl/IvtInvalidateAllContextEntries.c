/*
 * XREFs of IvtInvalidateAllContextEntries @ 0x1403B56C0
 * Callers:
 *     IvtInitializeIommu @ 0x140A8A670 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x14035FC64 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x14035FD94 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

__int64 __fastcall IvtInvalidateAllContextEntries(__int64 a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v3[1] = 0LL;
  v3[0] = 17LL;
  IvtIommuSendCommand(a1, (unsigned __int64)v3, 0);
  return IvtIommuWaitCommand(a1, 0, 0);
}
