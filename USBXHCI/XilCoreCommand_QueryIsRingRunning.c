/*
 * XREFs of XilCoreCommand_QueryIsRingRunning @ 0x1C0052B1C
 * Callers:
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030270 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilRegister_ReadUlong64 @ 0x1C003F338 (XilRegister_ReadUlong64.c)
 */

__int64 __fastcall XilCoreCommand_QueryIsRingRunning(__int64 *a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v7; // r9
  __int64 result; // rax

  v3 = *a1;
  v5 = a1[1];
  *a3 = 0;
  v7 = *(_QWORD *)(v3 + 8);
  *a2 = 0;
  result = XilRegister_ReadUlong64(*(_QWORD *)(v7 + 88), v5);
  if ( result == -1 )
  {
    *a3 = 1;
  }
  else if ( (result & 8) != 0 )
  {
    *a2 = 1;
  }
  return result;
}
