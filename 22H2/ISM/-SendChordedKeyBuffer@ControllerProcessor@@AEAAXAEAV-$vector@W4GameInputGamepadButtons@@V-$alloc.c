/*
 * XREFs of ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x180121D08
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x180120D70 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x180047A7C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801203B8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::SendChordedKeyBuffer(ControllerProcessor *this, unsigned int **a2)
{
  unsigned int *v2; // rbx
  __int64 result; // rax
  unsigned int v6; // ebp
  int v7; // ecx

  v2 = *a2;
  result = 0LL;
  while ( v2 != a2[1] )
  {
    v6 = *v2;
    v7 = *v2 & 1;
    if ( v7 != (result & 1) )
    {
      if ( *((_DWORD *)this + 70) )
        ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 207, v7);
      else
        ControllerProcessor::BuildAndSendMouseInputInfo(this);
    }
    result = v6;
    ++v2;
  }
  return result;
}
