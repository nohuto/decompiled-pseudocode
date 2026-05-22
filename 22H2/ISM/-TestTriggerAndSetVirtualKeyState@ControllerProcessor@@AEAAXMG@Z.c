/*
 * XREFs of ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXMG@Z @ 0x180123078
 * Callers:
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x180121F7C (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180122B2C (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 */

void __fastcall ControllerProcessor::TestTriggerAndSetVirtualKeyState(ControllerProcessor *this, float a2, __int16 a3)
{
  char v4; // r8

  if ( a2 < 0.1275 )
  {
    if ( a2 > 0.1075 )
      return;
    v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  ControllerProcessor::SetVirtualKeyState(this, a3, v4, 0);
}
