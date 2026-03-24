/*
 * XREFs of IsGetRedirectionBitmapSupported @ 0x1C009980C
 * Callers:
 *     GetMonitorDC @ 0x1C0039C70 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsGetRedirectionBitmapSupported(__int64 a1, __int64 a2, __int64 a3)
{
  if ( qword_1C0257688 )
    return qword_1C0257688(a1, a2, a3);
  else
    return 3221225659LL;
}
