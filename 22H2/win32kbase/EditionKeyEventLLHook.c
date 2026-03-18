/*
 * XREFs of EditionKeyEventLLHook @ 0x1C00B0040
 * Callers:
 *     ApiSetEditionKeyEventLLHook @ 0x1C006B208 (ApiSetEditionKeyEventLLHook.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionKeyEventLLHook(__int64 a1, unsigned __int16 a2)
{
  if ( qword_1C0296768 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0296768)(a1, a2);
  else
    return 0LL;
}
