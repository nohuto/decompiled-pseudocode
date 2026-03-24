/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x1C00B20BC
 * Callers:
 *     hdcOpenDCW @ 0x1C0022A00 (hdcOpenDCW.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  if ( qword_1C02556C0 )
    return qword_1C02556C0();
  else
    return 3221225659LL;
}
