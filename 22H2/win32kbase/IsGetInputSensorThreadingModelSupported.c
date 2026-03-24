/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x1C008B2F8
 * Callers:
 *     ApiSetGetInputSensorThreadingModel @ 0x1C008B25C (ApiSetGetInputSensorThreadingModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetInputSensorThreadingModelSupported()
{
  if ( qword_1C0257338 )
    return qword_1C0257338();
  else
    return 3221225659LL;
}
