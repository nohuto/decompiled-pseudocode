void __fastcall CKernelSensorThread::~CKernelSensorThread(CKernelSensorThread *this)
{
  *(_QWORD *)this = &CKernelSensorThread::`vftable';
  CKernelSensorThread::DestroyEventHandles(this);
  *(_QWORD *)this = &CInputThreadBase::`vftable';
  if ( *((_QWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
}
