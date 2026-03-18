/*
 * XREFs of KiGetCurrentScheduledThreadProcessor @ 0x1405772F0
 * Callers:
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
 *     KiApplyForegroundBoostThread @ 0x14034FED8 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCurrentScheduledThreadProcessor(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( !result )
    return *(_QWORD *)(a1 + 8);
  return result;
}
