/*
 * XREFs of sub_1800C1CC0 @ 0x1800C1CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C04D0 @ 0x1800C04D0 (sub_1800C04D0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C1CC0(PTP_CALLBACK_INSTANCE Instance, struct _RTL_CRITICAL_SECTION *Context, PTP_TIMER Timer)
{
  EnterCriticalSection(Context);
  sub_1800C04D0(Context);
  if ( Context )
    LeaveCriticalSection(Context);
}
