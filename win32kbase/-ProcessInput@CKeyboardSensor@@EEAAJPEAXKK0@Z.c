/*
 * XREFs of ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C000E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C000E950 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C000EB08 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01A7490 (RIMRefreshDeviceAttributes.c)
 */

__int64 __fastcall CKeyboardSensor::ProcessInput(
        CKeyboardSensor *this,
        _WORD *a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  bool v8; // si
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v10; // rcx
  bool v12; // [rsp+20h] [rbp-18h]

  v8 = (unsigned __int16)(*a2 + 3) <= 1u;
  DeviceInfo = CBaseInput::FindDeviceInfo(this, a5, v8);
  if ( DeviceInfo )
  {
    v12 = v8;
    if ( (unsigned int)CKeyboardProcessor::ProcessInput(v10, DeviceInfo, a2, a4, v12) == 1 )
      RIMRefreshDeviceAttributes(*((_QWORD *)this + 1), a5);
  }
  return 0LL;
}
