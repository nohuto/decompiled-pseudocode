__int64 __fastcall UpdatesLockedForDwm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
    return PsGetCurrentProcess(a1, a2, a3, a4) != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  return v4;
}
