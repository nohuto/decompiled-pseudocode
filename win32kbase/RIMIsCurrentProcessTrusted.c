__int64 __fastcall RIMIsCurrentProcessTrusted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  unsigned int v5; // ebx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v5 = 0;
  if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
    || (int)CheckDwmProcessSecurityIdentifier() >= 0 )
  {
    return 1;
  }
  return v5;
}
