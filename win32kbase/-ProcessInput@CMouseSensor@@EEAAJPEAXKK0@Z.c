__int64 __fastcall CMouseSensor::ProcessInput(
        CMouseSensor *this,
        struct _MOUSE_INPUT_DATA *a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  bool v8; // r14
  unsigned int v9; // ebx
  struct DEVICEINFO *DeviceInfo; // rsi

  v8 = a2->UnitId == 0xFFFE;
  v9 = 0;
  DeviceInfo = CBaseInput::FindDeviceInfo(this, a5, v8);
  if ( DeviceInfo )
  {
    if ( (unsigned int)Feature_DisableMouseRateLimiting__private_IsEnabledDeviceUsage() )
    {
      if ( (unsigned int)CMouseProcessor::ProcessInput(*((_QWORD *)this + 234), DeviceInfo, a2, a4, v8) == 1 )
        RIMRefreshDeviceAttributes(*((_QWORD *)this + 1), *((_QWORD *)DeviceInfo + 2));
    }
    else
    {
      return (unsigned int)CMouseSensor::ProcessInputWithRateLimitingIfEnabled(this, DeviceInfo, a2, a4, v8);
    }
  }
  return v9;
}
