/*
 * XREFs of MiDecrementVadsBeingDeleted @ 0x140615D58
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A45098 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall MiDecrementVadsBeingDeleted(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 232), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 256), 0, 0);
  return result;
}
