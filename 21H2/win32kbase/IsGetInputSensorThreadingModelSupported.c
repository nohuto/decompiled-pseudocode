/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x1C008A458
 * Callers:
 *     ApiSetGetInputSensorThreadingModel @ 0x1C008A3BC (ApiSetGetInputSensorThreadingModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetInputSensorThreadingModelSupported()
{
  if ( qword_1C0258338 )
    return qword_1C0258338();
  else
    return 3221225659LL;
}
