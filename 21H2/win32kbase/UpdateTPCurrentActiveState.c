/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C000B400
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C000B2E0 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C011C010 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C000B460 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateMouseConnectionState @ 0x1C000B584 (UpdateMouseConnectionState.c)
 *     UpdateInputSettingWnfState @ 0x1C0138AA0 (UpdateInputSettingWnfState.c)
 */

__int64 UpdateTPCurrentActiveState()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = -__CFSHR__(*(&qword_1C024FFD0 + 1), 4);
  UpdateMouseConnectionState();
  if ( (*(_BYTE *)(&qword_1C024FFD0 + 1) & 1) != 0 )
    *(&qword_1C024FFD0 + 1) |= 8u;
  else
    *(&qword_1C024FFD0 + 1) = *(&qword_1C024FFD0 + 1) & 0xFFFFFFF7 | ((unsigned __int8)(~*((_BYTE *)&qword_1C024FFD0 + 4) & 0x10) >> 1);
  CPTPProcessor::EnvironmentChanged();
  result = v0 != 0;
  if ( (unsigned __int8)(*(_BYTE *)(&qword_1C024FFD0 + 1) & 8) >> 3 != (_DWORD)result )
    return UpdateInputSettingWnfState(175LL);
  return result;
}
