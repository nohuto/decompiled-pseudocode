/*
 * XREFs of RaDsmLedStatusToNtStatus @ 0x1C00445C8
 * Callers:
 *     RaidDsmGetLedState @ 0x1C0044F94 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x1C004504C (RaidDsmGetSupportedLedState.c)
 *     RaidDsmSetLedState @ 0x1C00451CC (RaidDsmSetLedState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaDsmLedStatusToNtStatus(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0:
      return 0LL;
    case 1:
      return 3221225659LL;
    case 2:
      return 3221225485LL;
  }
  result = 3221225473LL;
  if ( (unsigned int)(a1 - 3) <= 2 )
    return 3221225860LL;
  return result;
}
