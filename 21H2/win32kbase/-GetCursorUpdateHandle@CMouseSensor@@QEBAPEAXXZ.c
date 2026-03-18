/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C009D640
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C009D580 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C005DFB4 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C009D6FC (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void *SensorHostingProcessHandle; // rbx
  void *DispatcherHandleByName; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  void *TargetHandle; // [rsp+58h] [rbp+10h] BYREF

  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  TargetHandle = (void *)-1LL;
  SensorHostingProcessHandle = CBaseInput::GetSensorHostingProcessHandle(this);
  if ( SensorHostingProcessHandle != (void *)-1LL )
  {
    DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 14LL, 0LL);
    if ( DispatcherHandleByName )
    {
      v7 = ZwDuplicateObject(
             SensorHostingProcessHandle,
             DispatcherHandleByName,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x100000u,
             0,
             2u);
      v8 = (__int64)TargetHandle;
      if ( v7 < 0 )
        v8 = -1LL;
      TargetHandle = (void *)v8;
    }
    ZwClose(SensorHostingProcessHandle);
  }
  return TargetHandle;
}
