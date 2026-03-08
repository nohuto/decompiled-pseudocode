/*
 * XREFs of ReadRawMouseThrottlingThresholds @ 0x1C002E220
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C002E858 (-ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadRawMouseThrottlingThresholds(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  CMouseSensor *v5; // rcx

  v5 = *(CMouseSensor **)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304);
  if ( v5 )
    CMouseSensor::ReadRawMouseThrottlingThresholds(v5, a1);
}
