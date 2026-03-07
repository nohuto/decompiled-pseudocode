_BOOL8 __fastcall UserUnsafeIsProcessDwm(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a1 )
    return a1 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  return result;
}
