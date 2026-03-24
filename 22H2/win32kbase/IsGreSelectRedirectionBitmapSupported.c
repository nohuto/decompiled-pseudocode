/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1C0008A90
 * Callers:
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectRedirectionBitmapSupported()
{
  if ( qword_1C0255AA0 )
    return qword_1C0255AA0();
  else
    return 3221225659LL;
}
