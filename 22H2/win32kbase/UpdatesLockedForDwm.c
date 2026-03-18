/*
 * XREFs of UpdatesLockedForDwm @ 0x1C009B210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatesLockedForDwm(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
    return PsGetCurrentProcess(a1, a2, a3) != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  return v3;
}
