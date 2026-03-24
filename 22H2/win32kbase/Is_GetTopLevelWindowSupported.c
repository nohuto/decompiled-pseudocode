/*
 * XREFs of Is_GetTopLevelWindowSupported @ 0x1C0071FD8
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0070D00 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceInputProcessDelay @ 0x1C0122640 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0122ED0 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_GetTopLevelWindowSupported()
{
  if ( qword_1C0256A98 )
    return qword_1C0256A98();
  else
    return 3221225659LL;
}
