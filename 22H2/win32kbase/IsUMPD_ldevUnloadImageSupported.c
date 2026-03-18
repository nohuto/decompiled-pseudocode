/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x1C02327C8
 * Callers:
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  if ( qword_1C0294AD8 )
    return qword_1C0294AD8();
  else
    return 3221225659LL;
}
