/*
 * XREFs of EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1406A4438
 * Callers:
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyEventIdPayloadFilter @ 0x14025EBC0 (EtwpApplyEventIdPayloadFilter.c)
 */

char __fastcall EtwpApplyEventIdPayloadFilterOnUserEvent(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  return EtwpApplyEventIdPayloadFilter(a1, a2, a3, a4 + 40, *(_WORD *)(a4 + 40), a5, a6, 1u, 0);
}
