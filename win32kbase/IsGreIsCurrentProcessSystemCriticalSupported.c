/*
 * XREFs of IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C007026C
 * Callers:
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C006F9B4 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     GdiProcessCallout @ 0x1C006FD60 (GdiProcessCallout.c)
 *     DereferenceW32Thread @ 0x1C0070180 (DereferenceW32Thread.c)
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreIsCurrentProcessSystemCriticalSupported()
{
  if ( qword_1C02D5FC8 )
    return qword_1C02D5FC8();
  else
    return 3221225659LL;
}
