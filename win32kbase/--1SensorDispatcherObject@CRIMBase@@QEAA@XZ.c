/*
 * XREFs of ??1SensorDispatcherObject@CRIMBase@@QEAA@XZ @ 0x1C00CB9E0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::~SensorDispatcherObject(CRIMBase::SensorDispatcherObject *this)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
}
