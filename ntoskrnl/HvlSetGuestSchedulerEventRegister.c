/*
 * XREFs of HvlSetGuestSchedulerEventRegister @ 0x14053E1C0
 * Callers:
 *     KiHvEnlightenedGuestPriorityKick @ 0x140227EF4 (KiHvEnlightenedGuestPriorityKick.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140546A30 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlSetGuestSchedulerEventRegister(__int64 a1)
{
  return HvlpSetRegister64(589851LL, a1);
}
