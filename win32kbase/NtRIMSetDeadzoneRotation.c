__int64 __fastcall NtRIMSetDeadzoneRotation(unsigned int a1)
{
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    return 5LL;
  RIMSetDeadzoneRotation(a1);
  return 0LL;
}
