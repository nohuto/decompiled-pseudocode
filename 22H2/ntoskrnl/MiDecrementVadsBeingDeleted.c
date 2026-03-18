/*
 * XREFs of MiDecrementVadsBeingDeleted @ 0x140618208
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x140A320A8 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47D68 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

LONG __fastcall MiDecrementVadsBeingDeleted(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 232), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 256), 0, 0);
  return result;
}
