/*
 * XREFs of ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C00C5600
 * Callers:
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C00C55D0 (ApplyGatheredKeyboardDeviceCount.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C0042A40 (UpdateKeyLights.c)
 */

void __fastcall CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(CKeyboardProcessor *this, __int64 a2, __int64 a3)
{
  __int32 v3; // ebx

  v3 = a2;
  if ( (unsigned int)a2 > *((_DWORD *)this + 5) )
  {
    UpdateKeyLights(0LL, a2, a3);
    gdwUpdateKeyboard |= 1u;
  }
  _InterlockedExchange((volatile __int32 *)this + 5, v3);
}
