/*
 * XREFs of EditionKeyEventLLHook @ 0x1C00802C8
 * Callers:
 *     ApiSetEditionKeyEventLLHook @ 0x1C0080144 (ApiSetEditionKeyEventLLHook.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionKeyEventLLHook(__int64 a1, unsigned __int16 a2)
{
  if ( qword_1C02D78E0 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C02D78E0)(a1, a2);
  else
    return 0LL;
}
