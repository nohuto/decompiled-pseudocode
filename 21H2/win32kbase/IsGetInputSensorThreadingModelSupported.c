/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x1C0053038
 * Callers:
 *     ApiSetGetInputSensorThreadingModel @ 0x1C0052F34 (ApiSetGetInputSensorThreadingModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetInputSensorThreadingModelSupported()
{
  if ( qword_1C029CF80 )
    return qword_1C029CF80();
  else
    return 3221225659LL;
}
