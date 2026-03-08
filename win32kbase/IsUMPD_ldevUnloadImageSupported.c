/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x1C0271630
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  if ( qword_1C02D5C48 )
    return qword_1C02D5C48();
  else
    return 3221225659LL;
}
