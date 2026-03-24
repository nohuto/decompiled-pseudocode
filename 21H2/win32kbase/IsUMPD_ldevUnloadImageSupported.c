/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x1C00B1D7C
 * Callers:
 *     hdcOpenDCW @ 0x1C0021590 (hdcOpenDCW.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9900 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  if ( qword_1C02566C0 )
    return qword_1C02566C0();
  else
    return 3221225659LL;
}
