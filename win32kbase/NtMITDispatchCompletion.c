__int64 __fastcall NtMITDispatchCompletion(int a1, unsigned int a2)
{
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    UserDispatchMITCompletion(a1, a2);
  else
    UserSetLastError(5);
  return 0LL;
}
