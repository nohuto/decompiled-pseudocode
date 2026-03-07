_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PsGetCurrentProcess(a1, a2, a3, a4) == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
}
