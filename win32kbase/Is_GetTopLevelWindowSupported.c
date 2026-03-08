/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x1C000CBB0
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00152E0 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceInputProcessDelay @ 0x1C0033C70 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0092210 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  if ( qword_1C02D7020 )
    return qword_1C02D7020();
  else
    return 3221225659LL;
}
