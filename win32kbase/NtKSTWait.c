__int64 NtKSTWait()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    return (unsigned int)UserKSTWait();
  else
    UserSetLastError(5);
  return v0;
}
