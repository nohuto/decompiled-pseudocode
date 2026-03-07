void __fastcall CRIMBase::SensorDispatcherObject::~SensorDispatcherObject(CRIMBase::SensorDispatcherObject *this)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
}
