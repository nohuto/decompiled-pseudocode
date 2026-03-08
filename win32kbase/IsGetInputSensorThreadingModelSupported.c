/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x1C0096E10
 * Callers:
 *     ApiSetGetInputSensorThreadingModel @ 0x1C0096D10 (ApiSetGetInputSensorThreadingModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetInputSensorThreadingModelSupported()
{
  if ( qword_1C02D7738 )
    return qword_1C02D7738();
  else
    return 3221225659LL;
}
