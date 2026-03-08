/*
 * XREFs of PopPowerRequestTableDeleteEntry @ 0x14097EAFC
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 */

BOOLEAN __fastcall PopPowerRequestTableDeleteEntry(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
}
