/*
 * XREFs of PopPowerRequestFindEntryById @ 0x1406F56F8
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14034BCB0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14032D970 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PopPowerRequestFindEntryById(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
}
