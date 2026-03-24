/*
 * XREFs of IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C000CD00
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C000EE10 (bDynamicProcessAllDriverRealizations.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_45072801a0d31dffc7965423336b068f_::operator() @ 0x1C00C8860 (_lambda_45072801a0d31dffc7965423336b068f_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPDEVOBJ_bDisableHalftoneSupported()
{
  if ( qword_1C02556D0 )
    return qword_1C02556D0();
  else
    return 3221225659LL;
}
