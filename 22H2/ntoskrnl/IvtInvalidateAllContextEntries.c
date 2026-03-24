/*
 * XREFs of IvtInvalidateAllContextEntries @ 0x1404E05A0
 * Callers:
 *     IvtInitializeIommu @ 0x1409A9A90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuSendCommand @ 0x1404E0770 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404E0970 (IvtIommuWaitCommand.c)
 */

__int64 __fastcall IvtInvalidateAllContextEntries(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = 0LL;
  v4[0] = 17LL;
  IvtIommuSendCommand(a1, v4, 0LL);
  return IvtIommuWaitCommand(a1, v2, 0LL);
}
