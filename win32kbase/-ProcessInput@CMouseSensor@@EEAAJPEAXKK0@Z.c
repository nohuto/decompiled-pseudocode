/*
 * XREFs of ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00F3CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C000E950 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     Feature_DisableMouseRateLimiting__private_IsEnabledDeviceUsage @ 0x1C00E10A4 (Feature_DisableMouseRateLimiting__private_IsEnabledDeviceUsage.c)
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F3D88 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F4B20 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01A7490 (RIMRefreshDeviceAttributes.c)
 */

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
