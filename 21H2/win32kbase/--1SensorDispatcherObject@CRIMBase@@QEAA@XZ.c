/*
 * XREFs of ??1SensorDispatcherObject@CRIMBase@@QEAA@XZ @ 0x1C00C03A0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::~SensorDispatcherObject(
        CRIMBase::SensorDispatcherObject *this,
        __int64 a2,
        __int64 a3)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
}
