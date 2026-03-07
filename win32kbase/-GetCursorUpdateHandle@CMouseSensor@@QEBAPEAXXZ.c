void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this)
{
  void *SensorHostingProcessHandle; // rbx
  void *DispatcherHandleByName; // rax
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  void *TargetHandle; // [rsp+70h] [rbp+18h] BYREF

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 182LL);
  TargetHandle = (void *)-1LL;
  SensorHostingProcessHandle = CBaseInput::GetSensorHostingProcessHandle(this);
  if ( SensorHostingProcessHandle != (void *)-1LL )
  {
    DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 0xEu, 0);
    if ( DispatcherHandleByName )
    {
      v4 = ZwDuplicateObject(
             SensorHostingProcessHandle,
             DispatcherHandleByName,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x100000u,
             0,
             2u);
      v5 = (__int64)TargetHandle;
      if ( v4 < 0 )
        v5 = -1LL;
      TargetHandle = (void *)v5;
    }
    ZwClose(SensorHostingProcessHandle);
  }
  return TargetHandle;
}
