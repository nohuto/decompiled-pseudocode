/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x1C0071528
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0070250 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceInputProcessDelay @ 0x1C0122370 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0122C00 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  if ( qword_1C0257A98 )
    return qword_1C0257A98();
  else
    return 3221225659LL;
}
