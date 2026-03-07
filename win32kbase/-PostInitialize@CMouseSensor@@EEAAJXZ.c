__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  struct CMouseProcessor **v1; // rdi
  int Instance; // edi
  __int64 result; // rax

  v1 = (struct CMouseProcessor **)((char *)this + 1872);
  if ( *((_QWORD *)this + 234) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 62LL);
  Instance = CMouseProcessor::CreateInstance(v1);
  if ( Instance >= 0 )
  {
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
      CIVChannel::Initialize((CMouseSensor *)((char *)this + 1352));
    CMouseSensor::SetInputRateLimitingTime(this, 0);
    *((_QWORD *)this + 233) = CRIMBase::GetDispatcherHandleByName(this, 8LL, 1LL);
  }
  *((_QWORD *)this + 249) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 486) / 0x3E8;
  result = (unsigned int)Instance;
  *((_QWORD *)this + 250) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 492) / 0x3E8;
  return result;
}
