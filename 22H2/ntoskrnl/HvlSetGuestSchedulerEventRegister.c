/*
 * XREFs of HvlSetGuestSchedulerEventRegister @ 0x140540660
 * Callers:
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B2DF0 (KiHvEnlightenedGuestPriorityKick.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140548ED0 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlSetGuestSchedulerEventRegister(__int64 a1)
{
  return HvlpSetRegister64(589851LL, a1);
}
