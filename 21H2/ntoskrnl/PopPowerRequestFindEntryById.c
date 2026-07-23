/*
 * XREFs of PopPowerRequestFindEntryById @ 0x140670048
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140270EE0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 */

PVOID __fastcall PopPowerRequestFindEntryById(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
}
