/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x1C00C1CDC
 * Callers:
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  if ( qword_1C029B440 )
    return qword_1C029B440();
  else
    return 3221225659LL;
}
