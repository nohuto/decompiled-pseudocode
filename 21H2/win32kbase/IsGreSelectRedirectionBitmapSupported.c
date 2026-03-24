/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1C0007610
 * Callers:
 *     DestroyCacheDC @ 0x1C00074F0 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0039C70 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectRedirectionBitmapSupported()
{
  if ( qword_1C0256AA0 )
    return qword_1C0256AA0();
  else
    return 3221225659LL;
}
