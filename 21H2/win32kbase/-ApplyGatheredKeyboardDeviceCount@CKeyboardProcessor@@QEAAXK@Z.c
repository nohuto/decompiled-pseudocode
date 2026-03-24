/*
 * XREFs of ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C00C4E80
 * Callers:
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C00B7F50 (ApplyGatheredKeyboardDeviceCount.c)
 * Callees:
 *     UpdateKeyLights @ 0x1C00B0860 (UpdateKeyLights.c)
 */

void __fastcall CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(CKeyboardProcessor *this, unsigned __int32 a2)
{
  if ( a2 > *((_DWORD *)this + 5) )
  {
    UpdateKeyLights(0LL);
    gdwUpdateKeyboard |= 1u;
  }
  _InterlockedExchange((volatile __int32 *)this + 5, a2);
}
