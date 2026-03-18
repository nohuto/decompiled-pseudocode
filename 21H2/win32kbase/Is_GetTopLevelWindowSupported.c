/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x1C006C860
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C0046060 (EtwTraceMessageCheckDelay.c)
 *     EtwTraceInputProcessDelay @ 0x1C0049830 (EtwTraceInputProcessDelay.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C006D5A0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  if ( qword_1C029C7D8 )
    return qword_1C029C7D8();
  else
    return 3221225659LL;
}
